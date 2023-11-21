#include "pagamentos.hpp"
#include <iostream>

//TESTE CASES----------------------------------------------------

//Função que verifica se o número tem 16 dígitos - TESTCASE----------------------------------------------------
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


//Função que verifica se o mês é válido - TESTCASE----------------------------------------------------
int verificaMes(int m, Cartao& cartao){
    if(m>=1 && m<=12){
            cartao.mesValidade=m;
	    return 1;
    }
	    
    else{
            return 0;
    }
}


//Função que verifica se o ano é válido - TESTCASE----------------------------------------------------
int verificaAno(int a, Cartao& cartao){
    if(a>=23 && a<=40){     //Supondo que um cartão atual não tenha validade superior ao ano de 2040
            cartao.anoValidade=a;
	    return 1;
    }
	    
    else{
            return 0;
    }
}


//Função que verifica se o CVV é válido - TESTCASE----------------------------------------------------
int verificaCvv(int cod, Cartao& cartao){
    int cont=0;
    long long int aux=cod;
	
    while(aux!=0){
            aux/=10;
            cont++;
    }
	
    if(cont==3){             //Se tiver 3 dígitos, o CVV digitado é valido. Logo, podemos armazenar na struct
            cartao.cvv=cod;
            return 1;
    }
	    
    else{
            return 0;
    }
}


//Métodos----------------------------------------------------

//Função para que o usuário selecione a forma de pagamento----------------------------------------------------
int imprimeFormasPagamento(){
    std::cout << "Digite o numero de acordo com a forma de pagamento que voce deseja:"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"1. Pix"<<std::endl;
    std::cout<<"2. Dinheiro"<<std::endl;
    std::cout<<"3. Cartao de Credito"<<std::endl;
    std::cout<<"4. Cartao de Debito"<<std::endl;
	
int pagamento=0;
std::cout<<std::endl;
std::cout<< "Forma de pagamento: ";
std::cin >> pagamento;
	
return pagamento;
}
