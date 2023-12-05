#include <stdexcept>
#include <iostream>

#ifndef EXCECAO_HPP
#define EXCECAO_HPP

///@brief Classe de exceção para lidar com codigos invalidos referentes ao MenuPedido
///  Exceção lançada quando são dadas as opções no MenuPedido e é feita uma escolha fora
///  das opções fornecidas
class CodigoInvalido:public std::exception
{
private:
  std::string codigo;           //codigo da opção
  std::string mensagem;         //mensagem de erro    

public:

///@brief Construtor para CodigoInvalido
///@param t O codigo invalido que desencadeou a exceção
  CodigoInvalido(std::string t){
  codigo = t;
  mensagem = "A opção escolhida não existe.\nDigite um Codigo valido, ou digite 0 para voltar ao menu inicial:\n";
}

///@brief Fornece a mensagem de erro
///@return Uma string no estilo C contendo a mensagem de erro
  const char* what() const throw() override{
    return mensagem.c_str();
  }
};


///@brief Classe de exceção para lidar com opção inválida referentes ao MenuPedido
///  Exceção lançada quando são dadas as opções no MenuPedido e é feita uma escolha fora
///  das opções fornecidas
class OpcaoInvalido : public std::exception
{
private:
  string opcao;       //opcao invalida que desencadeou a exceção
  std::string mensagem;   //mensagem de erro associada à exceção

public:
///@brief Construtor para CodigoInvalido
///@param t A opcao invalida que desencadeou 
OpcaoInvalido(string t){
  opcao = t;
  mensagem = "A opção escolhida não existe.\nDigite uma das opçoes abaixo:\n";
}

///@brief Fornece a mensagem de erro
///@return Uma string no estilo C contendo a mensagem de erro
  const char* what() const throw() override{
    return mensagem.c_str();
  }
};
#endif
