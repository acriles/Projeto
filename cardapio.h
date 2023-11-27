#include <string> 
#include <vector>
#include <iostream>
#include "pizza.h"
#include "bebida.h"
#ifndef CARDAPIO_H
#define CARDAPIO_H
using namespace std;

class Cardapio{
    private: 
   //vetor com o tipo pizza (sabor, tamanho..) em cada posicao 
    vector <Bebida> bebidas; //vetor com o tipo bebida 



    public:
    unsigned tamanhoCardapio();
    vector <Pizza> pizzas;
    int getPizzasIndice();
    void inicializarCardapio(); //o administrador consegue inicializar o cardapio conforme quiser 
    void imprimeCardapioPizzas(); //mostra as pizzas do cardapio
    void imprimeCardapioBebidas(); //mostra as bebidas do cardapio
};
#endif