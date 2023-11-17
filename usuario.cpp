 #include <iostream>
 #include "usuario.h"

using namespace std;
 
 Usuario::Usuario(string _nome, string _endereco, int _telefone, int _cpf) {
  cpf = _cpf;
  nome = _nome;
  endereco = _endereco;
  telefone = _telefone;

  // inicializa a classe com campos vazios
}


    Usuario::~Usuario(void){ 
      nome.clear();
     endereço.clear();
      cout << "Classe destruida" << endl;
    }

     void Usuario::setNome(string _nome){
        nome = _nome;
     }

     string Usuario::getNome(){
      return nome;
     }

     void Usuario::setTelefone(int _telefone){
      telefone = _telefone;
     }

     void Usuario::setCpf(int _cpf){
      cpf = _cpf;
     }

     void Usuario::setEndereco(string _endereco){
      endereco = _endereco;
     }

     string Usuario::getEndereco(){
      return endereco;
     }
    int Usuario::getTelefone(){
     return telefone;
    }
      void Usuario::cadastroInicial(){
         int confirmacaoPedido;
       cout << "Iniciando o cadastro... Digite seu nome" << endl;
       cin >> nome;
       cout << "Insira agora seu telefone" << endl;
       cin >> telefone;
       cout << "Por ultimo, insira seu cpf" << endl;
       cin >> cpf;
        cout << "Cadastro realizado com sucesso!Caso queira prosseguir com o pedido, digite 1, caso contrário digite 2" <<endl;
        cin >> confirmacaoPedido;
       if (confirmacaoPedido==1){
         cout << "Prosseguindo com pedido" <<endl;
       } else {
         cout << "Ficamos aguardando por você!" <<endl;
       }
     }

     void Usuario::imprimeUsuario(){
      cout << "Confirmando seus dados:" << endl 
      << "Nome:" <<  nome << endl << "Telefone:" << telefone << endl << "Cpf:" << cpf << endl;
     }
void Usuario::PossuiCadastro() {
  unsigned cadastro = 0;
  cout << "Possui cadastro?" << endl
       << "se sim digite 1, se nao digite 0" << endl;
  cin >> cadastro;
  if (cadastro == 1) {
     Fazer_login();
  } else
    cadastroInicial();
}
void Usuario::Fazer_login() {
  int cpf_l;
  cout << "Insara seu cpf" << endl;
  cin >> cpf_l;
  if (cpf_l == cpf)
    cout << "Login realizado com sucesso" << endl;
  else
    cout << "Cpf incorreto, tente novamente" << endl;
}
