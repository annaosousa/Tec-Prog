#include <iostream>
#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"
#include "ListaDisciplinas.h"
#include <string.h>

using namespace std;

Departamento::Departamento()
{
    pObjLDisciplinas = new ListaDisciplinas( -1,  "");
}

Departamento::~Departamento()
{
    if (pObjLDisciplinas)
    {
        delete pObjLDisciplinas;
    }
}

void Departamento::setNome(const char* n)
{
	strcpy(Dpto, n);
	pObjLDisciplinas->setNome(n);
}

char* Departamento::getNome()
{
	return Dpto;
}

void Departamento::setUniversidade(Universidade* pu)
{
    pUniv = pu;
}

Universidade* Departamento::getUniversidade()
{
    return pUniv;
}

void Departamento::incluaDisciplina(Disciplina* pd)
{
    pObjLDisciplinas->incluaDisciplinas(pd);
}

void Departamento::listeDisciplinas()
{
    pObjLDisciplinas->listeDisciplinas();
}

void Departamento::listeDisciplinas2()
{
    pObjLDisciplinas->listeDisciplinas2();
}
