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
      pizzas{Pizza("#CP", "Calabresa", "Pequena", 39.00),
             Pizza("#CM", "Calabresa", "Média", 49.00),
             Pizza("#CG", "Calabresa", "Grande", 59.00),
             Pizza("#MP", "Marguerita", "Pequena", 39.00),
             Pizza("#MM", "Marguerita", "Média", 49.00),
             Pizza("#MG", "Marguerita", "Grande", 59.00),
             Pizza("#QP", "Quatro Queijos", "Pequena", 39.00),
             Pizza("#QM", "Quatro Queijos", "Média", 49.00),
             Pizza("#QG", "Quatro Queijos", "Grande", 59.00),
             Pizza("#PP", "Portuguesa", "Pequena", 39.00),
             Pizza("#PM", "Portuguesa", "Média", 49.00),
             Pizza("#PG", "Portuguesa", "Grande", 59.00),
             Pizza("#FP", "Frango com catupiry", "Pequena", 39.00),
             Pizza("#FM", "Frango com catupiry", "Média", 49.00),
             Pizza("#FG", "Frango com catupiry", "Grande", 59.00),
             Pizza("#BP", "Bacon com Cheddar", "Pequena", 39.00),
             Pizza("#BM", "Bacon com Cheddar", "Média", 49.00),
             Pizza("#BG", "Bacon com Cheddar", "Grande", 59.00)} {}

vector<Bebida> Cardapio::getBebidas() { return bebidas; }
vector<Pizza> Cardapio::getPizzas() { return pizzas; }
