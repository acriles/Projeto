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
    Cardapio();
  bool ExisteCodigo(string _codigo);
    vector<Bebida> getBebidas();
    vector<Pizza> getPizzas();
};
