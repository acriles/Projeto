#include "pedido.h"
#include <iostream>
Pedido::Pedido() {}
void Pedido::InserirBebida(Bebida _bebida) { bebidaPedido.push_back(_bebida); }

vector<Bebida> Pedido::getBebidas() { return bebidaPedido; }
