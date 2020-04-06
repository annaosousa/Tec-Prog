#include <iostream>
#include <string.h>
#include "ListaAlunos.h"

using namespace std;

ListaAlunos::ListaAlunos ( int na, char* n )
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
