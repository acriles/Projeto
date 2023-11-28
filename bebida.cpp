#include "bebida.h"
#include <iostream>

//Construtores classe Bebida 
Bebida::Bebida(){
}
Bebida::Bebida(string _codigo ,string _tipo, string _sabor, string _tamanho, float _valor){
    tipo = _tipo;
    sabor = _sabor;
    tamanho = _tamanho;
    valor = _valor;
    codigo = _codigo;
}

//Metodos set e get 
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

//Imrprime atributos de Bebuda
void Bebida::imprimeBebida(){
    cout << "Tipo:" << tipo << endl << "Sabor:" << sabor << endl << "Tamanho:" << tamanho << endl << "Valor:" << valor << endl;
}

//Inicializa os atributos de bebida 
void Bebida::inicializandoBebida(){
  cout << "Digite o código da Bebida:" << endl;
  cin >> codigo;
  Cardapio cardapio;
  if (cardapio.confirmar_codigo_bebida(codigo)) {
    cardapio.pedidosBebida(codigo, sabor, tamanho, valor);
  } else {
    cout << "Comando invalido! " << endl;
  }
}

//Destrutor da classe
Bebida::~Bebida(void){
    sabor.clear();
    tipo.clear();
    tamanho.clear();
}
