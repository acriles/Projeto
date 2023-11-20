#include "pagamentos.h"
#include <iostream>

------------------------------------------------------------- TESTCASES-----------------------------------------------------------------------
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

//Função que verifica se o mês é válido
int verificaMes(int m, Cartao& cartao){
  if(m>1 || m<12){
    cartao.mesValidade=m;
    return 1;
  }
  else{
    return 0;
  }
}

//Função que verifica se o ano é válido
int verificaAno(int a, Cartao& cartao){
  if(a>=23 || a<=40){  //Supondo que um cartão atual não tenha validade até 2040
    cartao.anoValidade=a;
    return 1;
  }
  else{
    return 0;
  }

//Função que verifica se o CVV tem 3 dígitos
int verificaCvv (int cod, Cartao& cartao){
  long long int aux=cod;
	
	while (aux!=0){
		aux/=10;
		cont++;
	}
  	if (cont==3){                                   //se tiver 3 dígitos, o CVV digitado é valido, logo podemos armazenar na struct
		cartao.cvv=cod;
		return 1;
	}
	else{
		return 0;
	}
}


//MÉTODOS-------------------------------------------------------------------------------

//Funcao para que o usuário selecione a forma de pagamento------------------------------
void ImprimeFormasPagamento (){
	cout << "Digite o número de acordo com a forma de pagamento que você deseja"<<endl;
	cout<<"1. Pix"<<endl;
	cout<<"2. Dinheiro"<<endl;
	cout<<"3. Cartão de Crédito"<<endl;
	cout<<"4. Cartão de Débito"<<endl;

	int pagamento=0;                              //"zerando" a escolha
	cout<< "Forma de pagamento: "; 
	cin >> pagamento;
	
	if(pagamento<1 || pagamento >4){
		cout<< "Opção inválida"<<endl;     //TESTCASE            
	}
}



//Funcao para que a forma de pagamento seja via PIX (1)------------------------------
void chavePIX ()
{
	cout<< "Chave PIX: 96.123.687/0001-75 - CNPJ"<<endl;
}



//Função caso a forma de pagamento seja via Dinheiro (2)----------------------------
void Dinheiro ()
{
	cout<< "Pagamento a ser realizado na entrega."<<endl;
	cout<< "Será necessário troco?"<<endl;
	cout<<"1. Sim" << endl;
	cout<< "2.Não" << endl;
	
	int escolhaTroco=0;
	cout<< "Troco?";
	cin >> escolhaTroco;
	
	if (escolhaTroco==1){
		cout<<"Troco para quanto?"<<endl;
	}
	
	int valor;
	cin>>valor;
}



//Função caso a forma de pagamento seja via Cartão de crédito ou débito (3 e 4)----
voidcoletaDadosCartao (Cartao& cartao)
{
	//Coleta nome do titular
	cout<<"Digite o nome do titular do cartão: ";
	cin>> cartao.nomeTitular;
	
	
	//Coleta e numero do cartão
	cout<<"Digite o número do cartão (16 dígitos): ";
	long long int numero;
	cin>>numero;
	
	while(verificaNumero(numero, cartao)==0){
		cout<<"Número do cartão incorreto. Digite novamente: ";     //TESTCASE
		cin>>numero;
	}
	
	
	//Coleta mês de validade
	cout<<"Digite o mês de validade: ";
	int mes;
	cin>>mes;
	
	while (verificaMes(mes, cartao)==0){
		cout<<"Mês inválido! Digite novamente: ";
		cin>>mes;
	}
	
	
	//Coleta ano de validade

	cout<<"Digite o ano validade (2 últimos dígitos): ";          
	int ano;
	cin>>ano;
	
	while (verificaAno(ano, cartao)==0){
		cout<<"Ano inválido! Digite novamente: ";               //TESTCASE
		cin>>ano;
	}

	
	//Coleta cvv
	
	cout<<"Digite cvv (3 digitos): ";
	int codigo;
	cin>>codigo;
	
	while (verificaCvv(codigo, cartao)==0{
		cout<<"CVV incorreto. Digite novamente: ";            //TESTCASE
		cin>>codigo;
	}
		
}
	

