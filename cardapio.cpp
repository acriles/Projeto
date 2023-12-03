#include "Cardapio.h"
#include <iostream>

/*void Cardapio::inicializarCardapioBebida() {
  bebidas.push_back(Bebida("#RCL", "Refrigerante", "Coca", "Lata", 5.00));
  bebidas.push_back(Bebida("#RC6", "Refrigerante", "Coca", "600ml", 7.00));
  bebidas.push_back(Bebida("#RGL", "Refrigerante", "Guarana", "Lata", 5.00));
  bebidas.push_back(Bebida("#RG6", "Refrigerante", "Guarana", "600ml", 7.00));
  bebidas.push_back(Bebida("#SL6", "Suco", "Laranja", "600ml", 7.00));
}*/
Cardapio::Cardapio()
    : bebidas{Bebida("#RCL", "Refrigerante", "Coca", "Lata", 5.00),
              Bebida("#RC6", "Refrigerante", "pepsi", "600ml", 7.00)} {}
vector<Bebida> Cardapio::getBebidas() { return bebidas; }
