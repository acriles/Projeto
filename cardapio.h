#include <string> 
#include <vector>
#include <iostream>
#include "pizza.h"
#include "bebida.h"

using namespace std;

class Cardapio{
    private: 
    vector <Pizza> pizzas; //vetor com o tipo pizza (sabor, tamanho..) em cada posicao 
    vector <Bebida> bebidas; //vetor com o tipo bebida 
    public:
    void inicializarCardapio(); //o administrador consegue inicializar o cardapio conforme quiser 
    void getPizzas(); //mostra as pizzas do cardapio
    void getBebidas(); //mostra as bebidas do cardapio

    bool confirmar_codigo(string codigo);
    void pedidos(string codigo, string& _sabor, string& _tamanho, vector<string>& _adicionais, float& _valor) ;
};
