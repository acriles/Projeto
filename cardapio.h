#include <string> 
#include <vector>
#include <iostream>
#include "bebida.h"

using namespace std;

class Cardapio{
  private: 
    vector <Bebida> bebidas;  

  public:
    Cardapio();
    vector<Bebida> getBebidas();
};
