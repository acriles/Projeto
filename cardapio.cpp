#include "cardapio.h"
#include <iostream>

void Cardapio::inicializarCardapio() {
  // inicializando as pizzas do cardapio
  pizzas.push_back(Pizza(
      "Calabresa", "Pequena", {}, 39,
      1)); // {} ficam vazios, pois inicialmente nao tem acrescimos na pizza
  pizzas.push_back(Pizza("Calabresa", "Média", {}, 49, 2));
  pizzas.push_back(Pizza("Calabresa", "Grande", {}, 59, 3));
  pizzas.push_back(Pizza("Marguerita", "Pequena", {}, 39, 4));
  pizzas.push_back(Pizza("Marguerita", "Média", {}, 49, 5));
  pizzas.push_back(Pizza("Marguerita", "Grande", {}, 59, 6));
  pizzas.push_back(Pizza("Bacon", "Pequena", {}, 39, 7));
  pizzas.push_back(Pizza("Bacon", "Média", {}, 49, 8));
  pizzas.push_back(Pizza("Bacon", "Grande", {}, 59, 9));

  // inicializando as bebidas do cardapio
  bebidas.push_back(Bebida("Refrigerante", "Coca", "Lata", 5.00, 10));
  bebidas.push_back(Bebida("Refrigerante", "Coca", "600ml", 7.00, 11));
  bebidas.push_back(Bebida("Refrigerante", "Guarana", "Lata", 5.00, 12));
  bebidas.push_back(Bebida("Refrigerante", "Guarana", "600ml", 7.00, 13));
  bebidas.push_back(Bebida("Suco", "Laranja", "600ml", 7.00, 14));
}

unsigned Cardapio::tamanhoCardapio() { return pizzas.size(); }


void Cardapio::imprimeCardapioPizzas() {
  cout << "Pizzas" << endl;
  cout << "N "
       << "sabor "
       << "tamanho "
       << "valor" << endl;
  for (int i = 0; i < pizzas.size(); i++) {
    pizzas[i].imprimePizza();
  }
  cout << endl;
}

void Cardapio::imprimeCardapioBebidas() {
  cout << "Bebidas" << endl;
  for (int i = 0; i < bebidas.size(); i++) {
    bebidas[i].imprimeBebida();
  }
  cout << endl;
}