#include <iostream>
#include "pedido.h"
#include "cardapio.h"
using namespace std;

//Construtor da classe Pedido 
Pedido::Pedido(){
}

//Destrutor da classe 
Pedido::~Pedido(void) { cout << "classe pedido destruida" << endl; }

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

//Mostrando o cardapio 
void Pedido:: inicializar_cardapio(){
    cout << "Cardapio de pizzas:"<< endl;
    Cardapio cardapio;
    cardapio.inicializarCardapio();
    cardapio.getPizzas();
    int escolha;
    cout << "Digite 1 para escolhar uma pizza e 2 para ver o cardapio de bebidas"<< endl;
    cin >> escolha;
    if (escolha == 1){
    vetorPizzas();
    }
    else if (escolha == 2){
        cout << "Cardapio de bebidas:";
        cardapio.getBebidas();  
        vetorBebidas(); 
    }
    else{
        cout << "Comando invalido! ";
        inicializar_cardapio();
    }
    imprimePedido();
}

//Metodo que seta os atributos da pizza escolhidos pelo usuario e adiciona-a no pedido das pizzas 
void Pedido::vetorPizzas(){ 
    Pizza setPizza;
    setPizza.inicializandoPizza();
    pizzaPedido.push_back(setPizza);
    cout << "Deseja adicionar outra pizza? Caso sim digite 1, senao digite 0"
       << endl;
  int maisPizza;
  cin >> maisPizza;
  if (maisPizza == 1) 
    vetorPizzas();
  else if (maisPizza == 0){
    int adicao_bebida;
    cout << "Deseja adicionar uma bebida? Caso sim digite 1.\n";
    cin >> adicao_bebida;
    if (adicao_bebida == 1){
        Cardapio cardapio;
        cardapio.inicializarCardapio();        
        cardapio.getBebidas();
        vetorBebidas();
    }
}
}

//Adiciona ao vetor as bebidas que serao pedidas 
void Pedido::vetorBebidas(){ 
    Bebida setBebida;
    setBebida.inicializandoBebida();
    bebidaPedido.push_back(setBebida);
    cout << "Deseja adicionar outra bebida? Caso sim digite 1, senao digite 0"
       << endl;
  int maisBebida;
  cin >> maisBebida;
  if (maisBebida == 1) 
    vetorBebidas();
    else {
        cout << "Pedido finalizado." << endl;
    }
}

//Imprime pedido e valor total
void Pedido::imprimePedido(){
    for (int i = 0; i < pizzaPedido.size(); i++){
    pizzaPedido[i].imprimePizza();
    }
    cout << endl;
    for (int i = 0; i < bebidaPedido.size(); i++){
    bebidaPedido[i].imprimeBebida();
    }
    cout << endl;
    calcularValorTotal();
}

//Calcula o valor total do pedido 
void Pedido::calcularValorTotal(){
     for (int i = 0; i < pizzaPedido.size(); i++){
       valorTotal = pizzaPedido[i].getValor() + valorTotal;
     } 
     for(int i=0; i< bebidaPedido.size(); i++){
        valorTotal = bebidaPedido[i].getValor() + valorTotal;
     }
     cout << "O valor total do pedido é de: " << valorTotal << " reais" << endl;
}