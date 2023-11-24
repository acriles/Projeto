#include <string>
#include <vector>
using namespace std;

#ifndef BEBIDA_H
#define BEBIDA_H


class Bebida {
private:
    string sabor;
    string tipo;
    int tamanho;
    float valor;

public:
    Bebida();
    Bebida(string _tipo, string _sabor, int _tamanho, float _valor);
    void setTipo(string _tipo);
    void setSabor(string _sabor);
    void setTamanho(int _tamanho);
    void setValor(float _valor);
    string getSabor();
    string getTipo();
    int getTamanho();
    float getValor();
    void imprimeBebida();
    void inicializandoBebida();
    void calcularPreco();
    ~Bebida(void); // destrutor
};


#endif 
