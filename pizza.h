#include <string>
#include <vector>
using namespace std;

#ifndef PIZZA_H
#define PIZZA_H


class Pizza{
private:
    string sabor;
    int tamanho;
    float valor; 
    vector <string> adicionais;

public:
    Pizza();     //Construtor
    Pizza(string _sabor, int _tamanho, vector<string> _adicionais, float _valor);
    void setSabor(string _sabor);
    void setTamanho(int _tamanho);
    string getSabor();
    int getTamanho();
    float getValor();
    void addAdicional(string _adicional);
    void setAdicionais(vector <string> _adicionais); 
    void imprimePizza();
    void imprimeAdicionais();
    void inicializandoPizza();
    void calculaPreco();
    ~Pizza(void); //destrutor 
   
};

#endif
