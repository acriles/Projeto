#include <iostream>
#include "usuario.h"
#include "pedido.h"
#include "cardapio.h"
#include "pagamentos.h"


using namespace std;

int main(){

//USUÁRIO--------------------------------------------
    Usuario user({}, {}, {}, {});
    user.cadastroInicial();
    user.PossuiCadastro();
    user.imprimeUsuario();

    
//PIZZA----------------------------------------------
    // Pizza pizza1;
    // pizza1.inicializandoPizza();

    
//BEBIDA---------------------------------------------
    // Bebida bebida1;
    // bebida1.inicializandoBebida();

    
//CARDAPIO--------------------------------------------
    // Cardapio cardapio;
    // cardapio.inicializarCardapio();
    // cardapio.getPizzas();
    // cardapio.getBebidas();


//PEDIDO----------------------------------------------
    Pedido pedido;
    pedido.vetorPizzas();
    pedido.imprimePizzas();

    
//PAGAMENTO------------------------------------------
    Pagamentos pagamentos;
    	
    int opcaoPagamento = imprimeFormasPagamento();
    	
    while(!(opcaoPagamento>=1 && opcaoPagamento<=4)){     //Verifica se a escolha está coerente com as opções apresentadas
            std::cout<<std::endl;
            std::cout<< "OPCAO INVALIDA! Digite novamente: ";
            std::cin>>opcaoPagamento;			
    }
    	
    std::cout<<std::endl;
    
    	
    switch (opcaoPagamento){
    		case 1:
    		pagamentos.PIX();
    		break;
    		
    		case 2:
    		pagamentos.Dinheiro();
    		break;
    		
    		case 3:
    		coletaDadosCartao(pagamentos.cartaoCred);
    		break;
    		
    		case 4:
    		coletaDadosCartao(pagamentos.cartaoDeb);
    		break;
    }
    	
    	
    std::cout<<std::endl;
    std::cout<<"PEDIDO CONFIRMADO! Sua pizza esta sendo preparada e saira para entrega em breve :)";
    std::cout<<std::endl;

    
    return 0;   
 }
