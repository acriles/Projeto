#include <iostream> 
#include "pizza.h"

using namespace std;

//Construtores da classe Pizza 
 Pizza::Pizza(){  
 }

 Pizza::Pizza(string _sabor, string _tamanho, vector <string> _adicionais, float _valor){
   sabor = _sabor;
   tamanho = _tamanho;
   adicionais = _adicionais;
   valor = _valor + (adicionais.size()*2);
 }

//Metodos set e get dos atributos 
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

//Imprime os adicionais da pizza
 void Pizza::imprimeAdicionais(){
   if (!adicionais.empty()) {
    cout << "Adicionais";
    for(string adc: adicionais){
        cout << adc << ", ";
    }
    cout << endl;
   }
 }

//Imprime os atributos colocados na pizza 
 void Pizza::imprimePizza(){
    cout << endl <<"Pizza selecionada" << endl << "Sabor:" << sabor << endl << "Tamanho:" << tamanho << endl;
    imprimeAdicionais();
 }

//Inicializa os atributos da pizza
 void Pizza::inicializandoPizza(){
   int confirma= 1;
  string adicional;
   cout << "Digite o sabor" << endl;
   cin >> sabor; 
   cout << "Digite o tamanho" << endl;
   cin >> tamanho;
    int aux = 0;
  while (confirma == 1) {
    if (aux == 0) {
      cout << "Deseja adicionar acrescimos? Caso sim, digite 1, caso contrario "
              "digite 0"
           << endl;
    } else {
      cout << "Deseja adicionar mais um acrescimo? caso sim, digite 1, caso "
              "contrario digite 0"
           << endl;
    }
    cin >> confirma;
    if (confirma == 0)
      break;
    else {
      cout << "Digite o acrescimo que deseja:" << endl;
      cin >> adicional;
      addAdicional(adicional);
    }
    aux = 1;
  }
 }

//Destrutor da pizza
 Pizza::~Pizza(void){
    sabor.clear();
    tamanho.clear();
    adicionais.clear();
    cout <<"Classe Pizza destruida" << endl;
 }

