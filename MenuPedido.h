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

///@brief Inicializa o MenuPedido
    void Inicializar_MenuPedido(int& cpf);     

///@brief Inicializa o Pedido
    void Inicializar_Pedido(string _codigo);       

///@brief Imprime o Pedido atual
    void Imprimir_Pedido(int& cpf);         

 ///@brief Imprime o Cardápio disponível
    void Imprimir_Cardapio();      

///@brief Remove o Pedido atual
    void Remover_Pedido();        

///@brief Calcula e exibe o valor total do Pedido
    void Valor_Total(int& cpf);          

};
#endif // MENUPEDIDO_H
