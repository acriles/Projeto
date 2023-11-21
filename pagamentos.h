#include <string>
#include <iostream>

#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H

//Struct Cartao: armazena os dados do cartão de crédito/débito a ser utilizado no pagamento
struct Cartao {
public:
    string nomeTitular;
    long long int numeroCartao; // Usando long long int para representar um número de 16 bits
    int mesValidade;
    int anoValidade;
    int cvv;
};


class Pagamentos{	
public:
    Cartao cartaoCred;
    Cartao cartaoDeb;
    void PIX();
    void Dinheiro();
};

#endif
