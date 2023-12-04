#include "MenuPedido.h"
#include "bebida.h"

#include <iostream>
using namespace std;
MenuPedido::MenuPedido(Pedido _pedido, Cardapio _cardapio) {
  pedido = _pedido;
  cardapio = _cardapio;
}
// void Inicializar_Cardapio() {}

void MenuPedido::Remover_Pedido() {
  string codigo;
  cout << "Digite o codigo do pedido que deseja retirar" << endl;
  cin >> codigo;
  if (pedido.ExisteBebida(codigo)) {
    pedido.RemoverBebida(codigo);
  }
}

void MenuPedido::Inicializar_MenuPedido() {
  int opcao = 0;
  do {
    cout << endl << "Escolha uma opção" << endl;
    cout << "1 - Ver Cardapio" << endl;
    cout << "2 - Fazer Pedido" << endl;
    cout << "3 - Ver Pedido" << endl;
    cout << "4 - Remover Pedido" << endl;
    cout << "5 - Sair" << endl;
    cout << "Opção: " << endl;
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
      Imprimir_Bebida_Pedido();
      break;
    case 4:
      Remover_Pedido();
      cout << "Pedido Removido" << endl;
      break;

    case 5:
      cout << "Saindo" << endl;
      break;
    default:
      cout << "opção invalida" << endl;
    }
  } while (opcao != 5);
}

void MenuPedido::Inicializar_Bebida() {
  cout << "Digite o codido do seu pedido" << endl;
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
}

void MenuPedido::Imprimir_Bebida_Pedido() {
  vector<Bebida> Imprimir = pedido.getBebidas();
  for (const auto &Aleatorio : Imprimir) {
    cout << Aleatorio.getSabor();
  }
  /*for (int i = 0; i < Imprimir.size(); i++) {
    cout << Imprimir[i].getCodigo() << "-" << Imprimir[i].getSabor() << "-" <<
  Imprimir[i].getT <<endl;
  }*/
}
void MenuPedido::Imprimir_Cardapio() {
  vector<Bebida> ImprimirCardapio = cardapio.getBebidas();
  for (int i = 0; i < ImprimirCardapio.size(); i++) {
    cout << ImprimirCardapio[i].getSabor() << endl;
  }
}
