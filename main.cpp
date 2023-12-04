#include <iostream>
#include "usuario.h"
#include "pedido.h"
#include "cardapio.h"
#include "pagamentos.h"
#include "interface.h"

#include "MenuPedido.h"
using namespace std;

int main(){
    int cpf = 0;
//USUÁRIO--------------------------------------------
    Interface inter;
    inter.PossuiCadastro(cpf);

//PEDIDO----------------------------------------------
    
    Pedido pedido;
    Cardapio cardapio;

    MenuPedido menu(pedido, cardapio);
    menu.Inicializar_MenuPedido(cpf);

// PAGAMENTO

    Pagamentos pagamentos;
    pagamentos.imprimeFormasPagamento();

    return 0;
}
