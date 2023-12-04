#include "cartao.h"
#include <iostream>
#include <cctype> 

using namespace std;

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

void Cartao::ColetaDadosCartao()
{
//Coleta nome do titular
    cout<<"Digite o nome do titular do cartao: ";
    cin>>nomeTitular;
	
//Coleta numero do cartão
    cout<<endl;
    cout<<"Digite o numero do cartao (16 digitos): ";
    string numero;
    getline(cin, numero);
	
    while(!(VerificaNumero(numero))){
            cout<<"Numero do cartao incorreto. Digite novamente: ";     
            getline(cin, numero);
}

	
//Coleta mês de validade
    cout<<endl;
    cout<<"Digite o mes de validade: ";
    int mes;
    cin>>mes;
	
    while(!(VerificaMes(mes))){
            cout<<"Mes invalido! Digite novamente: ";
            cin>>mes;
    }

	
//Coleta ano de validade
	cout<<endl;
	cout<<"Digite o ano validade (2 ultimos digitos): ";          
	int ano;
	cin>>ano;
	
	while (!(VerificaAno(ano))){
		cout<<"Ano invalido! Digite novamente: ";     
		cin>>ano;
	}

	
//Coleta cvv
    cout<<endl;
    cout<<"Digite o codigo de seguranca do cartao (CVV): ";
    int codigo;
    cin>>codigo;
	
    while(!(VerificaCvv(codigo))){
            cout<<"CVV invalido! Digite novamente: ";     
            cin>>codigo;
	}
	
	
    cout<<endl;
    cout<<"Pagamento aprovado.";
    cout<<endl;

	
}