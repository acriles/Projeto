#include <iostream> 
#include "pizza.h"

using namespace std;

 Pizza::Pizza(){  
 }

 Pizza::Pizza(string _sabor, int _tamanho, vector <string> _adicionais, float _valor){
   sabor = _sabor;
   tamanho = _tamanho;
   adicionais = _adicionais;
   valor = _valor + (adicionais.size()*2);
 }

float Pizza::getValor(){
   return valor;
}

void Pizza::setSabor(string _sabor){
    sabor = _sabor; 
 }

 string Pizza::getSabor(){
    return sabor;
 }

 void Pizza::setTamanho(int _tamanho){
    tamanho = _tamanho;
 }

int Pizza::getTamanho(){
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
    cout << "Sabor:" << sabor << endl << "Tamanho:" << tamanho << endl << "Valor:" << valor << endl;
    imprimeAdicionais(); 
    cout << endl;
 }

 void Pizza::inicializandoPizza(){
   int confirma; string adicional;
   cout << "Digite o sabor" << endl;
   cin >> sabor; 
   cout << "Digite o tamanho. Para uma pizza pequena digite 1, media digite 2 e grande digite 3" << endl;
   cin >> tamanho;
   calculaPreco();
   cout << "Deseja adicionar acrescimos? Caso sim, digite 1, caso contrario digite 2" << endl;
   cin >> confirma;
   if (confirma==1){
      cout << "Digite o acrescimo que deseja:" << endl;
      cin >> adicional;
      addAdicional(adicional);
   }
 }

void Pizza::calculaPreco(){
   if(tamanho==1){
      valor = 39;
   } else if (tamanho==2){
      valor = 49;
   } else if (tamanho==3){
      valor = 59;
   } else {
      cout << "Tamanho invalido. Reiniciando a escolha do tamanho..." << endl;
   }
}


 Pizza::~Pizza(void){
    sabor.clear();
    adicionais.clear();
 }
