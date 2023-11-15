#include "pagamentos.h"
#include <iostream>

/*------------------------------------------------------------- TESTCASES-----------------------------------------------------------------------
//Função que verifica se o número tem 16 dígitos
int verificaNumero(long long int num, Cartao& cartao){
  int cont=0;
  long long int aux=num;

  while(aux!=0){
    aux/=10;
    cont++;
  }

  if(cont==16){   //Se tiver 16 dígitos, o número do cartão é válido. Logo, podemos armazenar na strutct
    cartao.numeroCartao=num;
    return 1;
  }
  else{
    return 0;
  }
}
