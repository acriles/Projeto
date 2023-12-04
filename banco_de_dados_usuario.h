#include <string>
#include <vector>

using namespace std;

class Data_base{
private:
    string nome;
    string endereco;
    int telefone;
    int cpf;


public:

///@brief Insere um usuário no banco de dados
///@param _nome Nome do usuário a ser inserido
///@param _endereco Endereço do usuário a ser inserido
///@param _telefone Número de telefone do usuário a ser inserido
///@param _cpf CPF do usuário a ser inserido
///@return true se a inserção for bem-sucedida, false caso contrário
    bool inserir_usuario(string _nome, string _endereco, int _telefone, int _cpf);

 ///@brief Lê o banco de dados para obter informações de um usuário com base no CPF
///@param _cpf CPF do usuário a ser consultado no banco de dados
///@param name Variável de referência para armazenar o nome do usuário encontrado
///@return true se o usuário com o CPF especificado for encontrado, false caso contrário
    bool ler_banco_de_dados(int& _cpf, string& name); 

};
