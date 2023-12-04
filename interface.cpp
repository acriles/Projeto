#include <iostream>
#include "usuario.h"
#include "cardapio.h"
#include "interface.h"
#include "pedido.h"
#include "banco__de_dados.h"

void Interface::Possui_Cadastro(){
    unsigned cadastro = 0;
    cout << "Seja Bem vindo! Você possui cadastro?" << endl
    << "Se sim digite 1, se não digite qualquer tecla." << endl;
    cin >> cadastro;
    
    if(cadastro == 1){
        Fazer_Login();
        return;
     } 
    else{
        Usuario user({}, {}, {}, {});

        cout << "Iniciando o cadastro:" << endl;
        user.cadastroInicial();
    }
}

void Interface::Fazer_Login(){
    string name;
    int cpf_l;
    int confirmacaoPedido;
    
    cout << "Digite seu CPF: ";
    cin >> cpf_l;
    
    Data_base data;

    if(data.Ler_Banco_De_Dados(cpf_l, name)){
        cout << "\nParabéns " + name +" o seu login foi realizado com sucesso! Caso queira prosseguir com o pedido, digite 1, caso contrário digite qualquer outra tecla.\n";
        cin >> confirmacaoPedido;

        if(confirmacaoPedido == 1){ 
          cout << "Prosseguindo com pedido" << endl;
          return;
        } 
        else{
           cout << "Ficamos aguardando por você!" << endl;
           return;
        }
    }
    else{
        cout << "CPF incorreto. Tente novamente.\n\n";
        Fazer_Login();
      }
   }
    
