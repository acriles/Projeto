#include <string>
#include <vector>

using namespace std;

///@brief Classe que representa um banco de dados de usuários.
class Data_base{
    private:
     string nome;
     string endereco;
     int telefone;
     int cpf;


    public:

///@brief Método para inserir um novo usuário no banco de dados.
///@param _nome Nome do usuário a ser inserido.
///@param _endereco Endereço do usuário a ser inserido.
///@param _telefone Número de telefone do usuário a ser inserido.
///@param _cpf CPF do usuário a ser inserido.
///@return Retorna true se a operação de inserção for bem-sucedida, false caso contrário.
     bool inserir_usuario(string _nome, string _endereco, int _telefone, int _cpf);

///@brief Método para ler informações de um usuário no banco de dados com base no CPF.
///@param _cpf CPF do usuário cujas informações se deseja ler.
///@param name Referência para armazenar o nome do usuário encontrado.
///@return Retorna true se as informações do usuário forem encontradas, false caso contrário.
     bool ler_banco_de_dados(int& _cpf, string& name); 
};
