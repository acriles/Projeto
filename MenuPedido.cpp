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
      cout << "Digite o codido do seu pedido" << endl;
      Inicializar_Bebida();
      break;
    case 3:
      cout << "Pedidos feitos" << endl;
      Imprimir_Bebida_Pedido();
      break;
    case 4:
      cout << "Digite o codigo do pedido que deseja retirar" << endl;
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
  string codigo; 
  cin >> codigo;
  // VERIFICAR SE EXISTE BEBIDA COM ESSE CODIGO
  for (const auto &Aleatorio : cardapio.getBebidas()) {
    if (Aleatorio.getCodigo() == codigo) {
      Bebida bebida2(codigo, Aleatorio.getSabor(), Aleatorio.getTipo(),
                     Aleatorio.getTamanho(), Aleatorio.getValor());
      pedido.InserirBebida(bebida2); //INSERE A BEBIDA EM PEDIDO
    }
  }
}

void MenuPedido::Imprimir_Bebida_Pedido() {
  for (const auto &Aleatorio : pedido.getBebidas())
    cout << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
         << Aleatorio.getTipo() << " - " << Aleatorio.getTamanho() << " -R$ "
         << Aleatorio.getValor() << endl;
}
void MenuPedido::Imprimir_Cardapio() {
  for (const auto &Aleatorio : cardapio.getBebidas())
    cout << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
         << Aleatorio.getTipo() << " - " << Aleatorio.getTamanho() << " -R$ "
         << Aleatorio.getValor() << endl;
}
