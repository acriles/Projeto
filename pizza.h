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
     vector <string> adicionais;  //lista de adicionais de pizza
     string codigo;              // codigo de identificacao da pizza

public:

//@brief Construtor da classe Pizza
     Pizza(); 

///@brief Inicializa os membros da classe
///@param _codigo Codigo utilizado para identificar cada pizza
///@param _sabor Sabor da pizza
///@param _tamanho Tamanho da pizza
///@param _adicionais Vetor que contempla os adicionais da pizza
///@param _ valor Valor da pizza
     Pizza(string _codigo,string _sabor, string _tamanho, vector <string> _adicionais, float _valor);

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

///@brief Obtem o vetor com os adicionais da pizza
///@return Vetor de adicionais da pizza
    vector <string> getAdicionais() const {
        return adicionais;
    }



///@brief Define o sabor da pizza
///@param _sabor Novo sabor de pizza
    void setSabor(string _sabor);

///@brief Define o valor da pizza
///@param _valor Novo valor de pizza
    void setValor(float _valor);

///@brief Define o tamanho da pizza
///@param _tamanho Novo tamanho de pizza
    void setTamanho(string _tamanho);

///@brief Inclui um adicional à lista de adicionais da pizza
///@param _sabor Novo adicional 
    void addAdicional(string _adicional); 

///@brief Define a lista de adicionais da pizza
///@param _sabor Nova lista de adicionais
	void setAdicionais(vector <string> _adicionais); 
	
///@brief Imprime as informações da pizza
    void imprimePizza();

///@brief Imprime o vetor de adicionais da pizza
	 void imprimeAdicionais();

///@brief Inicializa os membros da pizza
    void inicializandoPizza();


///@Destrutor da classe Pizza
      ~Pizza(void); //destrutor 
   
};
#endif // PIZZA_H
