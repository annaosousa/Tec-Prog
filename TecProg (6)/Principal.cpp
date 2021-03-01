#include <iostream>
#include <stdio.h>

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
    //CalcIdadeProfs();
    //UnivOndeProfsTrabalham();
    //DepOndeProfsTrabalham();
    //ConhecPessoa();
    //ListeDiscDeptos();
    ///ListaEstudanteDisc();

    Menu();
    std::cout << std::endl;
}

void Principal::Inicializa()
{
    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaProfessores();
    InicializaEstudantes();
    InicializaDisciplinas();

   // executar();
}

void Principal::InicializaUniversidades ( )
{
    //registro universidades
    UTFPR.setNome ("UTFPR");
    LUniversidades.incluaUniversidade(&UTFPR);

    Princeton.setNome ("Universidade de Princeton");
    LUniversidades.incluaUniversidade(&Princeton);

    Cambridge.setNome ("Universidade de Cambridge");
    LUniversidades.incluaUniversidade(&Cambridge);

}

void Principal::InicializaDepartamentos ( )
{
    //registro departamentos
    DAINF.setNome("Informatica");
    DAELN.setNome("Eletronica");
    FisicaPrinceton.setNome("Fisica/Priceton");
    MatematicaCambridge.setNome("Matematica/Cambridge");

    LDepartamentos.incluaDepartamentos(&DAINF);
    LDepartamentos.incluaDepartamentos(&DAELN);
    LDepartamentos.incluaDepartamentos(&FisicaPrinceton);
    LDepartamentos.incluaDepartamentos(&MatematicaCambridge);

    UTFPR.incluaDepartamentos(&DAINF);
    UTFPR.incluaDepartamentos(&DAELN);
    Princeton.incluaDepartamentos(&FisicaPrinceton);
    Cambridge.incluaDepartamentos(&MatematicaCambridge);
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
   //Anna.setNome("Anna");
  // Sara.setNome("Sara");
//   Patrick.setNome("Patrick");

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

    LDisciplinas.incluaDisciplinas(&Calculo);
    LDisciplinas.incluaDisciplinas(&Fisica);
    LDisciplinas.incluaDisciplinas(&Programacao);

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

void Principal::CadDisciplina()
{

}

void Principal::CadDepartamento()
{
    char nomeUniversidade[150];
    char nomeDepartamento[150];

    Universidade* pUniv = nullptr;
    Departamento* pDep = nullptr;

    std::cout << "Qual e o nome da universidade do departamento" << std::endl;
    cin >> nomeUniversidade;
    pUniv = LUniversidades.localizar(nomeUniversidade);

    if(pUniv != nullptr)
    {
        std::cout << "Qual e o nome do departamento:" << std::endl;
        cin >> nomeDepartamento;

        pDep = new Departamento();
        pDep->setNome(nomeDepartamento);
        pDep->setUniversidade(pUniv);
        LDepartamentos.incluaDepartamentos(pDep);
        pUniv->incluaDepartamentos(pDep);
    }
    else
    {
        std::cout << "Universidade inexistente" <<std::endl;
    }

}

void Principal::CadUniversidade()
{
    char nomeUniversidade[150];
    Universidade* pUniv = nullptr;

    std::cout << "Qual e o nome da universidade" << std::endl;
    cin >> nomeUniversidade;

    pUniv = new Universidade();
    pUniv->setNome(nomeUniversidade);
    LUniversidades.incluaUniversidade(pUniv);
}

void Principal::Menu()
{
    int op = -1;

    while (op!=3)
    {
        system("cls");
        std::cout<<"Informe sua opcao:"<<std::endl;
        std::cout<<"1 - Cadastrar"<<std::endl;
        std::cout<<"2 - Executar"<<std::endl;
        std::cout<<"3 - Sair"<<std::endl;
        std::cin >> op;

        switch(op)
        {
            case 1:{ MenuCad();}
                break;
            case 2: { MenuExe();}
                break;
            case 3: { std::cout << "Fim"<< std::endl;}
                break;
            default: { std::cout << "Opcao invalida" << std::endl;
                system("Pause");
            }
        }
    }
}

void Principal::MenuCad()
{
    int op = -1;

    while (op!=4)
    {
        system("cls");
        std::cout<<"Informe sua opcao:"<<std::endl;
        std::cout<<"1 - Cadastrar Disciplina"<<std::endl;
        std::cout<<"2 - Cadastrar Departamento"<<std::endl;
        std::cout<<"2 - Cadastrar Universidade"<<std::endl;
        std::cout<<"4 - Sair"<<std::endl;
        std::cin >> op;

        switch(op)
        {
            case 1:{ CadDisciplina();}
                break;
            case 2: { CadDepartamento();}
                break;
            case 3: { CadUniversidade();}
                break;
            case 4: { std::cout << "Fim"<< std::endl;}
                break;
            default: { std::cout << "Opcao invalida" << std::endl;
                system("Pause");
            }
        }
    }
}

void Principal::MenuExe()
{
    int op = -1;

    while (op!=4)
    {
        system("cls");
        std::cout<<"Informe sua opcao:"<<std::endl;
        std::cout<<"1 - Listar Disciplina"<<std::endl;
        std::cout<<"2 - Listar Departamento"<<std::endl;
        std::cout<<"2 - Listar Universidade"<<std::endl;
        std::cout<<"4 - Sair"<<std::endl;
        std::cin >> op;

        switch(op)
        {
            case 1:{ LDisciplinas.listeDisciplinas();
                fflush(stdin);
                getchar();
                getchar();
            }
                break;
            case 2: { LDepartamentos.listeDepartamentos();
                fflush(stdin);
                getchar();
                getchar();
            }
                break;
            case 3: { LUniversidades.listeUniversidades();
                fflush(stdin);
                getchar();
            }
                break;
            case 4: { std::cout << "Fim"<< std::endl;}
                break;
            default: { std::cout << "Opcao invalida" << std::endl;
                system("Pause");
            }
        }
    }
}
