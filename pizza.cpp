#include "pizza.h"
#include <iostream>

using namespace std;

Pizza::Pizza(string _codigo, string _sabor, string _tamanho, float _valor){
    sabor = _sabor;
    tamanho = _tamanho;
    valor = _valor;
    codigo = _codigo;
}


Pizza::~Pizza(void){
    sabor.clear();
    tamanho.clear();
}