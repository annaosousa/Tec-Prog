#include <iostream>
#include "Principal.h"

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

    UTFPR.setNomeDpto(&DAINF);
    UTFPR.setNomeDpto(&DAELN);
    Princeton.setNomeDpto(&FisicaPrinceton);
    Cambridge.setNomeDpto(&MatematicaCambridge);

    Anna.setRA(215478);
	Sara.setRA(555622);
	Patrick.setRA(525156);

}

Principal::~Principal()
{

}

void Principal::executar()
{
    std::cout << "Idade dos professores:" << std::endl;
    Simao.calcula_idade(2,3,2020);
    Einstein.calcula_idade(2,3,2020);
    Newton.calcula_idade(2,3,2020);
    std::cout << std::endl;

    std::cout << "Idade dos alunos:" << std::endl;
    Anna.calcula_idade(2,3,2020);
    Sara.calcula_idade(2,3,2020);
    Patrick.calcula_idade(2,3,2020);
    std::cout << std::endl;

    std::cout << "Onde os professores trabalham:" << std::endl;
    Simao.OndeTrabalha();
    Einstein.OndeTrabalha();
    Newton.OndeTrabalha();
    std::cout << std::endl;

    std::cout << "E seus departamentos:" << std::endl;
    Simao.QualDepartamento();
    Einstein.QualDepartamento();
    Newton.QualDepartamento();
    std::cout << std::endl;

    std::cout << "Onde os alunos estudam:" << std::endl;
    Anna.OndeEstuda();
    Sara.OndeEstuda();
    Patrick.OndeEstuda();

}
