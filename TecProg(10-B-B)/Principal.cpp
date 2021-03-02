#include <iostream>
#include "windows.h"
#include "Principal.h"

using namespace std;

Principal::Principal():
    cont_idDisc (0),
    cont_idDep (0),
    cont_idEst (0),

    DAINF (cont_idDep++),
    DAELN (cont_idDep++),
    FisicaPrinceton (cont_idDep++),
    MatematicaCambridge (cont_idDep++),

    Anna (cont_idEst++),
    Sara (cont_idEst++),
    Patrick (cont_idEst++),

    Calculo (cont_idDisc++),
    Fisica (cont_idDisc++),
    Programacao (cont_idDisc++),

    arqUniversidades("Universidades.dat"),
    arqDepartamentos("Departamentos.dat"),
    arqDisciplinas("Departamentos.dat"),
    arqEstudantes("Estudantes")
    

{
    SYSTEMTIME st;
    GetSystemTime(&st);

    diaAt = st.wMonth;
    mesAt = st.wDay;
    anoAt = st.wYear;

    Inicializa();
    executar();
}

Principal::~Principal()
{

}

void Principal::executar()
{
    Menu();
}

void Principal::Inicializa()
{
    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaProfessores();
    InicializaEstudantes();
    InicializaDisciplinas();
}

void Principal::InicializaUniversidades ( )
{
    //registro universidades
    UTFPR.setNome ("UTFPR");
    LUniversidades.incluir(UTFPR);

    Princeton.setNome ("Universidade de Princeton");
    LUniversidades.incluir(Princeton);

    Cambridge.setNome ("Universidade de Cambridge");
    LUniversidades.incluir(Cambridge);

}

void Principal::InicializaDepartamentos ( )
{
    //registro departamentos
    DAINF.setNome("Informatica");
    DAELN.setNome("Eletronica");
    FisicaPrinceton.setNome("Fisica/Priceton");
    MatematicaCambridge.setNome("Matematica/Cambridge");

    LDepartamentos.incluir(DAINF);
    LDepartamentos.incluir(DAELN);
    LDepartamentos.incluir(FisicaPrinceton);
    LDepartamentos.incluir(MatematicaCambridge);

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
    Anna.setNome("Anna");
    LEstudantes.incluir(Anna);

    Sara.setNome("Sara");
    LEstudantes.incluir(Sara);

    Patrick.setNome("Patrick");
    LEstudantes.incluir(Patrick);
}

void Principal::InicializaDisciplinas ( )
{
    //registro de diciplinas
    Calculo.setNome("Calculo");
    Fisica.setNome("Fisica");
    Programacao.setNome("Programacao");

    LDisciplinas.incluir(Calculo);
    LDisciplinas.incluir(Fisica);
    LDisciplinas.incluir(Programacao);

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
    /*char nomeUniversidade[150];
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
        LDepartamentos.incluir(pDep);
        pUniv->incluaDepartamentos(pDep);
    }
    else
    {
        std::cout << "Universidade inexistente" <<std::endl;
    }*/

}

void Principal::CadUniversidade()
{
    char nomeUniversidade[150];
    Universidade pUniv;

    std::cout << "Qual e o nome da universidade" << std::endl;
    cin >> nomeUniversidade;

    pUniv.setNome(nomeUniversidade);
    LUniversidades.incluir(pUniv);
}

void Principal::CadEstudante()
{
    char nomeEstudante [150];
    int ra;

    Estudante est(cont_idEst++);

    std::cout << "Qual o nome do aluno. " << std::endl;
    std::cin >> nomeEstudante;
    std::cout << "Qual o RA do aluno" << std::endl;
    std::cin >> ra;

    est.setNome (nomeEstudante);
    est.setRA (ra);
    LEstudantes.incluir(est);
}

void Principal::GravarTudo ()
{
    GravarUniversidades();
    GravarDepartamentos();
    GravarDisciplinas();
    GravarEstudantes();
    GravarProfessores();
}

void Principal::GravarUniversidades ()
{
    LUniversidades.gravarEmArquivo(arqUniversidades);
}

