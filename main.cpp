#include <iostream>
#include "usuario.h"
#include "pedido.h"
#include "cardapio.h"
#include "pagamentos.h"
#include "interface.h"

using namespace std;

int main(){

//USUÁRIO--------------------------------------------
    Interface inter;
    inter.PossuiCadastro();

//PEDIDO----------------------------------------------
    Pedido pedido;
    pedido.vetorPizzas();
    pedido.imprimePedido();


    return 0;   
 }
