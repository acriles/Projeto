#ifndef EXCECAO_HPP
#define EXCECAO_HPP
#include <stdexcept>
#include <iostream>
class CodigoInvalido : public std::exception{
private:
  std::string codigo;
  std::string mensagem;
public:
CodigoInvalido(std::string t){
  codigo = t;
  mensagem = "A opção escolhida não existe.\nDigite um Codigo valido, ou digite 0 para voltar ao menu inicial:\n";
}
  const char* what() const throw() override{
    return mensagem.c_str();
  }
};
class OpcaoInvalido : public std::exception{
private:
  string opcao;
  std::string mensagem;
public:
OpcaoInvalido(string t){
  opcao = t;
  mensagem = "A opção escolhida não existe.\nDigite uma das opçoes abaixo:\n";
}
  const char* what() const throw() override{
    return mensagem.c_str();
  }
};
#endif
