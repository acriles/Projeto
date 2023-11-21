#include <string>
#include <vector>
using namespace std;

#ifndef PIZZA_H
#define PIZZA_H


class Pizza{
private:
    string sabor;
    string tamanho;
    float valor; 
    vector <string> adicionais;

public:
    Pizza();     //Construtor 
    Pizza(string _sabor, string _tamanho, vector <string> _adicionais, float _valor);
    void setSabor(string _sabor);
    void setTamanho(float _valor);
    void setTamanho(string _tamanho);
    string getSabor();
    string getTamanho();
    float getValor();
    void addAdicional(string _adicional);
    void setAdicionais(vector <string> _adicionais); 
    void imprimePizza();
    void imprimeAdicionais();
    void inicializandoPizza();
    ~Pizza(void); //destrutor 
   
};

#endif
