#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_SUPER_FAST_ASSERTS
#include "MenuPedido.hpp"
#include "doctest.hpp"

using namespace std;

TEST_CASE("Verificando Menupedido") {
  Pedido pedido;
  Cardapio cardapio;
  MenuPedido menupedido(pedido, cardapio);
  menupedido.Inicializar_Pedido("#RCL");
  CHECK_EQ(cardapio.ExisteCodigo("#RCL"), true);
}

/*TEST_CASE("Verificando telefone") {
  Usuario user({}, {}, {}, {});
  user.setTelefone(19);
  CHECK_EQ(user.getTelefone(), 19);
}*/
