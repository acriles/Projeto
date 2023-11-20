#include <string>

#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H
using namespace std;

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
private:
   double pix;
   double dinheiro;
   Cartao cartaoCred;
   Cartao cartaoDeb;
};
