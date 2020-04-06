#include <iostream>
#include "Principal.h"
#include "Departamento.h"
#include "Universidade.h"
#include "Estudante.h"

using namespace std;

Principal::Principal()
{
    Simao.inicializa ( 3, 10, 1976, "Jean Simao");
    Einstein.inicializa ( 14, 3, 1879, "Albert Einstein");
    Newton.inicializa ( 4, 1, 1643, "Isaac Newton");

    Anna.inicializa(22, 12, 1998, "Anna Caroline");
    Sara.inicializa(26, 06, 2005, "Sara");
    Patrick.inicializa(4, 1, 2000, "Patrick");

    UTFPR.setNome ("UTFPR");
    Princeton.setNome ("Universidade de Princeton");
    Cambridge.setNome ("Universidade de Cambridge");

    Simao.setUniversidadeFiliado(&UTFPR);
    Einstein.setUniversidadeFiliado(&Princeton);
    Newton.setUniversidadeFiliado(&Cambridge);

    Anna.setUniversidadeFiliado(&UTFPR);
    Sara.setUniversidadeFiliado(&Cambridge);
    Patrick.setUniversidadeFiliado(&Princeton);

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

    Anna.setRA(215478);
	Sara.setRA(555622);
	Patrick.setRA(525156);

}

Principal::~Principal()
{

}

void Principal::executar()
{
    Simao.calcula_idade(2,3,2020);
    Einstein.calcula_idade(2,3,2020);
    Newton.calcula_idade(2,3,2020);

    Anna.calcula_idade(2,3,2020);
    Sara.calcula_idade(2,3,2020);
    Patrick.calcula_idade(2,3,2020);


    Simao.OndeTrabalha();
    Einstein.OndeTrabalha();
    Newton.OndeTrabalha();

    Anna.OndeEstuda();
    Sara.OndeEstuda();
    Patrick.OndeEstuda();

    Simao.QualDepartamento();
    Einstein.QualDepartamento();
    Newton.QualDepartamento();

}
