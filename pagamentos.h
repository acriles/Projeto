#include "cartao.h"
#include <string>
#include <iostream>

using namespace std;

#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H

class Pagamentos{

public:

///@brief Imprime a chave PIX caso essa seja a forma de pagamento
    void PIX();

///@brief Imprime que o pagamento será feito na entrega caso a forma selecionada seja
///    dinheiro e verifica se será necessário troco
    void Dinheiro();

///@brief Imprime as formas de pagamento para o usuário escolher qual deseja
    void ImprimeFormasPagamento();

};

#endif
