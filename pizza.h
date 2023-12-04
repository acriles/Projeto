#include <string>
#include <vector>
using namespace std;

#ifndef PIZZA_H
#define PIZZA_H

class Pizza{
private:
    string sabor;     //Sabor da pizza
    string tamanho;     //Tamanho da pizza
    float valor;     //Valor da pizza
    string codigo;     //Código de identificação da pizza


public:

///@brief Inicializa os membros da classe
///@param _codigo Código utilizado para identificar cada pizza
///@param _sabor Sabor da pizza
///@param _tamanho Tamanho da pizza
///@param _adicionais Vetor que contempla os adicionais da pizza
///@param _ valor Valor da pizza
     Pizza(string _codigo,string _sabor, string _tamanho, float _valor);

///@brief Obtém o código de identificação da pizza
///@return Código da pizza
    string getCodigo() const{
        return codigo;
    }

///@brief Obtém o sabor da pizza escolhida
///@return Sabor da pizza
    string getSabor() const{
        return sabor;
    }

///@brief Obtém o tamanho da pizza escolhida
///@return Tamanho da pizza
    string getTamanho() const{
        return tamanho;
    }

///@brief Obtém o valor da pizza escolhida
///@return Valor da pizza
    float getValor() const{
        return valor;
    }

///@Destrutor da classe Pizza
    ~Pizza(void);     //Destrutor 

};
#endif // PIZZA_H
