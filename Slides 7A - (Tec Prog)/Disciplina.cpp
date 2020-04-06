#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Disciplina.h"
#include "Aluno.h"
#include "ListaDisciplinas.h"
//#include "ListaAlunos.h"

using namespace std;

Disciplina::Disciplina (int n, char* ac)
{
    pDptoAssociado = nullptr;
    //pAlunoPrim = nullptr;
    //pAlunoAtual = nullptr;
    pProx = nullptr;
    pAnt = nullptr;
    //cont_alunos = 0;
    //numero_alunos = n;

    strcpy(area_conhecimento, ac);
}

Disciplina::~Disciplina()
{
    pDptoAssociado = nullptr;
    pProx = nullptr;
    pAnt = nullptr;

  /*  Aluno *paux1,*paux2;

    paux1 = pAlunoPrim;

    while(pAlunoPrim != nullptr)
    {
        pAlunoPrim = pAlunoPrim->pProx;
        delete paux;
        paux = pAlunoPrim;
    }
    pDptoAssociado = nullptr;
    //pAlunoPrim = nullptr;
    pAlunoAtual = nullptr;
    //pProx = nullptr;
    //pAnt = nullptr;*/
}

void Disciplina::setId(int n)
{
    id = n;
}

int Disciplina::getId()
{
    return id;
}

void Disciplina::setNome(char* n)
{
    strcpy(nome,n);
}

char* Disciplina::getNomeDisciplina()
{
    return nome;
}

void Disciplina::incluaEstudante(Estudante* pa)
{
   /* Aluno* paux;

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
    }*/
    ObjLAlunos.incluaEstudante(pa);
}

void Disciplina::listeEstudante()
{
   /* Aluno* paux;
    paux = pAlunoPrim;

    while (paux != nullptr)
    {
       std::cout << "O aluno(a) " << paux->getNome() << " esta matriculado em " << nome <<std::endl;

        paux = paux->pProx;
    }*/
    ObjLAlunos.listeEstudante();
}

void Disciplina::listeEstudante2()
{
 /*   Aluno* paux;
    paux = pAlunoAtual;

    while (paux != nullptr)
    {
       std::cout << "O aluno(a) " << paux->getNome() << " esta matriculado em " << nome <<std::endl;

        paux = paux->pAnt;
    }
*/
    ObjLAlunos.listeEstudantes2();
}

/*void Disciplina::setDepartamento (Departamento* pdpto)
{
    pDptoAssociado = pdpto;
    pdpto->incluaDisciplinas(this);
}

Departamento* Disciplina::getDepartamento()
{
    return pDptoAssociado;
}
*/
