#include <iostream>
#include "Departamento.h"
#include <string.h>
#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"

using namespace std;

Departamento::Departamento()
{
    pDiscipPrim = nullptr;
    pDiscipAtual = nullptr;
}

Departamento::~Departamento()
{
    pDiscipPrim = nullptr;
    pDiscipAtual = nullptr;
}

void Departamento::setNome(const char* n)
{
	strcpy(Dpto, n);
}

char* Departamento::getNome()
{
	return Dpto;
}

void Departamento::setUniversidade (Universidade* pu)
{
    pUniv = pu;
}

Universidade* Departamento::getUniversidade()
{
    return pUniv;
}

void Departamento::incluaDisciplina(Disciplina* pd)
{
    if(pDiscipPrim == nullptr)
    {
        pDiscipPrim = pd;
        pDiscipAtual = pd;
    }
    else
    {
        pDiscipAtual->pProx = pd;
        pDiscipAtual = pd;
    }
}

void Departamento::listeDisciplinas()
{
    Disciplina* pAux;

    pAux = pDiscipPrim;

    while(pAux != nullptr)
    {
        std::cout << "Disciplina " << pAux->getNome() << " pertence ao Departamento " << Dpto << std::endl;

        pAux = pAux->pProx;
    }
}

void Departamento::listeDisciplinas2()
{
    Disciplina* pAux;

    pAux = pDiscipAtual;

    while(pAux != nullptr)
    {
        std::cout << "Disciplina " << pAux->getNome() << " pertence ao Departamento " << Dpto << std::endl;

        pAux = pAux->pAnt;
    }
}

