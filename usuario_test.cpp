#include <iostream> 
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_SUPER_FAST_ASSERTS
#include "doctest.hpp"
#include "usuario.h"

using namespace std; 

TEST_CASE("Verificando CPF"){
    Usuario user({},{},{},{});
    user.setCpf(149);
    CHECK_EQ(user.getCpf(),149);
}

TEST_CASE("Verificando telefone"){
    Usuario user({},{},{},{});
    user.setTelefone(19);
    CHECK_EQ(user.getTelefone(),19);
}


