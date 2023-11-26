#include <iostream>
#include "cardapio.h"

void Cardapio::inicializarCardapio(){
    //inicializando as pizzas do cardapio 
    pizzas.push_back(Pizza("#CP","Calabresa", "Pequena", {}, 39.0)); // {} ficam vazios, pois inicialmente nao tem acrescimos na pizza
    pizzas.push_back(Pizza("#CM","Calabresa", "Média", {}, 49.0));
    pizzas.push_back(Pizza("#CG","Calabresa", "Grande", {}, 59.0));
    pizzas.push_back(Pizza("#MP","Marguerita", "Pequena", {}, 39.0));
    pizzas.push_back(Pizza("#MM","Marguerita", "Média", {}, 49.0));
    pizzas.push_back(Pizza("#MG","Marguerita", "Grande", {}, 59.0));
    pizzas.push_back(Pizza("#BP","Bacon", "Pequena", {}, 39.0));
    pizzas.push_back(Pizza("#BM","Bacon", "Média", {}, 49.0));
    pizzas.push_back(Pizza("#BG","Bacon", "Grande", {}, 59.0));
    
    //inicializando as bebidas do cardapio 
    bebidas.push_back(Bebida("#RCL","Refrigerante", "Coca", "Lata", 5.00)); 
    bebidas.push_back(Bebida("#RC6","Refrigerante", "Coca", "600ml", 7.00)); 
    bebidas.push_back(Bebida("#RGL","Refrigerante", "Guarana", "Lata", 5.00));  
    bebidas.push_back(Bebida("#RG6","Refrigerante", "Guarana", "600ml", 7.00)); 
    bebidas.push_back(Bebida("#SL6","Suco", "Laranja", "600ml", 7.00)); 
}

bool Cardapio::confirmar_codigo(string codigo) {
    inicializarCardapio();
    for (int i = 0; i < pizzas.size(); i++) {
        if (pizzas[i].getCodigo() == codigo) {
            return true;
        }
    }
    return false;
}
void Cardapio::pedidos(string codigo, string& _sabor, string& _tamanho, vector<string>& _adicionais, float& _valor) {
    inicializarCardapio();
    for (int i = 0; i < pizzas.size(); i++) {
        if (pizzas[i].getCodigo() == codigo) {
            _sabor = pizzas[i].getSabor();
            cout << _sabor << endl;

            _tamanho = pizzas[i].getTamanho();
            //_valor = pizzas[i].getValor();
            _adicionais = pizzas[i].getAdicionais();
            break;
        }
    }
}

void Cardapio::getPizzas(){
     cout << ""<< endl;
    for (int i=0; i<pizzas.size(); i++){
         pizzas[i].imprimePizza();
         cout << endl;

    }
    cout << endl;
}

void Cardapio::getBebidas(){
    cout <<"Bebidas"<< endl;
     for (int i=0; i<bebidas.size(); i++){
         bebidas[i].imprimeBebida();
         cout << endl;
    }
    cout << endl;


}
