#include <string>
#include <vector>
using namespace std;

#ifndef BEBIDA_H
#define BEBIDA_H


class Bebida {
private:
    string sabor;    //sabor da bebida
    string tipo;     //tipo da bebida
    string tamanho;  //tamanho da bebida
    float valor;     //valor da bebida
    string codigo;   //codigo de identificacao da bebida

public:
///@brief Inicializa os membros da classe
///@param _codigo Codigo utilizado para identificar cada bebida
///@param _tipo Tipo de bebida - refrigerante ou suco
///@param _sabor Sabor da bebida
///@param _tamanho Tamanho da bebida
///@param _valor Valor da bebida escolhida
    Bebida(string _codigo ,string _tipo, string _sabor, string _tamanho, float _valor);

///@brief Obtem o codigo de identificação da bebida
///@return Codigo da bebida
    string getCodigo() const 
    {
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
