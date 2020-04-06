#include <iostream>
#include <windows.h>
#include "Principal.h"
//#include "Departamento.h"
//#include "Universidade.h"
//#include "Estudante.h"
#include "Disciplina.h"

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
    CalcIdadeEstudantes();
    UnivOndeProfsTrabalham();
    UnivOndeEstuda();
    DepOndeProfsTrabalham();
    ListeDiscDeptos();
//    ConhecPessoa();
    ListaEstudanteDisc();

}

void Principal::Inicializa()
{
    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaProfessores();
    InicializaDisciplinas();
    InicializaEstudantes();

    executar();
}

void Principal::InicializaUniversidades()
{
    UTFPR.setNome ("UTFPR");
    Princeton.setNome ("Universidade de Princeton");
    Cambridge.setNome ("Universidade de Cambridge");

}

void Principal::InicializaDepartamentos()
{
    DAINF.setNome("Informatica");
    DAELN.setNome("Eletronica");
    FisicaPrinceton.setNome("Fisica/Priceton");
    MatematicaCambridge.setNome("Matematica/Cambridge");


    UTFPR.setNomeDpto(&DAINF,0);
    UTFPR.setNomeDpto(&DAELN,1);
    Princeton.setNomeDpto(&FisicaPrinceton,0);
    Cambridge.setNomeDpto(&MatematicaCambridge,0);


}

void Principal::InicializaProfessores()
{
    Simao.inicializa ( 3, 10, 1976, "Jean Simao");
    Einstein.inicializa ( 14, 3, 1879, "Albert Einstein");
    Newton.inicializa ( 4, 1, 1643, "Isaac Newton");

    Simao.setUniversidadeFiliado(&UTFPR);
    Einstein.setUniversidadeFiliado(&Princeton);
    Newton.setUniversidadeFiliado(&Cambridge);

    Simao.setDepartamento(&DAINF);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MatematicaCambridge);

}

void Principal::InicializaDisciplinas()
{
    TecProg.setNome("Tecnicas de Programacao");
    Calculo.setNome("Calculo");
    ED1.setNome("Estrutura de dados");
    Fisica.setNome("Fisica");


    DAINF.incluaDisciplina(&TecProg);
    DAINF.incluaDisciplina(&Calculo);
    DAINF.incluaDisciplina(&ED1);
    DAINF.incluaDisciplina(&Fisica);

    //TecProg.setDepartamento(&DAINF);
    //Calculo.setDepartamento(&DAINF);
    //ED1.setDepartamento(&DAINF);
    //Fisica.setDepartamento(&DAINF);

    //TecProg.incluaEstudante(&Anna);
    //TecProg.incluaEstudante(&Sara);
    //TecProg.incluaEstudante(&Patrick);

}

void Principal::CalcIdadeProfs()
{
    Simao.calcula_idade(diaAt,mesAt,anoAt);
    Einstein.calcula_idade(diaAt,mesAt,anoAt);
    Newton.calcula_idade(diaAt,mesAt,anoAt);

    std::cout << std::endl;
}

void Principal::UnivOndeProfsTrabalham()
{
    Simao.OndeTrabalha();
    Einstein.OndeTrabalha();
    Newton.OndeTrabalha();

    std::cout << std::endl;
}

void Principal::DepOndeProfsTrabalham()
{
    std::cout << std::endl;

    Simao.QualDepartamento();
    Einstein.QualDepartamento();
    Newton.QualDepartamento();

    std::cout << std::endl;
}

void Principal::ListeDiscDeptos()
{
    DAINF.listeDisciplinas();
   // FisicaPrinceton.listeDisciplinas();

    std::cout << std::endl;
}

void Principal::InicializaEstudantes()
{
    Anna.inicializa(22, 12, 1998, "Anna Caroline");
    Sara.inicializa(26, 06, 2005, "Sara");
    Patrick.inicializa(4, 1, 2000, "Patrick");

    Anna.setUniversidadeFiliado(&UTFPR);
    Sara.setUniversidadeFiliado(&Cambridge);
    Patrick.setUniversidadeFiliado(&Princeton);

    Anna.setRA(215478);
	Sara.setRA(555622);
	Patrick.setRA(525156);

}

void Principal::CalcIdadeEstudantes()
{
    Anna.calcula_idade(diaAt,mesAt, anoAt);
    Sara.calcula_idade(diaAt,mesAt, anoAt);
    Patrick.calcula_idade(diaAt,mesAt,anoAt);

    std::cout << std::endl;

}

void Principal::UnivOndeEstuda()
{
    Anna.OndeEstuda();
    Sara.OndeEstuda();
    Patrick.OndeEstuda();
}

void Principal::ListaEstudanteDisc()
{
    TecProg.listeEstudante();
    std::cout << endl;

    TecProg.listeEstudante2();
    std::cout << endl;

}
