#include <iostream>
#include "usuario.h"
#include "cardapio.h"
#include "interface.h"
#include "pedido.h"
#include "banco__de_dados.h"

void Interface::PossuiCadastro(int& cpf1){
    unsigned cadastro = 0;

    cout << "Seja Bem vindo(a)! Você possui cadastro?" << endl
    << "Se sim digite 1, se nao digite qualquer tecla." << endl;
    
    cin >> cadastro;
    
    if(cadastro == 1){
        Fazer_login( cpf1);
        return;
     }
    else{
        Usuario user({}, {}, {}, {});

        cout << "Iniciando o cadastro:" << endl;
        user.cadastroInicial(cpf1);
    }
}

void Interface::Fazer_login(int& cpf1){
    string name;
    int cpf_l;
    int confirmacaoPedido;
    
    cout << "Digite seu CPF: ";
    cin >> cpf_l;
    cpf1 = cpf_l;
    Data_base data;

    if(data.ler_banco_de_dados(cpf_l, name)){
        cout << "\nParabéns " + name +" o seu login foi realizado com sucesso! Caso queira prosseguir com o pedido, digite 1, caso contrário digite qualquer outra tecla.\n";
        cin >> confirmacaoPedido;

        if(confirmacaoPedido == 1){ 
          cout << "Prosseguindo com pedido" << endl;
          
        } 
        else{
            while (confirmacaoPedido != 1){
                cout << "Ficamos aguardando por você! Digite 1 para prosseguir com o pedido." << endl;
                cin >> confirmacaoPedido;
            }           
        }
    }
    else{
        cout << "Cpf incorreto, tente novamente.\n\n";
        Fazer_login(cpf1);
      }
   }
    
