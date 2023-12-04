#include <string>
#include <vector>
#include "bebida.h"
#include "pizza.h"
#ifndef PEDIDO_H
#define PEDIDO_H

using namespace std;

class Pedido{
private:
    vector <Bebida> bebidaPedido; 
    vector <Pizza> pizzaPedido;

public:

///@brief Construtor padrão da classe Pedido
    Pedido();

///@brief Insere uma bebida no pedido
///@param _bebida Bebida a ser inserida no pedido
    void InserirBebida(Bebida _bebida);

///@brief Insere uma pizza no pedido
///@param _pizza Pizza a ser inserida no pedido
    void InserirPizza(Pizza _pizza);

///@brief Verifica se existe um código específico no pedido
///@param _codigo Código a ser verificado no pedido
///@return true se o código existe no pedido, false caso contrário
    bool ExisteCodigo(string _codigo);

///@brief Remove um pedido com base no código especificado
///@param _codigo Código do pedido a ser removido
    void RemoverPedido(string _codigo);

///@brief Obtém o vetor de bebidas do pedido
///@return Vetor contendo as bebidas no pedido
    vector<Bebida> getBebidas();    

///@brief Obtém o vetor de pizzas do pedido
///@return Vetor contendo as pizzas no pedido
    vector<Pizza> getPizzas(); 

};
#endif // PEDIDO_H
