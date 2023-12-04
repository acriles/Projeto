#include <string>
#include <vector>

using namespace std;

class Interface{
private:
    int cpf;

public:

///@brief Verifica se um usuário possui cadastro no sistema
    void PossuiCadastro();

///@brief Realiza o procedimento de login
    void Fazer_login();

};