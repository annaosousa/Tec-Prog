#include <iostream>
#include <string.h>
#include "Disciplina.h"
#include "Pessoa.h"
#include "Estudante.h"

using namespace std;

Disciplina::Disciplina (int na, const char* ac)
{
    pDptoAssociado = nullptr;
    pEstudantePrim = nullptr;
    pEstudanteAtual = nullptr;
    pProx = nullptr;
    pAnt = nullptr;
    cont_alunos = 0;
    numero_alunos = 45;

    strcpy(area_conhecimento, ac);
}
Disciplina::Disciplina()
{

}

Disciplina::~Disciplina()
{
    pDptoAssociado = nullptr;
    pEstudantePrim = nullptr;
    pEstudanteAtual = nullptr;
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

void Disciplina::incluaEstudante(Estudante* pa)
{
    if ((cont_alunos < numero_alunos) && (pa != nullptr))
    {
        if(pEstudantePrim = nullptr)
        {
            pEstudantePrim = pa;
            pEstudanteAtual = pa;
        }
        else
        {
            pEstudanteAtual->pProx = pa;
            pa->pAnt = pEstudanteAtual;
            pEstudanteAtual = pa;
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
    Estudante* paux;
    paux = pEstudantePrim;

    while (paux != nullptr)
    {
        std::cout << "O aluno(a) " << paux->getNome() << " esta matriculado em " << nome <<std::endl;

        paux = paux->pProx;
    }
}

void Disciplina::listeEstudante2()
{
    Estudante* paux;
    paux = pEstudanteAtual;

    while (paux != nullptr)
    {
        std::cout << "O aluno(a) " << paux->getNome() << " esta matriculado em " << nome <<std::endl;

        paux = paux->pAnt;
    }

}
