#include "cartao.h"
#include <iostream>
#include <cctype> 

//TRATAMENTOS DE EXCEÇÃO----------------------------------------------------

//Função que verifica se o número tem 16 dígitos ----------------------------------------------------
int Cartao::VerificaNumero(string num){
    int cont=0;
   	
	for (char c:num){
		if (isdigit(c)){
			cont++;
		}
	}
    
    if(cont==16){     //Se tiver 16 dígitos, o número do cartão é valido
            numeroCartao=num;
	    return 1;
    }
	    
    else{
            return 0;
    }
}


//Função que verifica se o mês é válido -----------------------------------------------------
int Cartao::VerificaMes(int m){
    if(m>=1 && m<=12){              //O mês deve estar entre 01 (janeiro) e 12 (fevereiro)
            mesValidade=m;
	    return 1;
    }
	    
    else{
            return 0;
    }
}


//Função que verifica se o ano é válido----------------------------------------------------
int Cartao::VerificaAno(int a){
    if(a>=23 && a<=40){     //Supondo que um cartão atual não tenha validade superior ao ano de 2040
            anoValidade=a;
	    return 1;
    }
	    
    else{
            return 0;
    }
}


//Função que verifica se o CVV é válido -----------------------------------------------------
int Cartao::VerificaCvv(int cod)
{
    int cont=0;
    long long int aux=cod;
	
    while(aux!=0){
            aux/=10;
            cont++;
    }
	
    if(cont==3){             //Se tiver 3 dígitos, o CVV digitado é valido. Logo, podemos armazenar na struct
            cvv=cod;
            return 1;
    }
	    
    else{
            return 0;
    }
}

//-------------------------------------------------------------------------------------------------------------


//Função caso a forma de pagamento seja Cartão (3 ou 4)---------------------------------------------------

Cartao::Cartao() {
}

void Cartao::ColetaDadosCartao ()
{
//Coleta nome do titular
    std::cout<<"Digite o nome do titular do cartao: ";
    //std::getline(std::cin, nomeTitular);
    std::cin>>nomeTitular;
	
//Coleta numero do cartão
    std::cout<<std::endl;
    std::cout<<"Digite o numero do cartao (16 digitos): ";
    string numero;
    std::getline(std::cin, numero);
	
    while(!(VerificaNumero(numero))){
            std::cout<<"Numero do cartao incorreto. Digite novamente: ";     
            std::getline(std::cin, numero);
}

	
//Coleta mês de validade
    std::cout<<std::endl;
    std::cout<<"Digite o mes de validade: ";
    int mes;
    std::cin>>mes;
	
    while(!(VerificaMes(mes))){
            std::cout<<"Mes invalido! Digite novamente: ";
            std::cin>>mes;
    }

	
//Coleta ano de validade
	std::cout<<std::endl;
	std::cout<<"Digite o ano validade (2 ultimos digitos): ";          
	int ano;
	std::cin>>ano;
	
	while (!(VerificaAno(ano))){
		std::cout<<"Ano invalido! Digite novamente: ";     
		std::cin>>ano;
	}

	
//Coleta cvv
    std::cout<<std::endl;
    std::cout<<"Digite o codigo de seguranca do cartao (CVV): ";
    int codigo;
    std::cin>>codigo;
	
    while(!(VerificaCvv(codigo))){
            std::cout<<"CVV invalido! Digite novamente: ";     
            std::cin>>codigo;
	}
	
	
    std::cout<<std::endl;
    std::cout<<"Pagamento aprovado.";
    std::cout<<std::endl;

	
}
