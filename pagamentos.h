/*-------------------------------------------------------------------------------------------------------------------------------------------
Dar as opções de pagamento (imprimir na tela):
1 - PIX;
2 - Dinheiro;
3 - Cartão de Crédito;
4 - Cartão de Débito.
---------------------------------------------------------------------------------------------------------------------------------------------
* Detalhar cada opção
PIX -> Imprimir na tela a chave do pix;
Dinheiro -> Imprimir: "Pagamento na entrega/retirada".
Cartão de Crédito: Solicitar nome do titular; número do cartão (16 dígitos); data de validade; CVV [12156165146414; 12, 20, 222]
Cartão de Débito:  Solicitar nome do titular; número do cartão (16 dígitos); data de validade; CVV
-------------------------------------------------------------------------------------------------------------------------------------------*/
#include <string>

#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H

//Struct Cartao: armazena os dados do cartão de crédito/debito a ser utilizado no pagamento
struct Cartao {
   std::string nomeTitular;
   long long int numeroCartao; // Usando long long int para representar um número de 16 bits
   int mesValidade;
   int anoValidade;
   int cvv;
};
