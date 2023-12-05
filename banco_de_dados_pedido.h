#include <string>
#include <vector>

using namespace std;

///@brief Classe que representa um banco de dados para pedidos.
class Data_base_Pedido{
    private:
     string infoPizza;
     int cpf;


    public:
///@brief Método para inserir novos pedidos no banco de dados.
///@param _cpf CPF do cliente que está fazendo o pedido.
///@param infoPizza Informações sobre a pizza que está sendo pedida.
///@param infoBebida Informações sobre a bebida que está sendo pedida.
     void inserir_pedidos(int _cpf, string infoPizza, string infoBebida);

///@brief Método para ler informações sobre pedidos existentes no banco de dados.
///@param _cpf Referência para o CPF do cliente cujo pedido se deseja ler.
///@param tipo Tipo de informação que se deseja ler sobre o pedido.
     void ler_pedido(int& _cpf, int tipo); 
};
