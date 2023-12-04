#include <string>
#include <vector>
#include "bebida.h"
using namespace std;
class Pedido{
private:
    vector <Bebida> bebidaPedido; 
public:
Pedido();
void InserirBebida(Bebida _bebida);
bool ExisteBebida(string _codigo);
void RemoverBebida(string _codigo);
vector<Bebida> getBebidas();
};
