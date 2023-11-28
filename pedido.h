#include "pizza.h"
#include "bebida.h"
#include <string>
#include <vector>

#ifndef PEDIDO_H
#define PEDIDO_H

class Pedido{
private:
    float valorTotal;               // Valor total do pedido (entrega+pizza+bebida)
    string formaPagamento;         // Forma de pagamento escolhida pelo cliente
    string endereco;              // Endereço de entrega
    // Pizza setPizza; //tipo pizza que monta a primeira pizza, variavel que sera adicionada no vetor de pizzas 
    // Bebida setBebida;
    vector <Pizza> pizzaPedido;     // Vetor que contempla as pizzas que o usuario vai pedir, a cada posicao desse vetor é adicionada uma pizza
    vector <Bebida> bebidaPedido;  // Vetor que contempla as bebidas que o usuario vai pedir, a cada posicao desse vetor é adicionada uma bebida

public: 

///@brief Construtor da classe Pedido
    Pedido();

///@brief Calcula o valor total do pedido
///@return Valor total do pedido
    float calcularValorTotal();

///@brief Define a forma de pagamento escolhida pelo cliente
///@param _formaPagamento Forma de pagamento escolhida
    void setFormaPagamento(string _formaPagamento);

///@brief Obtem a forma de pagamento escolhida pelo cliente
///@return a forma de pagamento escolhida
    string getFormaPagamento();

///@brief Define o vetor de pizzas referente ao pedido
///@param _pizzaPedido Vetor de pizzas a serem incluídas no pedido
    void setVetorPizza(vector <Pizza> _pizzaPedido);

///@brief Define o vetor de bebidas referente ao pedido
///@param _pizzaPedido Vetor de bebidas a serem incluídas no pedido
    void setVetorBebida(vector <Bebida> _bebidaPedido); 

///@brief Inicializa o vetor de bebidas disponíveis no cardápio
    void vetorBebidas(); 

///@brief Inicializa o vetor de pizzas disponíveis no cardápio
    void vetorPizzas(); 

///@brief Imprime os detalhes do pedido
    void imprimePedido();

///@brief Inicializa o cardápio com as pizzas e as bebidas disponíveis
    void inicializar_cardapio();

///@brief Destrutor da classe Pedido
 ~Pedido(void);
};
#endif
