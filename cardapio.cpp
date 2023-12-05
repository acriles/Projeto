#include "Cardapio.h"
#include <iostream>

// CHAMA O CONSTRUTOR DE CARDAPIO COM OS VETORES JA PREENCHIDOS
Cardapio::Cardapio()
    : bebidas{Bebida("#RCL", "Refrigerante", "Coca", "Lata", 5.00),
              Bebida("#RC6", "Refrigerante", "pepsi", "600ml", 7.00),
              Bebida("#RGL", "Refrigerante", "Guarana", "Lata", 5.00),
              Bebida("#RG6", "Refrigerante", "Guarana", "600ml", 7.00),
              Bebida("#SL6", "Suco", "Laranja", "600ml", 7.00)},
      pizzas{Pizza("#CP", "Calabresa", "Pequena", 39.0),
             Pizza("#CG", "Calabresa", "Grande", 59.0),
             Pizza("#MP", "Marguerita", "Pequena", 39.0),
             Pizza("#MM", "Marguerita", "Média", 49.0),
             Pizza("#MG", "Marguerita", "Grande", 59.0),
             Pizza("#BP", "Bacon", "Pequena", 39.0),
             Pizza("#BM", "Bacon", "Média", 49.0),
             Pizza("#BG", "Bacon", "Grande", 59.0)} {}
bool Cardapio::ExisteCodigo(string _codigo) {
  for (int i = 0; i < bebidas.size(); i++) {
    if (_codigo == bebidas[i].getCodigo())
      return true;
  }
  for (int i = 0; i < pizzas.size(); i++) {
    if (_codigo == pizzas[i].getCodigo())
      return true;
  }
  return false;
}

vector<Bebida> Cardapio::getBebidas() { return bebidas; }
vector<Pizza> Cardapio::getPizzas() { return pizzas; }
