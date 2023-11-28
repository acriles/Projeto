#include <string>
#include <vector>
using namespace std;

#ifndef PIZZA_H
#define PIZZA_H

class Pizza{
private:
     string sabor;                         // Sabor da pizza
     string tamanho;                      // Tamanho da pizza
     float valor;                        // Valor da pizza
     vector <string> adicionais;        // Vetor de adicionais da pizza
     string codigo;                    // Codigo de identificacao da pizza

public:
///@brief Construtor da classe Pizza
     Pizza(); 

///@brief Construtor que inicializa os membros da classe
///@param _codigo Codigo de identificacao da pizza
     Pizza(string _codigo,string _sabor, string _tamanho, vector <string> _adicionais, float _valor);
     string getCodigo() const {
        return codigo;
    }
    string getSabor() const {
        return sabor;
    }
    string getTamanho() const {
        return tamanho;
    }
    float getValor() const {
    return valor;
    }
    vector <string> getAdicionais() const {
        return adicionais;
    }

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
#endif // PIZZA_H
