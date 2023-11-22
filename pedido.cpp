#include <iostream>
#include "pedido.h"

using namespace std;

Pedido::Pedido(){
}
Pedido::~Pedido(void) { cout << "classe pedido destruida" << endl; }

float Pedido::calcularValorTotal(){
    return 0;
}

void Pedido::setFormaPagamento(string _formaPagamento){
    formaPagamento = _formaPagamento;
}

string Pedido::getFormaPagamento(){
    return formaPagamento;
}

void Pedido::setVetorPizza(vector <Pizza> _pizzaPedido){
    pizzaPedido = _pizzaPedido; 
}

void Pedido::setVetorBebida(vector <Bebida> _bebidaPedido){
    bebidaPedido = _bebidaPedido;
} 

void Pedido::vetorBebidas(){
    Bebida setBebida;
    setBebida.inicializandoBebida();
    bebidaPedido.push_back(setBebida);
}

void Pedido::vetorPizzas(){ //adiciona a primeira pizza inicializada na primeira posicao do vetor de pizzas 
    Pizza setPizza;
    setPizza.inicializandoPizza();
    pizzaPedido.push_back(setPizza);
    cout << "Deseja adicionar outra pizza? Caso sim digite 1, se nao digite 0"
       << endl;
  cin >> maisPizza;
  if (maisPizza == 1) 
    vetorPizzas();
  
}

void Pedido::imprimePedido(){
     for (int i = 0; i < pizzaPedido.size(); i++)
    pizzaPedido[i].imprimePizza();
  cout << endl;
}
