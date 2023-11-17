#include <string>
using namespace std;

class Usuario{
    private:
     string nome;
     string endereco;
     int telefone;
     int cpf;

    public:
     Usuario(); //construtor 
     Usuario(string _nome, string _endereco, int _telefone, int _cpf);
     void cadastroInicial();
     void setNome(string _nome);
     void setEndereco(string _endereco);
     string getEndereco();
     string getNome();
     void setTelefone(int _telefone);
     int getTelefone();
     void setCpf(int _cpf);
     void imprimeUsuario();
     void Fazer_login();
     void PossuiCadastro();
      ~Usuario(void); //destrutor 
   
};
