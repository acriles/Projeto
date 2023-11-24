#include "bebida.h"
#include <iostream>

//Construtores classe Bebida 
Bebida::Bebida(){
}
Bebida::Bebida(string _tipo, string _sabor, int _tamanho, float _valor){
    tipo = _tipo;
    sabor = _sabor;
    tamanho = _tamanho;
    valor = _valor;
}

//Metodos set e get 
void Bebida::setSabor(string _sabor){
    sabor = _sabor; 
}

void Bebida::setTipo(string _tipo){
    tipo = _tipo; 
}

void Bebida::setTamanho(int _tamanho){ 
    tamanho = _tamanho; 
}

void Bebida::setValor(float _valor){ 
    valor = _valor;
}

string Bebida::getSabor(){
    return sabor; 
}
 
int Bebida::getTamanho(){
    return tamanho; 
}

float Bebida::getValor(){ 
    return valor; 
}

//Imrprime atributos de Bebuda
void Bebida::imprimeBebida(){
    cout << "Tipo:" << tipo << endl << "Sabor:" << sabor << endl << "Tamanho:" << tamanho << endl << "Valor:" << valor << endl;
}

//Inicializa os atributos de bebida 
void Bebida::inicializandoBebida(){
    cout << "Qual o tipo de bebida você deseja?" << endl;
    cin >> tipo;
    cout << "Digite o sabor" << endl;
    cin >> sabor;
    cout << "Digite o tamanho. Para lata, digite 1. Caso 600ml, digite 2" << endl;
    cin >> tamanho;
    calcularPreco();
}

void Bebida::calcularPreco(){
     if(tamanho==1){
      valor = 5.00;
   } else if (tamanho==2){
      valor = 7.00;
   } else {
      cout << "Tamanho invalido. Reiniciando a escolha do tamanho..." << endl;
   }
}

//Destrutor da classe
Bebida::~Bebida(void){
    sabor.clear();
    tipo.clear();
  
}