void Principal::GravarDepartamentos ()
{
    LDepartamentos.gravarEmArquivo(arqDepartamentos);
}

void Principal::GravarDisciplinas ()
{
    LDisciplinas.gravarEmArquivo(arqDisciplinas);
}

void Principal::GravarEstudantes()
{
    LEstudantes.gravarEmArquivo(arqEstudantes);
}

void Principal::GravarProfessores ()
{

}

void Principal::RecuperarTudo ()
{
    RecuperarUniversidades();
    RecuperarDepartamentos();
    RecuperarDisciplinas();
    RecuperarEstudantes();
    RecuperarProfessores();
}

void Principal::RecuperarUniversidades ()
{
    LUniversidades.recuperarDeArquivo(arqUniversidades);
}

void Principal::RecuperarDepartamentos ()
{
    LDepartamentos.recuperarDeArquivo(arqDepartamentos);
}

void Principal::RecuperarDisciplinas ()
{
    LDisciplinas.recuperarDeArquivo(arqDisciplinas);
}

void Principal::RecuperarEstudantes()
{
    LEstudantes.recuperarDeArquivo(arqEstudantes);
}

void Principal::RecuperarProfessores ()
{

}

void Principal::Menu()
{
    int op = -1;

    while (op!=5)
    {
        //system("cls");
        std::cout<<"Informe sua opcao:"<<std::endl;
        std::cout<<"1 - Cadastrar"<<std::endl;
        std::cout<<"2 - Executar"<<std::endl;
        std::cout<<"3 - Gravar"<<std::endl;
        std::cout<<"4 - Recuperar"<<std::endl;
        std::cout<<"5 - Sair"<<std::endl;
        std::cin >> op;

        switch(op)
        {
            case 1:
                    MenuCad();
                break;
            case 2:
                {
                    MenuExe();
                }
                break;
            case 3:
                {
                    MenuGravar();
                }
                break;
            case 4:
                {
                    MenuRecuperar();
                }
                break;
            case 5:
                {
                    std::cout << "Fim"<< std::endl;
                }
                break;
            default:
                {
                    std::cout << "Opcao invalida" << std::endl;
                system("Pause");
                }
        }
    }
}

void Principal::MenuCad()
{
    int op = -1;

    while (op!=5)
    {
        system("cls");
        std::cout<<"Informe sua opcao:"<<std::endl;
        std::cout<<"1 - Cadastrar Disciplina"<<std::endl;
        std::cout<<"2 - Cadastrar Departamento"<<std::endl;
        std::cout<<"3 - Cadastrar Universidade"<<std::endl;
        std::cout<<"4 - Cadastrar Aluno"<<std::endl;
        std::cout<<"5 - Sair"<<std::endl;
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
                    CadEstudante();
                }
                break;
            case 5:
                {
                    std::cout << "Fim"<< std::endl;
                }
                break;
            default:
                {
                    std::cout << "Opcao invalida" << std::endl;
                system("Pause");
                }
        }
    }
}

