#include <iostream>
#include "Departamento.h"
#include <string.h>
/*#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"
#include "ListaDisciplinas.h"*/

using namespace std;

Departamento::Departamento(const char* n)
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

void Departamento::setNome( char* n)
{
	strcpy(Dpto, n);
	pObjLDisciplinas->setNome(n);
}

char* Departamento::getNome()
{
	return Dpto;
}

void Departamento::incluaDisciplina(Disciplina* pd)
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
    pObjLDisciplinas->incluaDisciplinas();
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

void Departamento::listeDisciplinas2()
{
    pObjLDisciplinas->listeDisciplinas2();
}

/*void Departamento::setUniversidade (Universidade* pu)
{
    pUniv = pu;
}

Universidade* Departamento::getUniversidade()
{
    return pUniv;
}*/
