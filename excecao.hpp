#ifndef EXCECAO_HPP
#define EXCECAO_HPP
#include <stdexcept>
#include <iostream>
class CodigoInvalido : public std::exception{
private:
  std::string opcao;
  std::string mensagem;
public:
CodigoInvalido(std::string t){
  opcao = t;
  mensagem = "A opção escolhida não existe.\nDigite uma Codigo valida:\n";
}
  const char* what() const throw() override{
    return mensagem.c_str();
  }
};
#endif
