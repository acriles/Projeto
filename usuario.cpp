#include <iostream>
#include "usuario.h"
#include "cardapio.h"
#include "pedido.h"

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>

using namespace std;
Usuario::Usuario(string _nome, string _endereco, int _telefone, int _cpf, vector<int> _cpfs) {
  cpf = _cpf;
  nome = _nome;
  endereco = _endereco;
  telefone = _telefone;
  cpfs = _cpfs;
  // inicializa a classe com campos vazios
}
Usuario::~Usuario(void){ 
  nome.clear();
  endereco.clear();
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
  cout << "Digite seu nome" << endl;
  cin >> nome;
  cout << "Insira agora seu telefone" << endl;
  cin >> telefone;
  cout << "Por ultimo, insira seu CPF" << endl;
  cin >> cpf;
  confirmar_Usuario();
}

void Usuario::confirmar_Usuario(){
  int confimar_dados;
  int confirmacaoPedido;

  cout << "Confirmando seus dados: "<< endl 
<< "Nome:" <<  nome << endl << "Telefone:" << telefone << endl << "Cpf:" << cpf << endl;

  cout << "Digite 1 para confirmar o cadastro e 2 para cancelar.\n\n";

  int cpf_analise = cpf;
  cin >> confimar_dados;
  
  if (confimar_dados  == 1){
    ler_banco_de_dados();
    for (int cpf : cpfs) {
        if (cpf == cpf_analise){
          cout << "CPF já está cadastrado.\n";
          cout << "Reiniciando o cadastro:" << endl;
          cadastroInicial();
        }
        }

    inserir_usuario();
    cout << "Cadastro realizado com sucesso!Caso queira prosseguir com o pedido, digite 1, caso contrário digite 2.\n\n";
    cin >> confirmacaoPedido; 

    if (confirmacaoPedido==1){
      cout << "Prosseguindo com pedido" <<endl;
      return;
    
    } else {
      cout << "Ficamos aguardando por você!" <<endl;
    }
  }
  
  
  else if (confimar_dados  == 2){
    cout << "Iniciando Login!" <<endl;
    Fazer_login();
  
  }else{
      cout << "Você digitou:"<< confimar_dados <<endl;
      confirmar_Usuario();
  }
  }

void Usuario::PossuiCadastro() {
  unsigned cadastro = 0;
  cout << "Possui cadastro?" << endl
  << "se sim digite 1, se nao digite 0" << endl;
  cin >> cadastro;
  
  if (cadastro == 1) {
     Fazer_login();
     return;
  } else
    cout << "Iniciando o cadastro:" << endl;

    cadastroInicial();
}
void Usuario::Fazer_login() {
  int cpf_l;
  int confirmacaoPedido;
  bool continuarLogin = true;
  bool sucesso_login = false;
  cout << "Digite seu CPF: ";
  cin >> cpf_l;
  ler_banco_de_dados();
  while (continuarLogin) {
    for (int cpf : cpfs) {

      if (cpf_l == cpf) {
        cout << "Parabéns o login foi realizado com sucesso! Caso queira prosseguir com o pedido, digite 1, caso contrário digite 2.\n\n";
        cin >> confirmacaoPedido;
        sucesso_login = true;
        if (confirmacaoPedido == 1) { 
          cout << "Prosseguindo com pedido" << endl;
          continuarLogin = false;
          Pedido pedido;
          pedido.inicializar_cardapio();
        } 
        else if (confirmacaoPedido == 2) {
           cout << "Ficamos aguardando por você!" << endl;
        }
       }
      }
    if (continuarLogin && sucesso_login == false) {
      cout << "Cpf incorreto, tente novamente.\n\n";
      Fazer_login();
        }
   }


    }



void Usuario::inserir_usuario() {
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;

    string connectionString = "tcp://roundhouse.proxy.rlwy.net:38644";
    string username = "root";
    string password = "acA5dg3CAF4CBe25-FGc3Hgffga5C3Ge";
    string database = "railway";

    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect(connectionString, username, password);

    con->setSchema(database);

    sql::Statement *stmt = con->createStatement();

    string query = "INSERT INTO usuario (cpf, name, telefone, endereco) VALUES (" + to_string(cpf) + ", '" + nome + "', " + to_string(telefone) + ", '" + endereco + "')";

    stmt->execute(query);

    delete stmt;
    delete con;

}


void Usuario::ler_banco_de_dados() {
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;

    string connectionString = "tcp://roundhouse.proxy.rlwy.net:38644";
    string username = "root";
    string password = "acA5dg3CAF4CBe25-FGc3Hgffga5C3Ge";
    string database = "railway";

    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect(connectionString, username, password);

    con->setSchema(database);

    sql::Statement *stmt = con->createStatement();
    sql::ResultSet *res;

    string query = "SELECT * FROM usuario";

    res = stmt->executeQuery(query);

    while (res->next()) {
        int cpf_analise = res->getInt("cpf");
        string nome_analise = res->getString("name");
        int telefone_analise = res->getInt("telefone");
        string endereco_analise = res->getString("endereco");
        cpfs.push_back(cpf_analise);

    }

    delete res;
    delete stmt;
    delete con;
    }
