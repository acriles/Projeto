#include "MenuPedido.h"
#include <limits>
#include <iostream>
#include "banco_de_dados_pedido.h"
using namespace std;

//Inicializa MenuPedido, com as classes Pedido e Cardapio
MenuPedido::MenuPedido(Pedido _pedido, Cardapio _cardapio){
    pedido = _pedido;
    cardapio = _cardapio;
}


//Início do MenuPedido
void MenuPedido::Inicializar_MenuPedido(int& cpf){
    int opcao = 0;

    do{
        cout << endl << "Escolha uma opção" << endl;
        cout << "1 - Ver Cardápio" << endl;
        cout << "2 - Fazer Pedido" << endl;
        cout << "3 - Ver Pedido" << endl;
        cout << "4 - Remover Pedido" << endl;

        double valortotal = 0;
        for (const auto &Aleatorio : pedido.getPizzas())
            valortotal = valortotal + Aleatorio.getValor();
        for (const auto &Aleatorio : pedido.getBebidas())
            valortotal = valortotal + Aleatorio.getValor();

        if ( valortotal == 0 ){
        cout << "5 - Sair" << endl;}
        
        else {
        cout << "5 - Efetuar Pagamento" << endl;}

        cout << "Opção: " << endl;
        cin >> opcao;
        if(std::cin.fail()){      //Confere se a entrada é um inteiro
            cin.clear();         //Limpa o buffer de entrada
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            //Exibir mensagem de erro
            cout << "Entrada inválida. Por favor, digite um número inteiro." << endl;
            continue;       //Continuar no próximo loop
        }
    
      switch(opcao){
      case 1:
          cout << "Cardapio" << endl;
          Imprimir_Cardapio();
          break;
      case 2:
          cout << "Digite o código do seu pedido" << endl;
          Inicializar_Pedido();
          break;
      case 3:
          cout << "Pedidos feitos" << endl;
          Imprimir_Pedido(cpf);
          break;
      case 4:
          cout << "Digite o código do pedido que deseja retirar" << endl;
          Remover_Pedido();
          cout << "Pedido Removido" << endl;
          break;
      case 5:
          Valor_Total(cpf);
          break;
          default:
          cout << "Opção inválida" << endl;
    }
  } while(opcao != 5);
}


void MenuPedido::Inicializar_Pedido(){
    string codigo;
    bool existe = false;     //Indica se o código selecionado existe ou não
    cin >> codigo;
    //Verificar se existe bebida com esse código
    for(const auto &Aleatorio : cardapio.getBebidas()){
        if(Aleatorio.getCodigo() == codigo){
            existe = true;
            Bebida bebida(Aleatorio.getCodigo(), Aleatorio.getSabor(),
            Aleatorio.getTipo(), Aleatorio.getTamanho(),
            Aleatorio.getValor());
            pedido.InserirBebida(bebida);             //Insere a bebida no pedido
            cout << "Bebida selecionada" << endl     //Imprime a bebida escolhida
            << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
            << Aleatorio.getTipo() << " - " << Aleatorio.getTamanho() << " -R$ "
            << Aleatorio.getValor() << endl;
        }
    }
  //Verifica se existe pizza com esse código
    for(const auto &Aleatorio : cardapio.getPizzas()){
        if(Aleatorio.getCodigo() == codigo){
            existe = true;
            Pizza pizza(Aleatorio.getCodigo(), Aleatorio.getSabor(),
            Aleatorio.getTamanho(), Aleatorio.getValor());
            pedido.InserirPizza(pizza);              //Insere a pizza no pedido
            cout << "Pizza selecionada" << endl     //Imprime a pizza escolhida
            << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
            << Aleatorio.getTamanho() << " -R$ " << Aleatorio.getValor() << endl;

            break;
        }
    }
    if(existe == false){
        cout << "Código inválido" << endl;
    }
    codigo.clear();
}


//Remove um pedido
void MenuPedido::Remover_Pedido(){
    string codigo;
    cin >> codigo;
    if(pedido.ExisteCodigo(codigo)){
          pedido.RemoverPedido(codigo);
    }
}


void MenuPedido::Valor_Total(int& cpf){
    double valortotal = 0;
  //Soma em valor total o preço de todas as pizzas e bebidas
    for (const auto &Aleatorio : pedido.getPizzas())
        valortotal = valortotal + Aleatorio.getValor();
    for (const auto &Aleatorio : pedido.getBebidas())
        valortotal = valortotal + Aleatorio.getValor();
        
    if (valortotal != 0){
        Data_base_Pedido data;
        cout << "Valor total do pedido: " << "R$" << valortotal << endl;

        for(const auto &Aleatorio : pedido.getPizzas()) {
        string infoPizza = Aleatorio.getCodigo() + " - " + Aleatorio.getSabor() + " - "
        + Aleatorio.getTamanho() + " - R$ " + to_string(Aleatorio.getValor());
        data.inserir_pedidos(cpf ,infoPizza,{});
        }
        for (const auto &Aleatorio : pedido.getBebidas()){
            string infoBebida = Aleatorio.getCodigo() + " - " + Aleatorio.getSabor() + " - "
            + Aleatorio.getTamanho() + " - R$ " + to_string(Aleatorio.getValor());
            data.inserir_pedidos(cpf ,{},infoBebida);}
    }   
    
    else{
        cout << "Saindo" << endl;}
    
}


//Imprime pizzas e bebidas do pedido
void MenuPedido::Imprimir_Pedido(int& cpf){
    Data_base_Pedido data;
    cout << "pizzas pedidas" << endl;
    for(const auto &Aleatorio : pedido.getPizzas()){
        cout << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
        << Aleatorio.getTamanho() << " -R$ " << Aleatorio.getValor() << endl;
        }
    data.ler_pedido(cpf, 1);
    cout << endl << "Bebidas pedidas" << endl;
    for (const auto &Aleatorio : pedido.getBebidas()){
        cout << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
        << Aleatorio.getTipo() << " - " << Aleatorio.getTamanho() << " -R$ "
        << Aleatorio.getValor() << endl;
        }
    data.ler_pedido(cpf, 2);
}


//Imprime pizzas e bebidas do cardápio
void MenuPedido::Imprimir_Cardapio(){
    cout << "Cardapio Pizzas" << endl;
    for (const auto &Aleatorio : cardapio.getPizzas())
        cout << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
        << Aleatorio.getTamanho() << " - R$ " << Aleatorio.getValor() << endl;
        cout << endl << "Cardápio Bebidas" << endl;
    for (const auto &Aleatorio : cardapio.getBebidas())
        cout << Aleatorio.getCodigo() << " - " << Aleatorio.getSabor() << " - "
        << Aleatorio.getTipo() << " - " << Aleatorio.getTamanho() << " -R$ "
        << Aleatorio.getValor() << endl;
}
