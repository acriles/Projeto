#include <iostream>
#include "usuario.h"
#include "pedido.h"
#include "cardapio.h"


using namespace std;

 int main(){
  // Usuario user({}, {}, {}, {});
  // user.cadastroInicial();
  // user.imprimeUsuario();
  
    // Pizza pizza1;
    // pizza1.inicializandoPizza();

    // Bebida bebida1;
    // bebida1.inicializandoBebida();

   // Cardapio cardapio;
   // cardapio.inicializarCardapio();
   // cardapio.getPizzas();
   // cardapio.getBebidas();

      Pedido pedido;
      pedido.vetorPizzas();
      pedido.imprimePizzas();

    
    return 0;
 }
