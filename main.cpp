#include <iostream>
#include "usuario.h"
#include "pedido.h"
#include "cardapio.h"
#include "pagamentos.h"
#include "interface.h"

#include "MenuPedido.h"
using namespace std;

int main(){

//USUÁRIO--------------------------------------------
    Interface inter;
    inter.PossuiCadastro();

//PEDIDO----------------------------------------------
    
    Pedido pedido;
    Cardapio cardapio;

    MenuPedido menu(pedido, cardapio);
    menu.Inicializar_MenuPedido();

    return 0;
}
