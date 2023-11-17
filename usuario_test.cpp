#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_SUPER_FAST_ASSERTS
#include "doctest.hpp"
#include "usuario.hpp"

TEST_CASE("Criando usario com set") {
  Usuario user({},{},{},{});
  user.setNome("samuel");
  user.setEndereco("Rua sara");
  user.setCpf(123456789);
  user.setTelefone(318976);

  CHECK_EQ(user.getCpf(), 123456789);
  CHECK_EQ(user.getNome(), "samuel");
  CHECK_EQ(user.getEndereco(), "Rua sara");
  // CHECK_EQ(user.getTelefone(), 318976);
}

TEST_CASE("Criando usario com o construtor") {
  Usuario user = Usuario("samuel", "sara", 123, 456);
  CHECK_EQ(user.getCpf(), 456);
  CHECK_EQ(user.getNome(), "samuel");
  CHECK_EQ(user.getEndereco(), "sara");
  CHECK_EQ(user.getTelefone(), 123);
}
