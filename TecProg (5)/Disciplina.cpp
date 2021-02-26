#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Disciplina.h"

Disciplina::Disciplina(int na, char* ac)
{
    pDeptoAssociado = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
    pElEstudanteAtual = nullptr;
    pElEstudantePrim = nullptr;
    cont_estudantes = 0;
    numero_estudantes = na;
    strcpy(area_conhecimento, ac);
}
Disciplina::~Disciplina()
{
    ElEstudante *paux1, *paux2;
    paux1 = pElEstudantePrim;
    paux2 = paux1;

    while(paux1 != nullptr)
    {
        paux2 = paux1->pProx;
        delete(paux1);
        paux1 = paux2;
    }
    pDeptoAssociado = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
    pElEstudanteAtual = nullptr;
    pElEstudantePrim = nullptr;
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
    ElEstudante* paux = nullptr;
    paux = new ElEstudante();
    paux->setEstudante(pa);

    paux->pProx = nullptr;
    paux->pAnte = nullptr;

    if((cont_estudantes < numero_estudantes) && (pa != nullptr))
    {
        if(pElEstudantePrim == nullptr)
        {
            pElEstudantePrim = paux;
            pElEstudanteAtual = paux;
        }
        else
        {
            pElEstudanteAtual->pProx = paux;
            paux->pAnte = pElEstudanteAtual;
            pElEstudanteAtual = paux;
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
    ElEstudante* pAux;
    pAux = pElEstudantePrim;

    while(pAux != nullptr)
    {
        std::cout<<"Aluno " << pAux->getNome() << " matriculado em " << nome << std::endl;
        pAux = pAux->pProx;
    }
}

void Disciplina::listeEstudantes2()
{
    ElEstudante* pAux;
    pAux = pElEstudanteAtual;

    while(pAux != nullptr)
    {
        std::cout<<"Aluno " << pAux->getNome() << " matriculado em " << nome << std::endl;
        pAux = pAux->pAnte;
    }
}
