#include <iostream>
#include "Principal.h"
#include "Universidade.h"
#include "Pessoa.h"

using namespace std;

Principal::Principal():
Simao(),
Einstein(),
Newton()
{
    Simao.inicializa(3, 10, 1976, "Jean Simao");
    Einstein.inicializa(14, 3, 1879, "Albert Einstein");
    Newton.inicializa(4, 1 , 1643, "Isaac Newton");

    UTFPR.setNome("UTFPR");
    Princeton.setNome("Princeton");
    Cambridge.setNome("Cambridge");

    Simao.setUniversidadeFiliado(&UTFPR); //associação a UTFPR é associada a Simao (associação entre objetos)
    Einstein.setUniversidadeFiliado(&Princeton);
    Newton.setUniversidadeFiliado(&Cambridge);

    //executar();
}

Principal::~Principal()
{

}
void Principal::executar()
{
    Simao.calcula_idade(2,3,2020);
    Einstein.calcula_idade(2,3,2020);
    Newton.calcula_idade(2,3,2020);

    Simao.OndeTrabalha();
    Einstein.OndeTrabalha();
    Newton.OndeTrabalha();
}
