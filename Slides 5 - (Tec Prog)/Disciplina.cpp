#include <iostream>
#include <string.h>
#include "Disciplina.h"
#include "Aluno.h"

using namespace std;

Disciplina::Disciplina (int n,const char* ac)
{
    pDptoAssociado = nullptr;
    pAlunoPrim = nullptr;
    pAlunoAtual = nullptr;
    pProx = nullptr;
    pAnt = nullptr;
    cont_alunos = 0;
    numero_alunos = n;

    strcpy(area_conhecimento, ac);
}

Disciplina::~Disciplina()
{
    Aluno *paux1,*paux2;

    paux1 = pAlunoPrim;

    while(paux1 != nullptr)
    {
        paux2 = paux1->pProx;
        delete (paux1);
        paux1 = paux2;
    }
    pDptoAssociado = nullptr;
    pAlunoPrim = nullptr;
    pAlunoAtual = nullptr;
    pProx = nullptr;
    pAnt = nullptr;
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

char* Disciplina::getNome()
{
    return nome;
}

void Disciplina::setDepartamento (Departamento* pdpto)
{
    pDptoAssociado = pdpto;
    pdpto->incluaDisciplina(this);
}

Departamento* Disciplina::getDepartamento()
{
    return pDptoAssociado;
}

void Disciplina::incluaEstudante(Aluno* pa)
{
    Aluno* paux;

    paux = new Aluno();
    paux->setEstudante(pa);

    if ((cont_alunos < numero_alunos) && (pa != nullptr))
    {
        if(pAlunoPrim = nullptr)
        {
            pAlunoPrim = pa;
            pAlunoAtual = pa;
        }
        else
        {
            pAlunoAtual->pProx = paux;
            paux->pAnt = pAlunoAtual;
            pAlunoAtual = paux;
        }
        cont_alunos++;
    }
    else
    {
        std::cout << "O aluno nao foi incluido, a turma ja esta lotada!" << std::endl;
    }
}

void Disciplina::listeEstudante()
{
    Aluno* paux;
    paux = pAlunoPrim;

    while (paux != nullptr)
    {
       std::cout << "O aluno(a) " << paux->getNome() << " esta matriculado em " << nome <<std::endl;

        paux = paux->pProx;
    }
}

void Disciplina::listeEstudante2()
{
    Aluno* paux;
    paux = pAlunoAtual;

    while (paux != nullptr)
    {
       std::cout << "O aluno(a) " << paux->getNome() << " esta matriculado em " << nome <<std::endl;

        paux = paux->pAnt;
    }

}
