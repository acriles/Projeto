#include <iostream>
#include "cardapio.h"

void Cardapio::inicializarCardapio(){
    //inicializando as pizzas do cardapio 
    pizzas.push_back(Pizza("Calabresa", "Pequena", {}, 39)); // {} ficam vazios, pois inicialmente nao tem acrescimos na pizza
    pizzas.push_back(Pizza("Calabresa", "Média", {}, 49));
    pizzas.push_back(Pizza("Calabresa", "Grande", {}, 59));
    pizzas.push_back(Pizza("Marguerita", "Pequena", {}, 39));
    pizzas.push_back(Pizza("Marguerita", "Média", {}, 49));
    pizzas.push_back(Pizza("Marguerita", "Grande", {}, 59));
    pizzas.push_back(Pizza("Bacon", "Pequena", {}, 39));
    pizzas.push_back(Pizza("Bacon", "Média", {}, 49));
    pizzas.push_back(Pizza("Bacon", "Grande", {}, 59));
    
    //inicializando as bebidas do cardapio 
    bebidas.push_back(Bebida("Refrigerante", "Coca", "Lata", 5.00)); 
    bebidas.push_back(Bebida("Refrigerante", "Coca", "600ml", 7.00)); 
    bebidas.push_back(Bebida("Refrigerante", "Guarana", "Lata", 5.00));  
    bebidas.push_back(Bebida("Refrigerante", "Guarana", "600ml", 7.00)); 
    bebidas.push_back(Bebida("Suco", "Laranja", "600ml", 7.00)); 
}

void Cardapio::getPizzas(){
     cout << "Pizzas" << endl;
    for (int i=0; i<pizzas.size(); i++){
         pizzas[i].imprimePizza();
    }
    cout << endl;
}

void Cardapio::getBebidas(){
    cout <<"Bebidas"<< endl;
     for (int i=0; i<bebidas.size(); i++){
         bebidas[i].imprimeBebida();
    }
    cout << endl;


}