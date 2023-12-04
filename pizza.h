#include <string>
#include <vector>
using namespace std;

#ifndef PIZZA_H
#define PIZZA_H


class Pizza{
private:
     string sabor;                   //sabor da pizza
     string tamanho;                //tamanho da pizza
     float valor;                  //valor da pizza
     string codigo;              // codigo de identificacao da pizza


public:

///@brief Inicializa os membros da classe
///@param _codigo Codigo utilizado para identificar cada pizza
///@param _sabor Sabor da pizza
///@param _tamanho Tamanho da pizza
///@param _adicionais Vetor que contempla os adicionais da pizza
///@param _ valor Valor da pizza
     Pizza(string _codigo,string _sabor, string _tamanho, float _valor);

///@brief Obtem o codigo de identificacao da pizza
///@return Codigo da pizza
     string getCodigo() const{
        return codigo;
    }

///@brief Obtem o sabor da pizza escolhida
///@return Sabor da pizza
    string getSabor() const {
        return sabor;
    }

///@brief Obtem o tamanho da pizza escolhida
///@return Tamanho da pizza
    string getTamanho() const {
        return tamanho;
    }

///@brief Obtem o valor da pizza escolhida
///@return Valor da pizza
    float getValor() const {
    return valor;
    }

///@Destrutor da classe Pizza
      ~Pizza(void); //destrutor 

};
#endif // PIZZA_H
