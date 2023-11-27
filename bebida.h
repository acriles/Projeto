#include <string>
#include <vector>
using namespace std;

#ifndef BEBIDA_H
#define BEBIDA_H


class Bebida {
private:
    string sabor;
    string tipo;
    string tamanho;
    float valor;
    int indice;

public:
    Bebida();
    Bebida(string _tipo, string _sabor, string _tamanho, float _valor, int _indice);
    void setTipo(string _tipo);
    void setSabor(string _sabor);
    void setTamanho(string _tamanho);
    void setValor(float _valor);
    string getSabor();
    string getTipo();
    string getTamanho();
    float getValor();
    void imprimeBebida();
    void inicializandoBebida();
    ~Bebida(void); // destrutor
};


#endif 