void Principal::MenuExe()
{
    int op = -1;

    while (op!=6)
    {
        system("cls");
        std::cout<<"Informe sua opcao:"<<std::endl;
        std::cout<<"1 - Listar Disciplinas"<<std::endl;
        std::cout<<"2 - Listar Departamentos"<<std::endl;
        std::cout<<"3 - Listar Universidades"<<std::endl;
        std::cout<<"4 - Listar Estudantes"<<std::endl;
        std::cout<<"5 - Listar Professores"<<std::endl;
        std::cout<<"6 - Sair"<<std::endl;
        std::cin >> op;

        switch(op)
        {
            case 1:
                {
                    for(Elemento<Disciplina>* pAux = LDisciplinas.getPrimeiro(); pAux != nullptr; pAux = pAux->getProximo())
                    {
                        Disciplina obj = pAux->getInfo();
                        std::cout << obj.getNome() << std::endl;
                    }
                    fflush(stdin);
                    getchar();
                }
                break;
            case 2:
                {
                    for(Elemento<Departamento>* pAux = LDepartamentos.getPrimeiro(); pAux != nullptr; pAux = pAux->getProximo())
                    {
                        Departamento obj = pAux->getInfo();
                        std::cout << obj.getNome() << std::endl;
                    }
                    fflush(stdin);
                    getchar();
                }
                break;
            case 3:
                {
                    for(Elemento<Universidade>* pAux = LUniversidades.getPrimeiro(); pAux != nullptr; pAux = pAux->getProximo())
                    {
                        Universidade obj = pAux->getInfo();
                        std::cout << obj.getNome() << std::endl;
                    }
                    fflush(stdin);
                    getchar();
                }
            case 4:
                {
                    for(Elemento<Estudante>* pAux = LEstudantes.getPrimeiro(); pAux != nullptr; pAux = pAux->getProximo())
                    {
                        Estudante obj = pAux->getInfo();
                        std::cout << obj.getNome() << std::endl;
                    }
                    fflush(stdin);
                    getchar();
                }
                break;
            case 5:
                {
                    DepOndeProfsTrabalham();
                    fflush(stdin);
                    getchar();
                }
            case 6:
                {
                    std::cout << "Fim"<< std::endl;
                }
                break;
            default:
                {
                    std::cout << "Opcao invalida" << std::endl;
                system("Pause");
                }
        }
    }
}

void Principal::MenuGravar()
{
     int op = -1;
    while (op != 6)
    {
        system ( "cls" );
        std::cout << " Informe sua opção: " << std::endl;
        std::cout << " 0 - Gravar Tudo. " << std::endl;
        std::cout << " 1 - Gravar Universidades. " << std::endl;
        std::cout << " 2 - Gravar Departamentos. " << std::endl;
        std::cout << " 3 - Gravar Disciplinas. " << std::endl;
        std::cout << " 4 - Gravar Alunos. " << std::endl;
        std::cout << " 5 - Gravar Professores. " << std::endl;
        std::cout << " 6 – Sair. " << std::endl;
        std::cin >> op;
        switch ( op )
        {
            case 0:
                {
                    GravarTudo();
                }
                break;
            case 1:
                {
                    GravarUniversidades();
                }
                break;
            case 2:
                {
                    GravarDepartamentos();
                }
                break;
            case 3:
                {
                    GravarDisciplinas();
                }
                break;
            case 4:
                {
                    GravarEstudantes();
                }
                break;
            case 5:
                {
                    GravarProfessores();
                }
                break;
            case 6:
                {
                    std::cout << " FIM " << std::endl;
                }
                break;
            default:
                {
                    std::cout << "Opção Inválida - Pressione uma tecla." << std::endl;
                    getchar();
                }
            }
    }
}

void Principal::MenuRecuperar()
{
    int op = -1;
    while ( op != 6 ) {
        system ( "cls" );
        std::cout << " Informe sua opção: " << std::endl;
        std::cout << " 0 - Recuperar Tudo. " << std::endl;
        std::cout << " 1 - Recuperar Universidades. " << std::endl;
        std::cout << " 2 - Recuperar Departamentos. " << std::endl;
        std::cout << " 3 - Recuperar Disciplinas. " << std::endl;
        std::cout << " 4 - Recuperar Alunos. " << std::endl;
        std::cout << " 5 - Recuperar Professores. " << std::endl;
        std::cout << " 6 – Sair. " << std::endl;
        std::cin >> op;

        switch ( op )
        {
            case 0:
                {
                    RecuperarTudo ( );
                }
                break;
            case 1:
                {
                    RecuperarUniversidades ( );
                }
                break;
            case 2:
                {
                    RecuperarDepartamentos ( );
                }
                break;
            case 3:
                {
                    RecuperarDisciplinas ( );
                }
                break;
            case 4:
                {
                    RecuperarEstudantes();
                }
                break;
            case 5:
                {
                    RecuperarProfessores ( );
                }
                break;
            case 6:
                {
                    std::cout << " FIM " << std::endl;
                }
                break;
            default:
                {
                    std::cout << "Opção Inválida - Pressione uma tecla." << std::endl;
                    getchar();
                }
        }
    }
}
