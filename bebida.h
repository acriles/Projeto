#include <string>
#include <vector>
using namespace std;

#ifndef BEBIDA_H
#define BEBIDA_H

class Bebida{
private:
    string sabor;     //Sabor da bebida
    string tipo;     //Tipo da bebida
    string tamanho;  //Tamanho da bebida
    float valor;     //Valor da bebida
    string codigo;   //Codigo de identificacao da bebida

public:
///@brief Inicializa os membros da classe
///@param _codigo Código utilizado para identificar cada bebida
///@param _tipo Tipo de bebida - refrigerante ou suco
///@param _sabor Sabor da bebida
///@param _tamanho Tamanho da bebida
///@param _valor Valor da bebida escolhida
    Bebida(string _codigo ,string _tipo, string _sabor, string _tamanho, float _valor);

///@brief Obtém o código de identificação da bebida
///@return Código da bebida
    string getCodigo() const{
        return codigo;
    }//nao apareceu o commit

///@brief Obtem o sabor da bebida escolhida
///@return Sabor da bebida
    string getSabor() const;

///@brief Obtem o tipo da bebida escolhida
///@return Tipo da bebida
    string getTipo() const;

///@brief Obtem o tamanho da bebida escolhida
///@return Tamanho da bebida
    string getTamanho() const;

///@brief Obtem o valor da bebida escolhida
///@return Valor da bebida
    float getValor() const;

    ~Bebida(void); // destrutor
};


#endif 
