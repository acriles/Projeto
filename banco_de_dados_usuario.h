#include <string>
using namespace std;
#include <vector>

class Data_base{
    private:
     string nome;
     string endereco;
     int telefone;
     int cpf;


    public:
     bool inserir_usuario(string _nome, string _endereco, int _telefone, int _cpf);
     bool ler_banco_de_dados(int& _cpf, string& name); 
};
