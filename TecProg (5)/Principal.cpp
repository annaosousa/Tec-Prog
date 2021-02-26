#include <iostream>
#include "windows.h"
#include "Principal.h"

using namespace std;

Principal::Principal()
{
    SYSTEMTIME st;
    GetSystemTime(&st);

    diaAt = st.wMonth;
    mesAt = st.wDay;
    anoAt = st.wYear;

    Inicializa();
}

Principal::~Principal()
{

}

void Principal::executar()
{
    CalcIdadeProfs();
    UnivOndeProfsTrabalham();
    DepOndeProfsTrabalham();
    ConhecPessoa();
    ListeDiscDeptos();
    ListaEstudanteDisc();
    std::cout << std::endl;
}

void Principal::Inicializa()
{
    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaProfessores();
    InicializaEstudantes();
    InicializaDisciplinas();

    executar();
}

void Principal::InicializaUniversidades ( )
{
    //registro universidades
    UTFPR.setNome ("UTFPR");
    Princeton.setNome ("Universidade de Princeton");
    Cambridge.setNome ("Universidade de Cambridge");

}

void Principal::InicializaDepartamentos ( )
{
    //registro departamentos
    DAINF.setNome("Informatica");
    DAELN.setNome("Eletronica");
    FisicaPrinceton.setNome("Fisica/Priceton");
    MatematicaCambridge.setNome("Matematica/Cambridge");

    UTFPR.setNomeDpto(&DAINF);
    UTFPR.setNomeDpto(&DAELN);
    Princeton.setNomeDpto(&FisicaPrinceton);
    Cambridge.setNomeDpto(&MatematicaCambridge);
}

void Principal::InicializaProfessores ( )
{
    //inicializa objetos da classe Professor
    Simao.inicializa ( 3, 10, 1976, "Jean Simao");
    Einstein.inicializa ( 14, 3, 1879, "Albert Einstein");
    Newton.inicializa ( 4, 1, 1643, "Isaac Newton");

    //filiação
    Simao.setUniversidadeFiliado(&UTFPR);
    Einstein.setUniversidadeFiliado(&Princeton);
    Newton.setUniversidadeFiliado(&Cambridge);

    //filiação
    Simao.setDepartamento(&DAINF);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MatematicaCambridge);

}

void Principal::InicializaEstudantes()
{
    Anna.inicializa(22, 12, 1998, "Anna Caroline");
    Sara.inicializa(26, 06, 2005, "Sara");
    Patrick.inicializa(4, 1, 2000, "Patrick");

    Anna.setRA(215478);
	Sara.setRA(555622);
	Patrick.setRA(525156);
}

void Principal::InicializaDisciplinas ( )
{
    //registro de diciplinas
    Calculo.setNome("Calculo");
    Fisica.setNome("Fisica");
    Programacao.setNome("Programacao");

    //filiacao
   // DAINF.incluaDisciplina(&Programacao);
   // FisicaPrinceton.incluaDisciplina(&Fisica);
    //MatematicaCambridge.incluaDisciplina(&Calculo);

    Calculo.setDepartamento(&DAINF);
    Fisica.setDepartamento(&FisicaPrinceton);
    Calculo.setDepartamento(&MatematicaCambridge);

    Calculo.incluaEstudantes(&Anna);
    Calculo.incluaEstudantes(&Patrick);

    Fisica.incluaEstudantes(&Sara);
    Fisica.incluaEstudantes(&Anna);

    Programacao.incluaEstudantes(&Patrick);

}

void Principal::CalcIdadeProfs ( )
{
    std::cout << "Idade dos professores:" << std::endl;
    Simao.calcula_idade(diaAt, mesAt, anoAt);
    Einstein.calcula_idade(diaAt, mesAt, anoAt);
    Newton.calcula_idade(diaAt, mesAt, anoAt);
    std::cout << std::endl;
}

void Principal::UnivOndeProfsTrabalham ( )
{
    std::cout << "Onde os professores trabalham:" << std::endl;
    Simao.OndeTrabalha();
    Einstein.OndeTrabalha();
    Newton.OndeTrabalha();
    std::cout << std::endl;

}

void Principal::DepOndeProfsTrabalham ( )
{

    std::cout << "E seus departamentos:" << std::endl;
    Simao.QualDepartamento();
    Einstein.QualDepartamento();
    Newton.QualDepartamento();
    std::cout << std::endl;
}

void Principal::ConhecPessoa()
{
    std::cout << "Idade dos alunos:" << std::endl;
    Anna.calcula_idade(diaAt, mesAt, anoAt);
    Sara.calcula_idade(diaAt, mesAt, anoAt);
    Patrick.calcula_idade(diaAt, mesAt, anoAt);
    std::cout << std::endl;
}

void Principal::ListeDiscDeptos ( )
{
    DAINF.listeDisciplinas();
    FisicaPrinceton.listeDisciplinas();
    MatematicaCambridge.listeDisciplinas();
}

void Principal::ListaEstudanteDisc()
{
    std::cout << std::endl;
    Fisica.listeEstudantes();
    std::cout << std::endl;

    Programacao.listeEstudantes();
    std::cout << std::endl;

    Calculo.listeEstudantes();
    std::cout << std::endl;
}
