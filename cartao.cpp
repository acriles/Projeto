#include "cartao.h"
#include <iostream>
#include <cctype> 

using namespace std;

//TRATAMENTOS DE EXCEÇÃO-----------------------------------------------------------------------------

//Função que verifica se o número tem 16 dígitos ----------------------------------------------------
int Cartao::VerificaNumero(string num){
try {
         int cont = 0;
	
	for (char c : num) {
		if (isdigit(c)) {
                cont++;
		}
        }
	
	if (cont != 16) {
		cout<<endl;
                throw invalid_argument("NUMERO DO CARTAO INCORRETO! Digite novamente: ");
        }

        numeroCartao = num;
        return 1;
} 
        
catch (const exception &e) {
	cerr << e.what() << endl;
	return 0;
}
}


//Função que verifica se o mês é válido -----------------------------------------------------
int Cartao::VerificaMes(int m){
try {
	if (m < 1 || m > 12) {
             throw invalid_argument("MES INVALIDO! Digite novamente: ");
	}

        mesValidade = m;
        return 1;
} 

catch (const exception &e) {
	cerr << e.what() << endl;
	return 0;
}
}


//Função que verifica se o ano é válido----------------------------------------------------
int Cartao::VerificaAno(int a){
try {
	if (a<23 || a>40) {
		throw invalid_argument("ANO INVALIDO! Digite novamente: ");
        }
	
	anoValidade = a;
        return 1;

        } 

catch (const exception &e) {
	cerr << e.what() << endl;
	return 0;
}
}


//Função que verifica se o CVV é válido -----------------------------------------------------
int Cartao::VerificaCvv(string cod)
{
try {
         int cont = 0;

	for (char c : cod) {
           if (isdigit(c)) {
                cont++;
                }
            }

	if (cont != 3) {
                cout<<endl;
                throw invalid_argument("CVV INVALIDO! Digite novamente: ");
            }

	cvv = cod;
	return 1;
        } 
        
catch (const exception &e) {
	cerr << e.what() << endl;
	return 0;
}
}

//MÉTODO-------------------------------------------------------------------------------------------------



//Função caso a forma de pagamento seja Cartão (3 ou 4)---------------------------------------------------

Cartao::Cartao() {
}

void Cartao::ColetaDadosCartao()
{
//Coleta nome do titular
	cout<<"Digite o nome do titular do cartao: ";
	cin.ignore();                                  //limpa o buffer de entrada
	getline (cin, nomeTitular);
	
//Coleta numero do cartão
	cout<<endl;
	cout<<"Digite o numero do cartao (16 digitos): ";
	string numero;
	getline(cin, numero);
	
	while(!(VerificaNumero(numero))){
		getline(cin, numero);
        }

	
//Coleta mês de validade
	cout<<endl;
	cout<<"Digite o mes de validade: ";
	int mes;
	cin>>mes;
	
	while(!(VerificaMes(mes))){
                cin>>mes;
        }

	
//Coleta ano de validade
	cout<<endl;
	cout<<"Digite o ano validade (2 ultimos digitos): ";          
	int ano;
	cin>>ano;
	
	while (!(VerificaAno(ano))){
		cin>>ano;
	}

	
//Coleta cvv
	cin.ignore();                                 //limpa o buffer de entrada
	cout<<endl;
	cout<<"Digite o codigo de seguranca do cartao (CVV): ";
	string codigo;
	getline (cin, codigo);
	
	while(!(VerificaCvv(codigo))){             
                getline (cin, codigo);
	}
	
	cout<<endl;
	cout<<"Pagamento aprovado.";
	cout<<endl;
	
}
