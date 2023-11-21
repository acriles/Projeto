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


//Função caso a forma de pagamento seja via PIX (1)----------------------------------------------------
void Pagamentos::PIX ()
{
    std::cout<< "Chave PIX: 96.123.687/0001-75 - CNPJ"<<std::endl;
}


//Função caso a forma de pagamento seja via Dinheiro (2)---------------------------------------------------
void Pagamentos::Dinheiro ()
{
    std::cout<< "Pagamento a ser realizado na entrega."<<std::endl;
    std::cout<< "Sera necessario troco?"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"1. Sim" << std::endl;
    std::cout<< "2. Nao" << std::endl;
	
    int escolhaTroco=0;
    std::cout<<std::endl;
    std::cin >> escolhaTroco;
	
    if(escolhaTroco==1){
            std::cout<<std::endl;
            std::cout<<"Troco para quanto?"<<std::endl;
	
            int valor;
            std::cout<< "Valor em reais: ";
            std::cin>>valor;
		
    }
}


//Função caso a forma de pagamento seja Cartão (3 ou 4)---------------------------------------------------
void coletaDadosCartao(Cartao& cartao)
{
//Coleta nome do titular
    std::cout<<"Digite o PRIMEIRO nome do titular do cartao: ";
    std::cin>> cartao.nomeTitular;
	
	
	//Coleta e numero do cartão
	std::cout<<std::endl;
	std::cout<<"Digite o numero do cartao (16 digitos): ";
	long long int numero;
	std::cin>>numero;
	
	while(!(verificaNumero(numero, cartao))){
		std::cout<<"Numero do cartao incorreto. Digite novamente: ";     //TESTCASE
		std::cin>>numero;
	}
	
	
	//Coleta mês de validade
	std::cout<<std::endl;
	std::cout<<"Digite o mes de validade: ";
	int mes;
	std::cin>>mes;
	
	while (!(verificaMes(mes, cartao))){
		std::cout<<"Mes invalido! Digite novamente: ";
		std::cin>>mes;
	}
	
	
	//Coleta ano de validade
	std::cout<<std::endl;
	std::cout<<"Digite o ano validade (2 ultimos digitos): ";          
	int ano;
	std::cin>>ano;
	
	while (!(verificaAno(ano, cartao))){
		std::cout<<"Ano invalido! Digite novamente: ";               //TESTCASE
		std::cin>>ano;
	}
	
	//Coleta cvv
	std::cout<<std::endl;
	std::cout<<"Digite o codigo de seguranca do cartao (CVV): ";
	int codigo;
	std::cin>>codigo;
	
	while (!(verificaCvv(codigo, cartao))){
		std::cout<<"CVV invalido! Digite novamente: ";            //TESTCASE
		std::cin>>codigo;
	}
	
	
	std::cout<<std::endl;
	std::cout<<"Pagamento aprovado.";
	std::cout<<std::endl;

	
}
