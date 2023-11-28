#include <iostream>
#include "usuario.h"
#include "pedido.h"
#include "cardapio.h"
#include "pagamentos.h"


using namespace std;

int main(){

//USUÁRIO--------------------------------------------
    Usuario user({}, {}, {}, {}, {});
    user.PossuiCadastro();

//PEDIDO----------------------------------------------
    Pedido pedido;
    pedido.vetorPizzas();
    pedido.imprimePedido();

   
    return 0;   
 }
