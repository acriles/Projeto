#include <iostream>
#include "pedido.h"

using namespace std;

//Construtor da classe Pedido 
Pedido::Pedido(){
}

//Destrutor da classe 
Pedido::~Pedido(void) { cout << "classe pedido destruida" << endl; }

//Metodo calcula o valor final 
float Pedido::calcularValorTotal(){
    return 0;
}

//Metodos de set e get
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

//Metodo que seta os atributos da pizza escolhidos pelo usuario e adiciona-a no pedido das pizzas 
void Pedido::vetorPizzas(
    Cardapio _cardapio) { // adiciona a primeira pizza inicializada na
  // int maisPizza;          // primeira posicao do vetor de pizzas
  Pizza PedidoPizza;
  bool contem = false;
  int escolha;
  _cardapio.imprimeCardapioPizzas();
  // getPizzas();
  cout << "qual a pizza de sua escolha?" << endl;
  cin >> escolha;

  for (int i = 0; i < _cardapio.tamanhoCardapio(); i++) {
    if (_cardapio.pizzas[i].getIndice() == escolha) {
      contem = true;
      cout << "pizza encontrada" << endl;
    }
  }
  if (contem == false)
    cout << "Pizza não encontrada" << endl;
  // PedidoPizza.inicializandoPizza();

  /*int aux = 0;
  while (confirma == 1) {
    if (aux == 0) {
      cout << "Deseja adicionar acrescimos? Caso sim, digite 1, caso contrario "
              "digite 0"
           << endl;
    } else {
      cout << "Deseja adicionar mais um acrescimo? caso sim, digite 1, caso "
              "contrario digite 0"
           << endl;
    }
    cin >> confirma;
    if (confirma == 0)
      break;
    else {
      cout << "Digite o acrescimo que deseja:" << endl;
      cin >> adicional;
      addAdicional(adicional);
    }
    aux = 1;*/
  /*}

  pizzaPedido.push_back(setPizza);
  cout << "Deseja adicionar outra pizza? Caso sim digite 1, se nao digite 0"
       << endl;
  cin >> maisPizza;
  if (maisPizza == 1) {
    vetorPizzas();
  }*/
}

void Pedido::vetorBebidas(){ 
    Bebida setBebida;
    int maisBebida;
    setBebida.inicializandoBebida();
    bebidaPedido.push_back(setBebida);
    cout << "Deseja adicionar outra bebida? Caso sim digite 1, senao digite 0"
       << endl;
  cin >> maisBebida;
  if (maisBebida == 1) 
    vetorBebidas();
}

//Imprime a pizza escolhida 
void Pedido::imprimePedido(){
     for (int i = 0; i < pizzaPedido.size(); i++)
    pizzaPedido[i].imprimePizza();
  cout << endl;
}
