#include <string> 
#include <vector>
#include "bebida.h"
#include "pizza.h"
using namespace std;

class Cardapio{
private: 
    vector <Bebida> bebidas; 
    vector <Pizza> pizzas;

  public:

///@brief Construtor padrão da classe Cardapio
    Cardapio();
///@brief Obtém o vetor de bebidas do cardápio
///@return Vetor contendo as bebidas disponíveis no cardápio
    vector<Bebida> getBebidas();

///@brief Obtém o vetor de pizzas do cardápio
///@return Vetor contendo as pizzas disponíveis no cardápio
    vector<Pizza> getPizzas();

};
