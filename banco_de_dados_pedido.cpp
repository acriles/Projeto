#include "banco_de_dados_pedido.h"

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>

void Data_base_Pedido:: inserir_pedidos(int cpf, string infoPizza, string infoBebida) {
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;

    string connectionString = "tcp://roundhouse.proxy.rlwy.net:38644";
    string username = "root";
    string password = "acA5dg3CAF4CBe25-FGc3Hgffga5C3Ge";
    string database = "railway";

    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect(connectionString, username, password);

    con->setSchema(database);

    sql::Statement *stmt = con->createStatement();
    string query = "INSERT INTO pedido (cp, infoPizza,infoBebida) VALUES (" + to_string(cpf) + ", '" + infoPizza + "', '" + infoBebida + "')";


    stmt->execute(query);


    delete stmt;
    delete con;
}




void Data_base_Pedido::ler_pedido(int& _cpf, int tipo) {
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;

    string connectionString = "tcp://roundhouse.proxy.rlwy.net:38644";
    string username = "root";
    string password = "acA5dg3CAF4CBe25-FGc3Hgffga5C3Ge";
    string database = "railway";

    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect(connectionString, username, password);

    con->setSchema(database);

    sql::Statement *stmt = con->createStatement();
    sql::ResultSet *res;

    string query = "SELECT * FROM pedido";
    res = stmt->executeQuery(query);

    while (res->next()) {
        int cpf_analise = res->getInt("cp");
        if (_cpf == cpf_analise && tipo == 1){
            string pizza = res->getString("infoPizza");
            
            cout << pizza<<endl;
        }
        if (_cpf == cpf_analise && tipo == 2){
            string bebida = res->getString("infoBebida");
            

            cout << bebida<< endl;
        }
    }

    delete res;
    delete stmt;
    delete con;

}
