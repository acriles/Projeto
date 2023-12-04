#include "Cardapio.h"
#include <iostream>

// CHAMA O CONSTRUTOR DE CARDAPIO COM OS VETORES JA PREENCHIDOS
Cardapio::Cardapio()
    : bebidas{Bebida("#RCL", "Refrigerante", "Coca-Cola", "Lata", 7.00),
              Bebida("#RC6", "Refrigerante", "Coca-Cola", "600mL", 11.00),
              Bebida("#RC2", "Refrigerante", "Coca-Cola", "2L", 14.00),
              Bebida("#RPL", "Refrigerante", "Pepsi", "Lata", 3.00),
              Bebida("#RP6", "Refrigerante", "Pepsi", "600mL", 4.00),
              Bebida("#RP2", "Refrigerante", "Pepsi", "2L", 8.00),
              Bebida("#RGL", "Refrigerante", "Guaraná", "Lata", 4.00),
              Bebida("#RG6", "Refrigerante", "Guaraná", "600mL", 5.00),
              Bebida("#RG2", "Refrigerante", "Guaraná", "2L", 8.00),
              Bebida("#SL3", "Suco", "Laranja", "300mL", 5.00)},
              Bebida("#SL5", "Suco", "Laranja", "500mL", 7.00)},
              Bebida("#SL1", "Suco", "Laranja", "1L", 10.00)},
              Bebida("#SU3", "Suco", "Uva", "300mL", 5.00)},
              Bebida("#SU5", "Suco", "Uva", "500mL", 7.00)},
              Bebida("#SU1", "Suco", "Uva", "1L", 10.00)},
      pizzas{Pizza("#CP", "Calabresa", "Pequena", 39.0),
             Pizza("#CG", "Calabresa", "Grande", 59.0),
             Pizza("#MP", "Marguerita", "Pequena", 39.0),
             Pizza("#MM", "Marguerita", "Média", 49.0),
             Pizza("#MG", "Marguerita", "Grande", 59.0),
             Pizza("#BP", "Bacon", "Pequena", 39.0),
             Pizza("#BM", "Bacon", "Média", 49.0),
             Pizza("#BG", "Bacon", "Grande", 59.0)} {}

vector<Bebida> Cardapio::getBebidas() { return bebidas; }
vector<Pizza> Cardapio::getPizzas() { return pizzas; }
