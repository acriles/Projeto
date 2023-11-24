#include <iostream>
#include "cardapio.h"

void Cardapio::inicializarCardapio(){
//Inicializa as pizzas 
    pizzas.push_back(Pizza("Calabresa", 1, {}, 39)); 
    pizzas.push_back(Pizza("Calabresa", 2, {}, 49));
    pizzas.push_back(Pizza("Calabresa", 3, {}, 59));
    pizzas.push_back(Pizza("Marguerita", 1, {}, 39));
    pizzas.push_back(Pizza("Marguerita",2, {}, 49));
    pizzas.push_back(Pizza("Marguerita",3, {}, 59));
    pizzas.push_back(Pizza("Bacon",1, {}, 39));
    pizzas.push_back(Pizza("Bacon",1, {}, 49));
    pizzas.push_back(Pizza("Bacon",2, {}, 59));

 //Inicializa as bebidas    
    bebidas.push_back(Bebida("Refrigerante", "Coca", 1, 5.00)); 
    bebidas.push_back(Bebida("Refrigerante", "Coca", 2, 7.00)); 
    bebidas.push_back(Bebida("Refrigerante", "Guarana", 1, 5.00));  
    bebidas.push_back(Bebida("Refrigerante", "Guarana", 2, 7.00)); 
    bebidas.push_back(Bebida("Suco", "Laranja", 2, 7.00)); 
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