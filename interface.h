#include <string>
#include <vector>

using namespace std;

class Interface{
private:
    int cpf;

public:

///@brief Verifica se um usuário possui cadastro no sistema
    void PossuiCadastro(int& cpf);

///@brief Realiza o procedimento de login
    void Fazer_login(int& cpf);

};
