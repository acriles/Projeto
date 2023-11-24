#ifndef PEDIDO_H
#define PEDIDO_H
#include "pizza.h"
#include "bebida.h"
#include <string>
#include <vector>

class Pedido{
private:
    float valorTotal=0; //valor de entrega, pizza e bebida 
    string formaPagamento;
    string endereco;
    vector <Pizza> pizzaPedido; //vetor de pizzas que o usuario vai pedir, a cada posicao desse vetor eu adiciono uma pedidoPizza
    vector <Bebida> bebidaPedido; //vetor de bebidas que o usuario vai pedir 
public: 
    Pedido();
    void calcularValorTotal();
    void setFormaPagamento(string _formaPagamento);
    string getFormaPagamento();
    void setVetorPizza(vector <Pizza> _pizzaPedido);
    void setVetorBebida(vector <Bebida> _bebidaPedido); 
    void vetorBebidas(); //funcao que incializa o vetor com as bebidas que serao pedidas 
    void vetorPizzas(); //funcao que inicializa o vetor com as pizzas que serao pedidas 
    void imprimePedido();
    void inicializar_cardapio();
 ~Pedido(void);
};
#endif
