#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Disciplina.h"

Disciplina::Disciplina(int na, const char* ac):
    ObjLEstudantes(na, ac)
{
    id = 0;
    pDeptoAssociado = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
    strcpy(area_conhecimento, ac);
}
Disciplina::~Disciplina()
{
    id = 0;
    pDeptoAssociado = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
}

void Disciplina::setId(int n)
{
    id = n;
}

int Disciplina::getId()
{
    return id;
}

void Disciplina::setNome(const char* n)
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
    pDeptoAssociado->incluaDisciplina(this);
}

Departamento* Disciplina::getDepartamento()
{
    return pDeptoAssociado;
}

void Disciplina::incluaEstudantes(Estudante* pa)
{
    ObjLEstudantes.incluaEstudantes(pa);
}

void Disciplina::listeEstudantes()
{
    ObjLEstudantes.listeEstudantes();
}

void Disciplina::listeEstudantes2()
{
    ObjLEstudantes.listeEstudantes2();
}
