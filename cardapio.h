#include <string> 
#include <vector>
#include <iostream>
#include "pizza.h"
#include "bebida.h"

using namespace std;

class Cardapio{
private: 
    vector <Pizza> pizzas;       // Vetor com os tipos pizza (sabor, tamanho..) em cada posicao 
    vector <Bebida> bebidas;    // Vetor com os tipos bebida 

public:
///@brief Inicializa o cardápio de pizzas, permitindo que o administrador 
///    adicione pizzas conforme desejar
    void inicializarCardapioPizza();

///@brief Inicializa o cardápio de bebidas, permitindo que o administrador 
///    adicione bebidas conforme desejar
    void inicializarCardapioBebida(); 

///@brief Mostra as pizzas disponiveis no cardápio
    void getPizzas();

///@brief Mostra as bebidas disponiveis no cardapio
    void getBebidas(); //mostra as bebidas do cardapio

///@brief Confirma se o codigo da pizza escolhido existe no cardapio
///@param codigo Codigo referente à pizza a ser verificado
///@return VERDADEIRO se o código for válido (existir), FALSO caso contrário
    bool confirmar_codigo_pizza(string codigo);

///@brief Confirma se o codigo da bebida escolhido existe no cardapio
///@param codigo Codigo referente à bebida a ser verificado
///@return VERDADEIRO se o código for válido (existir), FALSO caso contrário
    bool confirmar_codigo_bebida(string codigo);

///@brief Obtem os detalhes da pizza a partir do seu codigo de identificacao
///@param codigo Codigo de identificacao da pizza
///@param _sabor Saída para o sabor da pizza 
///@param _tamanho Saída para o tamanho da pizza 
///@param _aidicionas Saída para os adicionais da pizza 
///@param _valor Saída para o valor da pizza 
    void pedidosPizza(string codigo, string& _sabor, string& _tamanho, vector<string>& _adicionais, float& _valor) ;

///@brief Obtem os detalhes da bebida a partir do seu codigo de identificacao
///@param codigo Codigo de identificacao da bebida
///@param _sabor Saída para o sabor da bebida 
///@param _tamanho Saída para o tamanho da bebida 
///@param _valor Saída para o valor da bebida 
 void pedidosBebida(string codigo, string& _sabor, string& _tamanho, float& _valor);

};
