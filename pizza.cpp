#include "pizza.h"
#include <iostream>

using namespace std;

Pizza::Pizza() {}

Pizza::Pizza(string _sabor, string _tamanho, vector<string> _adicionais,
             float _valor, int _indice) {
  sabor = _sabor;
  tamanho = _tamanho;
  adicionais = _adicionais;
  valor = _valor + (adicionais.size() * 2);
  indice = _indice;
}
int Pizza::getIndice() { return indice; }

void Pizza::setSabor(string _sabor) { sabor = _sabor; }

string Pizza::getSabor() { return sabor; }

void Pizza::setTamanho(string _tamanho) { tamanho = _tamanho; }

string Pizza::getTamanho() { return tamanho; }

void Pizza::setAdicionais(vector<string> _adicionais) {
  adicionais = _adicionais;
}

void Pizza::addAdicional(string _adicional) {
  adicionais.push_back(_adicional); // adicionando os acrescimos no vetor
  valor = valor + 2;
}

void Pizza::imprimeAdicionais() {
  if (!adicionais.empty()) {
    cout << "Adicionais: ";
    for (string adc : adicionais) {
      cout << adc << ", ";
    }
    cout << endl;
  }
}

void Pizza::imprimePizza() {

  cout << indice << " " << sabor << " " << tamanho << " " << valor << endl;
  /*
  cout << endl
       << "Pizza selecionada" << endl
       << "Sabor:" << sabor << endl
       << "Tamanho:" << tamanho << endl
       << "Valor:" << valor << endl;*/
  imprimeAdicionais();
}

void Pizza::inicializandoPizza() {
  /* int confirma = 1;
   bool contem = false;
   string adicional;
   cout << "Digite o indice da Pizza de sua escolha" << endl;
   cin >> indice;
   for (int i = 0; i < pizzas[i]; i++) {
     if (pizzas[i].getIndice == indice)
       contem = true;
     else
       cout << "Pizza não encontrada" << endl;
   }

   int aux = 0;
   while (confirma == 1) {
     if (aux == 0) {
       cout << "Deseja adicionar acrescimos? Caso sim, digite 1, caso contrario
   " "digite 0"
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
   }*/
}

Pizza::~Pizza(void) {
  sabor.clear();
  tamanho.clear();
  adicionais.clear();
}