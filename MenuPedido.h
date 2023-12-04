#include <string>
#include <vector>
#include "pedido.h"
#include "cardapio.h"

using namespace std;

class MenuPedido{
private:
    Pedido pedido;
    Cardapio cardapio;

public:

///@brief Construtor que inicializa um MenuPedido com um Pedido e um Cardápio
///@param _pedido O pedido a ser associado ao MenuPedido
///@param _cardapio O cardápio a ser associado ao MenuPedido
    MenuPedido(Pedido _pedido, Cardapio _cardapio);

    void Inicializar_MenuPedido();     //Inicializa o MenuPedido
    void Inicializar_Pedido();        //Inicializa o Pedido
    void Imprimir_Pedido();          //Imprime o Pedido atual
    void Imprimir_Cardapio();       //Imprime o Cardápio disponível
    void Remover_Pedido();         //Remove o Pedido atual
    void Valor_Total();           //Calcula e exibe o valor total do Pedido

};
