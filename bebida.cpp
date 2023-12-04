#include "bebida.h"
#include <iostream>

// Construtores classe Bebida
Bebida::Bebida() {}
Bebida::Bebida(string _codigo, string _tipo, string _sabor, string _tamanho,
               float _valor) {
  tipo = _tipo;
  sabor = _sabor;
  tamanho = _tamanho;
  valor = _valor;
  codigo = _codigo;
}

// Metodos get

string Bebida::getSabor() { return sabor; }

string Bebida::getTamanho() { return tamanho; }

float Bebida::getValor() { return valor; }

string Bebida::getTipo() { return tipo; }

// Destrutor da classe
Bebida::~Bebida(void) {
  sabor.clear();
  tipo.clear();
  tamanho.clear();
}
