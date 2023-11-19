#include <string>
using namespace std;
#include <vector>

class Usuario{
    private:
     string nome;
     string endereco;
     int telefone;
     int cpf;
     vector<int> cpfs;


    public:
     Usuario(); //construtor 
     Usuario(string _nome, string _endereco, int _telefone, int _cpf,vector<int> _cpfs);
     void cadastroInicial();
     void setNome(string _nome);
     void setEndereco(string _endereco);
     string getEndereco();
     string getNome();
     void setTelefone(int _telefone);
     int getTelefone();
     void setCpf(int _cpf);
     void confirmar_Usuario();
     void Fazer_login();
     void PossuiCadastro();
      ~Usuario(void); //destrutor 
     void inserir_usuario();
     void ler_banco_de_dados(); 
};
