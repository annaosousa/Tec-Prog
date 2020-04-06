#include <iostream>
#include "Departamento.h"
#include <string.h>
#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"
#include "ListaDisciplinas.h"

using namespace std;

Departamento::Departamento(const char* n = "")
{
    pObjLDisciplinas = new ListaDisciplinas(-1,"");
   // pDiscipPrim = nullptr;
   // pDiscipAtual = nullptr;
}

Departamento::~Departamento()
{
    if(pObjLDisciplinas)
    {
        delete pObjLDisciplinas;
    }
 //   pDiscipPrim = nullptr;
  //  pDiscipAtual = nullptr;
}

void Departamento::setNome(const char* n)
{
	strcpy(Dpto, n);
	pObjLDisciplinas->setNome(n);
}

char* Departamento::getNomeDpto()
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

void Departamento::incluaDisciplinas(Disciplina* pd)
{
    /*if(pDiscipPrim == nullptr)
    {
        pDiscipPrim = pd;
        pDiscipAtual = pd;
    }
    else
    {
        pDiscipAtual->pProx = pd;
        pDiscipAtual = pd;
    }*/
    pObjLDisciplinas->incluaDisciplinas(pd);
}

void Departamento::listeDisciplinas()
{
    /*Disciplina* pAux;

    pAux = pDiscipPrim;

    while(pAux != nullptr)
    {
        std::cout << "Disciplina " << pAux->getNomeDisciplina() << " pertence ao Departamento " << Dpto << std::endl;

        pAux = pAux->pProx;
    }*/
    pObjLDisciplinas->listeDisciplinas();
}
