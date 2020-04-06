#include <iostream>
#include <string.h>
#include <windows.h>
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
    CalcIdadeProfs ();
    CalcIdadeEstudantes ();
    UnivOndeProfsTrabalham ();
    UnivOndeEstuda();
    DepOndeProfsTrabalham ();
    ListeDiscDeptos ();
//    ConhecPessoa();
    ListaEstudanteDisc();

    menu();
}

void Principal::menu()
{
    int op = -1;

    while(op != 3)
    {
        system("cls");
        std::cout << "Informe sua opcao: " << std::endl;
        std::cout << "1 - Cadatrar." << std::endl;
        std::cout << "2 - Executar." << std::endl;
        std::cout << "3 - Sair." << std::endl;
        std::cin >> op;

        switch(op)
        {
        case 1:
            {
                menuCad();
            }
            break;
        case 2:
            {
                menuExu();
            }
            break;
        case 3:
            {
                std::cout << "Fim" << std::endl;
            }
            break;
        default:
            {
                std::cout << "Opcao invalida." << std::endl;
                system("Pause");
            }
        }
    }
}

void Principal::menuCad()
{
    int op = -1;

    while(op != 4)
    {
        system("cls");
        std::cout <<"Informe sua opcao:" << std::endl;
        std::cout <<"1 - Cadastrar Disciplina." <<std::endl;
        std::cout <<"2 - Cadastrar Departamento." <<std::endl;
        std::cout <<"3 - Cadastrar Universidade." <<std::endl;
        std::cout <<"4 - Sair." <<std::endl;
        std::cin >> op;

        switch(op)
        {
        case 1:
            {
                CadDisciplina();
            }
            break;
        case 2:
            {
                CadDepartamento();
            }
            break;
        case 3:
            {
                CadUniversidade();
            }
            break;
        case 4:
            {
                std::cout << "FIM" << std::endl;
            }
            break;
        default:
            {
                std::cout << "Opcao invalida." << std::endl;
                getchar();
            }
    }
}
}
void Principal::menuExu()
{
    int op = -1;

    while(op != 4)
    {
        system("cls");
        std::cout <<"Informe sua opcao:" << std::endl;
        std::cout <<"1 - Listar Disciplina." <<std::endl;
        std::cout <<"2 - Listar Departamento." <<std::endl;
        std::cout <<"3 - Listar Universidade." <<std::endl;
        std::cout <<"4 - Sair." <<std::endl;
        std::cin >> op;

        switch(op)
        {
        case 1:
            {
                LDisciplina.listeDisciplinas();
                fflush(stdin);
                getchar();
            }
            break;
        case 2:
            {
                LDepartamento.listeDepartamentos();
                fflush(stdin);
                getchar();
            }
            break;
        case 3:
            {
                LUniversidade.listeUniversidades();
                fflush(stdin);
                getchar();
            }
            break;
        case 4:
            {
                std::cout << "FIM" << std::endl;
            }
            break;
        default:
            {
                std::cout << "Opcao invalida." << std::endl;
                getchar();
            }
    }
}
}
void Principal::CadUniversidade()
{
    char nomeUniversidade[150];
    char nomeDepartamento[150];
    Universidade* pUniv;
    Departamento* pdepart;

    std::cout << "Qual o nome da universidade do departamento " << std::endl;
    std::cin >> nomeUniversidade;

    pUniv = LUniversidades.localizar(nomeUniversidade);

    if(pUniv != nullptr)
    {
        std::cout << "Qual o nome do departamento" << std::endl;
        std::cin >> nomeDepartamento;
        pdepart = new Departamento();
        pdepart->setNome(nomeDepartamento);
        pdepart->setUniversidade(pUniv);
        LDepartamentos.incluaDepartamento(pdepart);
    }
    else
    {
        std::cout << "Universidade inexistente." << std::endl;
    }
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
    MatematicaCambridge.incluaDisciplina(&Calculo);
    DAINF.incluaDisciplina(&ED1);
    FisicaPrinceton.incluaDisciplina(&Fisica);

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
    FisicaPrinceton.listeDisciplinas();
    MatematicaCambridge.listeDisciplinas();

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


