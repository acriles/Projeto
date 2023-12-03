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

// Metodos set e get
void Bebida::setSabor(string _sabor) { sabor = _sabor; }

void Bebida::setTipo(string _tipo) { tipo = _tipo; }

void Bebida::setTamanho(string _tamanho) { tamanho = _tamanho; }

void Bebida::setValor(float _valor) { valor = _valor; }

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
