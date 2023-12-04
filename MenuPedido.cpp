#include "MenuPedido.h"
#include <limits>
#include <iostream>
using namespace std;

//Inicializa MenuPedido, com as classes Pedido e Cardapio
MenuPedido::MenuPedido(Pedido _pedido, Cardapio _cardapio){
    pedido = _pedido;
    cardapio = _cardapio;
}


//Início do MenuPedido
void MenuPedido::Inicializar_MenuPedido(){
    int opcao = 0;
    do{
        cout << endl << "Escolha uma opção" << endl;
        cout << "1 - Ver Cardapio" << endl;
        cout << "2 - Fazer Pedido" << endl;
        cout << "3 - Ver Pedido" << endl;
        cout << "4 - Remover Pedido" << endl;
        cout << "5 - Sair" << endl;
        cout << "Opção: " << endl;
        cin >> opcao;

        if(std::cin.fail()){      //Confere se a entrada é um inteiro
            cin.clear();     //Limpa o buffer de entrada
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            //Exibir mensagem de erro
            cout << "Entrada inválida. Por favor, digite um número inteiro." << endl;
            continue; // Continuar no próximo loop
        }
    
      switch(opcao){
      case 1:
          cout << "Cardapio" << endl;
          Imprimir_Cardapio();
          break;
      case 2:
          cout << "Digite o codido do seu pedido" << endl;
          Inicializar_Pedido();
          break;
      case 3:
          cout << "Pedidos feitos" << endl;
          Imprimir_Pedido();
          break;
      case 4:
          cout << "Digite o codigo do pedido que deseja retirar" << endl;
          Remover_Pedido();
          cout << "Pedido Removido" << endl;
          break;
      case 5:
          Valor_Total();
          cout << "Saindo" << endl;
          break;
          default:
          cout << "opção invalida" << endl;
    }
  } while(opcao != 5);
}

void MenuPedido::Inicializar_Pedido(){
    string codigo;
    bool existe = false;     //Indica se o código selecionado existe ou não
    cin >> codigo;
  // VERIFICAR SE EXISTE BEBIDA COM ESSE CODIGO
  for (const auto &Aleatorio : cardapio.getBebidas()) {
    if (Aleatorio.getCodigo() == codigo) {
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
    if (Aleatorio.getCodigo() == codigo) {
      existe = true;
      Pizza pizza(Aleatorio.getCodigo(), Aleatorio.getSabor(),
                  Aleatorio.getTamanho(), Aleatorio.getValor());
      pedido.InserirPizza(pizza);         // INSERE A PIZZA EM PEDIDO
      cout << "Pizza selecionada" << endl // IMPRIME A PIZZA ESCOLHIDA
           << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
           << Aleatorio.getTamanho() << " -R$ " << Aleatorio.getValor() << endl;

      break;
    }
  }
  if (existe == false) {
    cout << "Codigo invalido" << endl;
  }
  codigo.clear();
}

// REMOVE UM PEDIDO
void MenuPedido::Remover_Pedido() {
  string codigo;
  cin >> codigo;
  if (pedido.ExisteCodigo(codigo)) {
    pedido.RemoverPedido(codigo);
  }
}

void MenuPedido::Valor_Total() {
  double valortotal = 0;
  // SOMA EM VALOR TOTAL O PRECO DE TODAS AS PIZZAS E BEBIDAS
  for (const auto &Aleatorio : pedido.getPizzas())
    valortotal = valortotal + Aleatorio.getValor();
  for (const auto &Aleatorio : pedido.getBebidas())
    valortotal = valortotal + Aleatorio.getValor();
  cout << "Valor total do pedido: " << "R$" << valortotal << endl;
}

// IMPRIME PIZZAS E BEBIDAS DO PEDIDO
void MenuPedido::Imprimir_Pedido() {
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
         << Aleatorio.getTipo() << " - " << Aleatorio.getTamanho() << " -R$ "
         << Aleatorio.getValor() << endl;
}
