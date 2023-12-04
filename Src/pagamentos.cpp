#include "pagamentos.h"
#include "cartao.h"
#include <iostream>


//Métodos----------------------------------------------------

//Função para que o usuário selecione a forma de pagamento----------------------------------------------------
void Pagamentos::ImprimeFormasPagamento()
{
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
    std::cout<<std::endl;


	Pagamentos pagamentos;

	Cartao cartao;
	
   
	while(!(pagamento>=1 && pagamento<=4)){     //Verifica se a escolha está coerente com as opções apresentadas
				std::cout<<std::endl;
				std::cout<< "OPCAO INVALIDA! Digite novamente: ";
				std::cin>>pagamento;			
		}


		switch (pagamento){
				case 1:
				pagamentos.PIX();
				break;
				
				case 2:
				pagamentos.Dinheiro();
				break;
				
				case 3:
				cartao.ColetaDadosCartao();            
				break;
				
				case 4:
				cartao.ColetaDadosCartao();
				break;
		}
			
			
		std::cout<<std::endl;
		std::cout<<"PEDIDO CONFIRMADO! Sua pizza esta sendo preparada e saira para entrega em breve :)";
		std::cout<<std::endl;

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


int main ()
{
	Pagamentos pagamentos;
	pagamentos.ImprimeFormasPagamento();
	
	return 0;
}
