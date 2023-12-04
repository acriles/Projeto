#include "pedido.h"
#include <iostream>
Pedido::Pedido() {}
void Pedido::InserirBebida(Bebida _bebida) { bebidaPedido.push_back(_bebida); }

vector<Bebida> Pedido::getBebidas() { return bebidaPedido; }

bool Pedido::ExisteBebida(string _codigo) {
  for (int i = 0; i < bebidaPedido.size(); i++) {
    if (_codigo == bebidaPedido[i].getCodigo())
      return true;
  }
  return false;
}
void Pedido::RemoverBebida(string _codigo) {
  for (int i = 0; i < bebidaPedido.size(); i++) {
    if (_codigo == bebidaPedido[i].getCodigo())
      bebidaPedido.erase(bebidaPedido.begin() + i);
  }
}
