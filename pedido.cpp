#include "pedido.h"
#include <iostream>
Pedido::Pedido() {}

void Pedido::InserirBebida(Bebida _bebida) { bebidaPedido.push_back(_bebida); }
void Pedido::InserirPizza(Pizza _pizza) { pizzaPedido.push_back(_pizza); }

vector<Bebida> Pedido::getBebidas() { return bebidaPedido; }
vector<Pizza> Pedido::getPizzas() { return pizzaPedido; }


bool Pedido::ExisteCodigo(string _codigo) {
  for (int i = 0; i < bebidaPedido.size(); i++) {
    if (_codigo == bebidaPedido[i].getCodigo())
      return true;
  }
  for (int i = 0; i < pizzaPedido.size(); i++) {
    if (_codigo == pizzaPedido[i].getCodigo())
      return true;
  }
  return false;
}
void Pedido::RemoverPedido(string _codigo) {
  for (int i = 0; i < bebidaPedido.size(); i++) {
    if (_codigo == bebidaPedido[i].getCodigo())
      bebidaPedido.erase(bebidaPedido.begin() + i);
  }
  for (int i = 0; i < pizzaPedido.size(); i++) {
    if (_codigo == pizzaPedido[i].getCodigo())
      pizzaPedido.erase(pizzaPedido.begin() + i);
  }
}