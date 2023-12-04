#include <string>
#include <vector>
#include "bebida.h"
#include "pizza.h"
using namespace std;
class Pedido{
private:
    vector <Bebida> bebidaPedido; 
    vector <Pizza> pizzaPedido;
public:
Pedido();
void InserirBebida(Bebida _bebida);
void InserirPizza(Pizza _pizza);

bool ExisteCodigo(string _codigo);
void RemoverPedido(string _codigo);

vector<Bebida> getBebidas();
vector<Pizza> getPizzas();
};
