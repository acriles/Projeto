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
    string codigo;

public:
///@brief Construtor da classe
    Bebida();

///@brief Inicializa os membros da classe
///@param _codigo Codigo utilizado para identificar cada bebida
///@param _tipo Tipo de bebida
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

///@brief Define o tipo da bebida
///
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
