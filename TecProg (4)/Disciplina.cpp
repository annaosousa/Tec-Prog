#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Pessoa.h"
#include "Disciplina.h"

Disciplina::Disciplina(int na, char* ac)
{
    pDeptoAssociado = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
    pEstudanteAtual = nullptr;
    pEstudantePrim = nullptr;
    cont_estudantes = 0;
    numero_estudantes = 0;
    strcpy(area_conhecimento, ac);
}
Disciplina::~Disciplina()
{
    pDeptoAssociado = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
    pEstudanteAtual = nullptr;
    pEstudantePrim = nullptr;
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
    pDeptoAssociado = pdpto;
    pdpto->incluaDisciplina(this);
}

Departamento* Disciplina::getDepartamento()
{
    return pDeptoAssociado;
}

void Disciplina::incluaEstudantes(Estudante* pa)
{
    if((cont_estudantes < numero_estudantes) && (pa != nullptr))
    {
        if(pEstudantePrim == nullptr)
        {
            pEstudantePrim = pa;
            pEstudanteAtual = pa;
        }
        else
        {
            pEstudanteAtual->pProx = pa;
            pa->pAnte = pEstudanteAtual;
            pEstudanteAtual = pa;
        }
        cont_estudantes++;
    }
    else
    {
        std::cout << "Aluno nao incluido" << std::endl;
    }
}

void Disciplina::listeEstudantes()
{
    Estudante* pAux;
    pAux = pEstudantePrim;

    while(pAux != nullptr)
    {
        std::cout<<"Aluno " << pAux->getNome() << " matriculado em " << nome << std::endl;
        pAux = pAux->pProx;
    }
}

void Disciplina::listeEstudantes2()
{
    Estudante* pAux;
    pAux = pEstudanteAtual;

    while(pAux != nullptr)
    {
        std::cout<<"Aluno " << pAux->getNome() << " matriculado em " << nome << std::endl;
        pAux = pAux->pAnte;
    }
}
