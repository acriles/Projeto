#include "banco__de_dados.h"

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>

bool Data_base:: inserir_usuario(string nome, string endereco, int telefone, int cpf) {
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

    string query = "INSERT INTO usuario (cpf, name, telefone, endereco) VALUES (" + to_string(cpf) + ", '" + nome + "', " + to_string(telefone) + ", '" + endereco + "')";

    stmt->execute(query);


    delete stmt;
    delete con;
    return true;
}




bool Data_base::ler_banco_de_dados(int& _cpf, string& name) {
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

    string query = "SELECT * FROM usuario";

    res = stmt->executeQuery(query);

    while (res->next()) {
        int cpf_analise = res->getInt("cpf");
        if (_cpf == cpf_analise){
            name = res->getString("name");
            _cpf = cpf_analise;
            return true;
        }
    }

    delete res;
    delete stmt;
    delete con;
    return false;

}