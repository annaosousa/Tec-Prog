#include <iostream>
#include "Principal.h"
#include "Departamento.h"
#include "Universidade.h"

using namespace std;

Principal::Principal()
{
    Simao.inicializa ( 3, 10, 1976, "Jean Simao");
    Einstein.inicializa ( 14, 3, 1879, "Albert Einstein");
    Newton.inicializa ( 4, 1, 1643, "Isaac Newton");

    UTFPR.setNome ("UTFPR");
    Princeton.setNome ("Universidade de Princeton");
    Cambridge.setNome ("Universidade de Cambridge");

    Simao.setUniversidadeFiliado(&UTFPR);
    Einstein.setUniversidadeFiliado(&Princeton);
    Newton.setUniversidadeFiliado(&Cambridge);

    Simao.setDepartamento(&DAINF);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MatematicaCambridge);

    DAINF.setNome("Informatica");
    DAELN.setNome("Eletronica");
    FisicaPrinceton.setNome("Fisica/Priceton");
    MatematicaCambridge.setNome("Matematica/Cambridge");

    UTFPR.setNomeDpto(&DAINF,0);
    UTFPR.setNomeDpto(&DAELN,1);
    Princeton.setNomeDpto(&FisicaPrinceton,0);
    Cambridge.setNomeDpto(&MatematicaCambridge,0);
}

Principal::~Principal()
{

}

void Principal::executar()
{
    Simao.calcula_idade(2,3,2020);
    Einstein.calcula_idade(2,3,2020);
    Newton.calcula_idade(2,3,2020);

    Simao.informaIdade();
    Einstein.informaIdade();
    Newton.informaIdade();

    Simao.OndeTrabalha();
    Einstein.OndeTrabalha();
    Newton.OndeTrabalha();

    Simao.QualDepartamento();
    Einstein.QualDepartamento();
    Newton.QualDepartamento();

}
