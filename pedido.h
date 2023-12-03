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

vector<Bebida> getBebidas();
};
