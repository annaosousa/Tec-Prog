#include <iostream>
#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"
#include <string.h>

using namespace std;

Departamento::Departamento(int i)
{
    id = i;
}

Departamento::Departamento()
{

}

Departamento::~Departamento()
{

}

int Departamento::getId()
{
    return id;
}

void Departamento::setNome(const char* n)
{
	strcpy(Dpto, n);
	//pObjLDisciplinas->setNome(n);
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
    ObjLDisciplinas.incluir(*pd);
}

void Departamento::listeDisciplinas()
{
    Elemento<Disciplina>* elem = ObjLDisciplinas.getPrimeiro();

    while(nullptr != elem)
    {
        Disciplina obj = elem->getInfo();
        std::cout << obj.getNome() << std::endl;
        elem = elem->getProximo();
    }
}

void Departamento::listeDisciplinas2()
{
    Elemento<Disciplina>* elem = ObjLDisciplinas.getUltimo();

    while(nullptr != elem)
    {
        Disciplina obj = elem->getInfo();
        std::cout << obj.getNome() << std::endl;
        elem = elem->getAnterior();
    }
}
