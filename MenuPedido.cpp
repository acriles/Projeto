#include "MenuPedido.h"
#include "bebida.h"

#include <iostream>
using namespace std;
MenuPedido::MenuPedido(Pedido _pedido, Cardapio _cardapio) {
  pedido = _pedido;
  cardapio = _cardapio;
}
// void Inicializar_Cardapio() {}
void MenuPedido::Inicializar_MenuPedido() {
  cout << "Bem vindo ao Restaurante C++" << endl;
  cout << "Escolha uma opção" << endl;
  cout << "1 - Ver Cardapio" << endl;
  cout << "2 - Fazer Pedido" << endl;
  cout << "3 - Ver Pedido" << endl;
  cout << "4 - Sair" << endl;
  cout << "Opção: " << endl;
  int opcao;
  cin >> opcao;
  switch (opcao) {
  case 1:
    cout << "Cardapio" << endl;
    Imprimir_Cardapio();
    break;
  case 2:
    cout << "Pedido" << endl;
    Inicializar_Bebida();
    break;
  case 3:
    cout << "Pedido feito" << endl;
    Imprimir_Bebida();
    break;
  }
}

void MenuPedido::Inicializar_Bebida() {
  cout << "oq quer" << endl;
  string sabor;   // sabor da bebida
  string tipo;    // tipo da bebida
  string tamanho; // tamanho da bebida
  float valor;    // valor da bebida
  string codigo;  // codigo de identificacao da bebida
  cin >> codigo;

  vector<Bebida> BebidasCardapio = cardapio.getBebidas();
  for (int i = 0; i < BebidasCardapio.size(); i++) {
    if (BebidasCardapio[i].getCodigo() == codigo) {
      sabor = BebidasCardapio[i].getSabor();
      tipo = BebidasCardapio[i].getTipo();
      tamanho = BebidasCardapio[i].getTamanho();
      valor = BebidasCardapio[i].getValor();
    }
  }

  Bebida bebida(codigo, tipo, sabor, tamanho, valor);
  pedido.InserirBebida(bebida);
  Inicializar_MenuPedido();
}

void MenuPedido::Imprimir_Bebida() {
  vector<Bebida> Imprimir = pedido.getBebidas();
  for (int i = 0; i < Imprimir.size(); i++) {
    cout << Imprimir[i].getSabor() << endl;
  }
  Inicializar_MenuPedido();
}
void MenuPedido::Imprimir_Cardapio() {
  vector<Bebida> ImprimirCardapio = cardapio.getBebidas();
  for (int i = 0; i < ImprimirCardapio.size(); i++) {
    cout << ImprimirCardapio[i].getSabor() << endl;
  }
  Inicializar_MenuPedido();
}
