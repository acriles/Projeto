#include <iostream> 
#include "pizza.h"
#include "cardapio.h"
using namespace std;

 Pizza::Pizza(){  
 }

 Pizza::Pizza(string _codigo,string _sabor, string _tamanho, vector <string> _adicionais, float _valor){
   sabor = _sabor;
   tamanho = _tamanho;
   adicionais = _adicionais;
   valor = _valor + (adicionais.size()*2);
   codigo = _codigo;
 }

void Pizza::setSabor(string _sabor){
    sabor = _sabor; 
 }

 string Pizza::getSabor(){
    return sabor;
 }

 void Pizza::setTamanho(string _tamanho){
    tamanho = _tamanho;
 }

 string Pizza::getTamanho(){
    return tamanho;
 }
 
 void Pizza::setAdicionais(vector <string> _adicionais){
   adicionais = _adicionais;
 }

 void Pizza::addAdicional(string _adicional){
    adicionais.push_back(_adicional); //adicionando os acrescimos no vetor 
    valor = valor + 2;
 }

 void Pizza::imprimeAdicionais(){
    cout << "Adicionais: ";
    
    for(string adc: adicionais){
        cout << adc << ", ";
    }
    cout << endl;
 }

 void Pizza::imprimePizza(){
    cout << "Código:" << codigo << endl << "Sabor:" << sabor << endl << "Tamanho:" << tamanho << endl;
    imprimeAdicionais();
 }

 void Pizza::inicializandoPizza() {
    int confirma;
    string adicional;

    cout << "Digite o código da pizza:" << endl;
    cin >> codigo;

    Cardapio cardapio;
    if (cardapio.confirmar_codigo_pizza(codigo)) {
        Cardapio cardapio;
        cardapio.pedidosPizza(codigo, sabor, tamanho, adicionais, valor); 
        cout << "Deseja adicionar acréscimos? Caso sim, digite 1, caso contrário, digite 2" << endl;
        cin >> confirma;

        if (confirma == 1) {
            cout << "Digite o acréscimo que deseja:" << endl;
            cin >> adicional;
            addAdicional(adicional);
        }
    }
    else{
         cout << "Comando invalido! " << endl;
         inicializandoPizza();
    }
}



 Pizza::~Pizza(void){
    sabor.clear();
    tamanho.clear();
    adicionais.clear();
 }
