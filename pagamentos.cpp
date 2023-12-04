#include "pagamentos.h"
#include "cartao.h"
#include <iostream>

using namespace std;

//Métodos----------------------------------------------------

//Função para que o usuário selecione a forma de pagamento----------------------------------------------------
void Pagamentos::ImprimeFormasPagamento()
{
    cout << "Digite o numero de acordo com a forma de pagamento que voce deseja:"<<endl;
    cout<<endl;
    cout<<"1. Pix"<<endl;
    cout<<"2. Dinheiro"<<endl;
    cout<<"3. Cartao de Credito"<<endl;
    cout<<"4. Cartao de Debito"<<endl;
	
    int pagamento=0;
    cout<<endl;
    cout<< "Forma de pagamento: ";
    cin >> pagamento;
    cout<<endl;


    Pagamentos pagamentos;

    Cartao cartao;
	
   
    while(!(pagamento>=1 && pagamento<=4)){     //Verifica se a escolha está coerente com as opções apresentadas
	cout<<endl;
	cout<< "OPCAO INVALIDA! Digite novamente: ";
	cin>>pagamento;			
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
			
			
    cout<<endl;
    cout<<"PEDIDO CONFIRMADO! Sua pizza esta sendo preparada e saira para entrega em breve :)";
    cout<<endl;

}


//Função caso a forma de pagamento seja via PIX (1)----------------------------------------------------
void Pagamentos::PIX ()
{
    cout<< "Chave PIX: 96.123.687/0001-75 - CNPJ"<<endl;
}


//Função caso a forma de pagamento seja via Dinheiro (2)---------------------------------------------------
void Pagamentos::Dinheiro ()
{
    cout<< "Pagamento a ser realizado na entrega."<<endl;
    cout<< "Sera necessario troco?"<<endl;
    cout<<endl;
    cout<<"1. Sim" << endl;
    cout<< "2. Nao" << endl;
	
    int escolhaTroco=0;
    cout<<endl;
    cin >> escolhaTroco;
	
    if(escolhaTroco==1){
            cout<<endl;
            cout<<"Troco para quanto?"<<endl;
	
            int valor;
            cout<< "Valor em reais: ";
            cin>>valor;
		
    }
}
