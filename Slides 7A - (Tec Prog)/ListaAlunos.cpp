#include <iostream>
#include <string.h>
#include <fstream>
#include "Aluno.h"
#include "ListaAlunos.h"
#include "Disciplina.h"

using namespace std;

ListaAlunos::ListaAlunos ( int na, const char* n )
{
    numero_estudantes = na;
    cont_estudantes = 0;
    pAlunoPrim = nullptr;
    pAlunoAtual = nullptr;
    strcpy ( nome, n );
}
ListaAlunos::~ListaAlunos ( )
{
    Aluno *paux1, *paux2;
    paux1 = pAlunoPrim;
    paux2 = paux1;

    while ( paux1 != NULL )
    {
        paux2 = paux1->pProx;
        delete ( paux1 );
        paux1 = paux2;
    }
    pAlunoPrim = nullptr;
    pAlunoAtual = nullptr;
}

void ListaAlunos::incluaEstudante(Estudante* pa)
{
    Aluno* paux;

    paux = new Aluno();
    paux->setEstudante(pa);

    if ((cont_estudantes < numero_estudantes) && (pa != nullptr))
    {
        if(pAlunoPrim = nullptr)
        {
            pAlunoPrim = paux;
            pAlunoAtual = paux;
        }
        else
        {
            pAlunoAtual->pProx = paux;
            paux->pAnt = pAlunoAtual;
            pAlunoAtual = paux;
        }
        cont_estudantes++;
    }
    else
    {
        std::cout << "O aluno nao foi incluido, a turma ja esta lotada!" << std::endl;
    }
}

void ListaAlunos::listeEstudante()
{
    Aluno* paux;
    paux = pAlunoPrim;

    while (paux != nullptr)
    {
       std::cout << "O aluno(a) " << paux->getNome() << " esta matriculado em " << nome <<std::endl;

        paux = paux->pProx;
    }
}

void ListaAlunos::listeEstudante2()
{
    Aluno* paux;
    paux = pAlunoAtual;

    while (paux != nullptr)
    {
       std::cout << "O aluno(a) " << paux->getNome() << " esta matriculado em " << nome <<std::endl;

        paux = paux->pAnt;
    }
}

void ListaAlunos::graveAlunos()
{
    std::ofstream GravacaoAlunos ("alunos.dat", ios::out);

    if(!GravacaoAlunos)
    {
        std::cerr << "Arquivo nao pode ser aberto" << std::endl;
        fflush(stdin);
        getchar();
    }

    Aluno* pauxAluno;
    pauxAluno = pAlunoPrim;

    while(pauxAluno != nullptr)
    {
        Estudante* pauxAluno;

        pauxAluno = pauxAluno->getEstudante();

        GravacaoAlunos << pauxAluno->getId() << pauxAluno->getRA() << pauxAluno->getNome() << std::endl;
        pauxAluno = pauxAluno->pProx;
    }
    GravacaoAlunos.close();
}

void ListaAlunos::recupereAlunos()
{
    //std::ifstream recupereAlunos("alunos.dat", ios::);
    fstream recupereAlunos("alunos.dat", ios::in);

    if(!recupereAlunos)
    {
        std::cerr << "Arquivo nao pode ser aberto" << std::endl;
        fflush(stdin);
        getchar();
    }
    limpaLista();

    while(!recupereAlunos())
    {
        Estudante* pauxAluno;
        int id;
        int RA;
        char nome[150];

        recupereAlunos >> id >> RA >> nome;

        if(0 != strcmp(nome, ""))
        {
            pauxAluno = new Estudante(-1);
            pauxAluno->setId (id);
            pauxAluno->setRA(RA);
            pauxAluno->setNome(nome);

            incluaEstudante(pauxAluno);
        }
    }
    recupereAlunos.close();
}

void ListaAlunos::limpaLista()
{
   Aluno *paux1, *paux2;

   paux1 = pAlunoPrim;
   paux2 = paux1;

   while (paux1 != NULL)
   {
		paux2 = paux1->pProx;
	    delete (paux1);
        paux1 = paux2;
   }

   pAlunoPrim  = NULL;
   pAlunoAtual = NULL;
}
