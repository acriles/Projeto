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

string Bebida::getSabor() const { return sabor; }

string Bebida::getTamanho() const { return tamanho; }

float Bebida::getValor() const { return valor; }

string Bebida::getTipo() const { return tipo; }

// Destrutor da classe
Bebida::~Bebida(void) {
  sabor.clear();
  tipo.clear();
  tamanho.clear();
}
