#include "bebida.h"
#include <iostream>


Bebida::Bebida(){
}

Bebida::Bebida(string _tipo, string _sabor, string _tamanho, float _valor){
    tipo = _tipo;
    sabor = _sabor;
    tamanho = _tamanho;
    valor = _valor;
}


void Bebida::setSabor(string _sabor){
    sabor = _sabor; 
}


void Bebida::setTipo(string _tipo){
    tipo = _tipo; 
}


void Bebida::setTamanho(string _tamanho){ 
    tamanho = _tamanho; 
}


void Bebida::setValor(float _valor){ 
    valor = _valor;
}


string Bebida::getSabor(){
    return sabor; 
}


string Bebida::getTamanho(){
    return tamanho; 
}


float Bebida::getValor(){ 
    return valor; 
}


void Bebida::imprimeBebida(){
    cout << "Tipo:" << tipo << endl << "Sabor:" << sabor << endl << "Tamanho:" << tamanho << endl << "Valor:" << valor << endl;
}


void Bebida::inicializandoBebida(){
    cout << "Qual o tipo de bebida você deseja?" << endl;
    cin >> tipo;
    cout << "Digite o sabor" << endl;
    cin >> sabor;
    cout << "Digite o tamanho" << endl;
    cin >> tamanho;
}


Bebida::~Bebida(void){
    sabor.clear();
    tipo.clear();
    tamanho.clear();
    cout << "Classe destruida" << endl;
}
