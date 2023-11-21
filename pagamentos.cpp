#include "pagamentos.hpp"
#include <iostream>

//*************************************************************TESTE CASES********************************************************************

//Função que verifica se o número tem 16 dígitos - TESTCASE
int verificaNumero(long long int num, Cartao& cartao){
    int cont=0;
    long long int aux=num;
	
    while(aux!=0){
            aux/=10;
	    cont++;
    }
	
    if(cont==16){     //Se tiver 16 dígitos, o número do cartão é valido. Logo, podemos armazenar na struct
            cartao.numeroCartao=num;
	    return 1;
    }
    else{
            return 0;
    }
}


//Função que verifica se o mês é válido - TESTCASE
int verificaMes(int m, Cartao& cartao){
    if(m>=1 && m<=12){
            cartao.mesValidade=m;
	    return 1;
    }
    else{
            return 0;
    }
}


//Função que verifica se o ano é válido - TESTCASE
	

