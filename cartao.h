#include <string>
#include <iostream>
using namespace std;

#ifndef CARTAO_H
#define CARTAO_H

class Cartao
{
public:

    Cartao();
///@brief Coleta os dados do cartão (nome do titular, número do cartao, validade e cvv) 
///e armazena na struct caso a forma de pagamento seja cartão de crédito ou débito
    void ColetaDadosCartao ();

///@brief Verifica o numero do cartão em relação à quantidade de dígitos (16)
///@param num Numero do cartao
///@return 1 se o numero for valido (16 digitos) e 0 se o numero for inválido
    int VerificaNumero(string num);

/// @brief Verifica se o mês de validade inserido é válido
/// @param m Mes de validade do cartao
/// @return 1 se o numero for valido (16 digitos) e 0 se o numero for invalido
    int VerificaMes(int m);

/// @brief Verifica se o ano de validade inserido é valido - se for anterior de 2023, 
///o cartão está vencido, se for posterior à 2040, provavelmente está errado
/// @param a Ano de validade do cartao
/// @return 1 se o ano for válido e 0 se o ano for inválido
    int VerificaAno(int a);

///@brief Verifia se o CVV inserido tem 3 dígitos
///@param cod Codigo de seguranca do cartao (CVV)
///@return 1 se o CVV for válido (3 dígitos) e 0 se o CVV for inválido
    int VerificaCvv(int cod);
	

private:
    string nomeTitular;                //Nome do titular do cartão 
    string numeroCartao;              //Número do cartão
    int mesValidade;                 //Mês de validade do cartão
    int anoValidade;                //Ano de validade do cartão
    int cvv;                       //Código de segurança do cartão
};

#endif
