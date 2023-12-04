#include <string>
using namespace std;
#include <vector>

class Data_base_Pedido{
    private:
     string infoPizza;
     int cpf;


    public:
     void inserir_pedidos(int _cpf, string infoPizza, string infoBebida);
     void ler_pedido(int& _cpf, int tipo); 
};
