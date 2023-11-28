#include <string>
#include <iostream>

using namespace std;

#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H

//Struct Cartao: armazena os dados do cartão de crédito/débito a ser utilizado no pagamento
struct Cartao {
public:
    string nomeTitular;
    long long int numeroCartao;     //Usando long long int para representar um número de 16 dígitos
    int mesValidade;
    int anoValidade;
    int cvv;
};




class Pagamentos{

public:

///@brief Imprime a chave PIX caso essa seja a forma de pagamento
    void PIX();

///@brief Imprime que o pagamento será feito na entrega caso a forma selecionada seja
///    dinheiro e verifica se será necessário troco
    void Dinheiro();

///@brief Imprime as formas de pagamento para o usuário escolher qual deseja
///@return o numero correspondente à forma de pagamento escolhida
    int imprimeFormasPagamento();

///@brief Coleta os dados do cartão (nome do titular, número do cartao, validade e cvv) 
///    e armazena na struct caso a forma de pagamento seja cartão de crédito ou débito
///@param cartao Struct que contém os dados do cartão a serem armazenados
    void coletaDadosCartao (Cartao& cartao);
	
    Cartao cartaoCred;      // Dados do cartao de credito
    Cartao cartaoDeb;       // Dados do cartao de debito
};

#endif
