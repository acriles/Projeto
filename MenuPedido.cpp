#include "MenuPedido.h"
#include "excecao.h"
#include <iostream>
#include <limits>
using namespace std;
// INICIALIZA MENU PEDIDO, COM AS CLASSES PEDIDO E CARDAPIO
MenuPedido::MenuPedido(Pedido _pedido, Cardapio _cardapio) {
  pedido = _pedido;
  cardapio = _cardapio;
}

// INICIO DO MENU PEDIDO
void MenuPedido::Inicializar_MenuPedido(int& cpf) {
  string opcao = "0";
  do {

    cout << endl << "Escolha uma opção" << endl;
    cout << "0 - Sair" << endl;
    cout << "1 - Ver Cardapio" << endl;
    cout << "2 - Fazer Pedido" << endl;
    cout << "3 - Ver Pedido" << endl;
    cout << "4 - Remover Pedido" << endl;
    cout << "5 - Finalizar Pedido" << endl;
    cout << "Opção: " << endl;
    cin >> opcao;
    try {
      if (opcao == "0") {
        cout << "Saindo do menu pedido..." << endl;
      } else if (opcao == "1") {
        Imprimir_Cardapio();
      } else if (opcao == "2") {
        string codigo;
        do {
          cout << "Digite o codido do seu pedido" << endl;
          cin >> codigo;
          try {
            Inicializar_Pedido(codigo);
          } catch (CodigoInvalido e) {
            cout << e.what();
          }
        } while ((cardapio.ExisteCodigo(codigo) == false) && codigo != "0");
      } else if (opcao == "3") {
        cout << endl << "Pedidos feitos" << endl;
        Imprimir_Pedido();
      } else if (opcao == "4") {
        cout << "Digite o codigo do pedido que deseja retirar" << endl;
        Remover_Pedido();
      } else if (opcao == "5") {
        Valor_Total();
        cout << "Finalizando Pedido" << endl;
      } else {
        throw OpcaoInvalido(opcao);
      }
    } catch (OpcaoInvalido e) {
      cout << e.what();
    }
  } while (opcao != "5" && opcao != "0");
}

void MenuPedido::Inicializar_Pedido(string _codigo) {
  bool existe = false; // INDICA SE O CODIGO SELECIONADO EXISTE OU NAO

  // VERIFICA SE EXISTE BEBIDA COM ESSE CODIGO
  for (const auto &Aleatorio : cardapio.getBebidas()) {
    if (Aleatorio.getCodigo() == _codigo) {
      existe = true;
      Bebida bebida(Aleatorio.getCodigo(), Aleatorio.getSabor(),
                    Aleatorio.getTipo(), Aleatorio.getTamanho(),
                    Aleatorio.getValor());
      pedido.InserirBebida(bebida);        // INSERE A BEBIDA EM PEDIDO
      cout << "Bebida selecionada" << endl // IMPRIME A BEBIDA ESCOLHIDA
           << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
           << Aleatorio.getTipo() << " - " << Aleatorio.getTamanho() << " -R$ "
           << Aleatorio.getValor() << endl;
    }
  }
  // VERIFICA SE EXISTE PIZZA COM ESSE CODIGO
  for (const auto &Aleatorio : cardapio.getPizzas()) {
    if (Aleatorio.getCodigo() == _codigo) {
      existe = true;
      Pizza pizza(Aleatorio.getCodigo(), Aleatorio.getSabor(),
                  Aleatorio.getTamanho(), Aleatorio.getValor());
      pedido.InserirPizza(pizza);         // INSERE A PIZZA EM PEDIDO
      cout << "Pizza selecionada" << endl // IMPRIME A PIZZA ESCOLHIDA
           << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
           << Aleatorio.getTamanho() << " -R$ " << Aleatorio.getValor() << endl;

      break;
    }

    if (existe == false) {
      throw CodigoInvalido(_codigo);
      // cout << "Codigo invalido" << endl;
    }
  }
}
// REMOVE UM PEDIDO
void MenuPedido::Remover_Pedido() {
  string codigo;
  do {
    cin >> codigo;
    try {
      if (pedido.ExisteCodigo(codigo)) {
        pedido.RemoverPedido(codigo);
        cout << "Pedido Removido" << endl;
      } else
        throw CodigoInvalido(codigo);
    } catch (CodigoInvalido e) {
      cout << e.what();
    }
  } while ((cardapio.ExisteCodigo(codigo) == false) && codigo != "0");
}

void MenuPedido::Valor_Total(int& cpf) {
  double valortotal = 0;
  // SOMA EM VALOR TOTAL O PRECO DE TODAS AS PIZZAS E BEBIDAS
  for (const auto &Aleatorio : pedido.getPizzas())
    valortotal = valortotal + Aleatorio.getValor();
  for (const auto &Aleatorio : pedido.getBebidas())
    valortotal = valortotal + Aleatorio.getValor();
  cout << "Valor total do pedido: "
       << "R$" << valortotal << endl;
}

// IMPRIME PIZZAS E BEBIDAS DO PEDIDO
void MenuPedido::Imprimir_Pedido(int& cpf) {
  cout << "pizzas pedidas" << endl;
  for (const auto &Aleatorio : pedido.getPizzas())
    cout << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
         << Aleatorio.getTamanho() << " -R$ " << Aleatorio.getValor() << endl;

  cout << endl << "bebidas pedidas" << endl;
  for (const auto &Aleatorio : pedido.getBebidas())
    cout << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
         << Aleatorio.getTipo() << " - " << Aleatorio.getTamanho() << " -R$ "
         << Aleatorio.getValor() << endl;
}
// IMPRIME PIZZAS E BEBIDAS DO CARDAPIO
void MenuPedido::Imprimir_Cardapio() {
  cout << "Cardapio Pizzas" << endl;
  for (const auto &Aleatorio : cardapio.getPizzas())
    cout << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
         << Aleatorio.getTamanho() << " - R$ " << Aleatorio.getValor() << endl;
  cout << endl << "Cardapio Bebidas" << endl;
  for (const auto &Aleatorio : cardapio.getBebidas())
    cout << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
         << Aleatorio.getTipo() << " - " << Aleatorio.getTamanho() << " - R$ "
         << Aleatorio.getValor() << endl;
}
