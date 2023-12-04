#include <string>
#include <vector>
#include "pedido.h"
#include "Cardapio.h"
using namespace std;

class MenuPedido{
private:
Pedido pedido;
Cardapio cardapio;

public:
MenuPedido(Pedido _pedido, Cardapio _cardapio);
void Inicializar_MenuPedido();
void Inicializar_Bebida();
void Imprimir_Bebida_Pedido();
void Imprimir_Cardapio();
void Remover_Pedido();
};
