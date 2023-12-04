#include <string>
#include <vector>

using namespace std;

class Usuario{
private:
    string nome;        //Nome do usuario
    string endereco;   //Endereço do usuario
    int telefone;     //Telefone do usuario
    int cpf;         //CPF do usuario


public:
///@brief Construtor da classe Usuario
     Usuario(); 

///@brief Inicializa os membros da classe
///@param _nome Nome do usuario
///@param _endereco Endereço do usuario
///@param _telefone Telefone do usuario
///@param _cpf CPF do usuario
///@param _cpfs Vetor de CPFs cadastrados
     Usuario(string _nome, string _endereco, int _telefone, int _cpf);

///@brief Realiza o cadastro do usuario
     void cadastroInicial(int& cpf1);

///@brief Define o nome do usuario
///@param _nome Nome do usuario
     void setNome(string _nome);

///@brief Define o enderço do usuario
///@param _endereco Endereço do usuario
     void setEndereco(string _endereco);

///@brief Define o numero de telefone do usuario
///@param _telefone Telefone do usuario
     void setTelefone(int _telefone);

///@brief Define o numero de CPF do usuario
///@param _cpf CPF do usuario
     void setCpf(int _cpf);

///@brief Obtem o enderço do usuario
///@return Endereco do usuario
     string getEndereco();

///@brief Obtem o nome do usuario
///@return Nome do usuario
     string getNome();

///@brief Obtem o numero de telefone do usuario
///@return Numero de telefone do usuario
     int getTelefone();

///@brief Confirma o cadastro do usuario
     void confirmar_Usuario(int& cpf1);

///@brief Insere o usuario cadastrado no banco de dados
     void inserir_usuario();

     void cadastrado();


///@brief Destrutor da classe Usuario
      ~Usuario(void); //destrutor 

};
