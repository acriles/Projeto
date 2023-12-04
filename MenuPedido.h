#include <string>
#include <vector>
#include "pedido.h"
#include "cardapio.h"
#ifndef MENUPEDIDO_H
#define MENUPEDIDO_H

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

    void Inicializar_MenuPedido(int& cpf);     //Inicializa o MenuPedido
    void Inicializar_Pedido();        //Inicializa o Pedido
    void Imprimir_Pedido(int& cpf);          //Imprime o Pedido atual
    void Imprimir_Cardapio();       //Imprime o Cardápio disponível
    void Remover_Pedido();         //Remove o Pedido atual
    void Valor_Total(int& cpf);           //Calcula e exibe o valor total do Pedido

};
#endif // MENUPEDIDO_H
