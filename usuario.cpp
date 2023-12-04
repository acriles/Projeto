#include <iostream>
#include "usuario.h"
#include "cardapio.h"
#include "pedido.h"
#include "banco__de_dados.h"
#include "interface.h"

using namespace std;

Usuario::Usuario(string _nome, string _endereco, int _telefone, int _cpf){
    cpf = _cpf;
    nome = _nome;
    endereco = _endereco;
    telefone = _telefone;
}


Usuario::~Usuario(void){ 
    nome.clear();
    endereco.clear();
    cout << "Classe destruida" << endl;
}


void Usuario::setNome(string _nome){
    nome = _nome;
}


string Usuario::getNome(){
    return nome;
}


void Usuario::setTelefone(int _telefone){
    telefone = _telefone;
}


void Usuario::setCpf(int _cpf){
    cpf = _cpf;
}


void Usuario::setEndereco(string _endereco){
    endereco = _endereco;
}


string Usuario::getEndereco(){
    return endereco;
}


int Usuario::getTelefone(){
    return telefone;
}
     
void Usuario::cadastroInicial(){
    cout << "Digite seu nome" << endl;
    cin.ignore();

    getline(cin, nome);  cout << "Insira agora seu telefone" << endl;
    cin >> telefone;
  
    cout << "Por ultimo, insira seu cpf" << endl;
    cin >> cpf;
  
    confirmar_Usuario();
}


void Usuario::confirmar_Usuario(){
    int confimar_dados;
    int confirmacaoPedido;

    cout << "Confirmando seus dados: "<< endl 
    << "Nome:" <<  nome << endl << "Telefone:" << telefone << endl << "Cpf:" << cpf << endl;

    cout << "Digite 1 para confirmar o cadastro e 2 para cancelar.\n";

    int cpf_analise = cpf;
    cin >> confimar_dados;

    Data_base data;

    if(confimar_dados  == 1){
        if(data.ler_banco_de_dados(cpf_analise, nome)){
            cout << "CPF já está cadastrado.\n";
            cout << "Reiniciando o cadastro:" << endl; 
            cadastroInicial();
        }
    }

    else if(data.inserir_usuario(nome, endereco, telefone, cpf)){
        cout << "\nCadastro realizado com sucesso!\nCaso queira prosseguir com o pedido, digite 1, caso contrário digite qualaquer outra tecla.\n";
    }

    else if(confimar_dados  == 2){
        Interface inter;
        cout << "Iniciando Login!" <<endl;
        inter.Fazer_login();
    }
    else{
        cout << "Você digitou:"<< confimar_dados <<endl;
        confirmar_Usuario();
    }
}


void Usuario:: cadastrado(){
    int confirmacaoPedido;
    cin >> confirmacaoPedido; 
    if(confirmacaoPedido ==1){
        cout << "Prosseguindo com pedido" <<endl;
        return;
    } 
    else if(confirmacaoPedido == 2){
        cout << "Ficamos aguardando por você!" <<endl;
        cout << "Digite 1 para prosseguir com o pedido ou 2 para aguardar." <<endl;
        cadastrado();
    }
}
