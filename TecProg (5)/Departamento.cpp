#include <iostream>
#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"
#include <string.h>

using namespace std;

Departamento::Departamento()
{
    pDisciplPrim = nullptr;
    pDisciplAtual = nullptr;
}

Departamento::~Departamento()
{
    pDisciplPrim = nullptr;
    pDisciplAtual = nullptr;
}

void Departamento::setNome(char* n)
{
	strcpy(Dpto, n);
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
    if(pDisciplPrim == nullptr){
        pDisciplPrim = pd;
        pDisciplAtual = pd;
    }
    else{
        pDisciplAtual->pProx = pd;
        pd->pAnte = pDisciplAtual;
        pDisciplAtual = pd;
    }
}

void Departamento::listeDisciplinas()
{
    Disciplina* pAux;

    pAux = pDisciplPrim;

    while(pAux != nullptr)
    {
        std::cout<<"A disciplina " << pAux->getNome() << " pertence ao Departamento "<< Dpto << std::endl;
        pAux = pAux->pProx;
    }
}

void Departamento::listeDisciplinas2()
{
    Disciplina* pAux;

    pAux = pDisciplAtual;

    while(pAux != nullptr)
    {
        std::cout<<"A disciplina " << pAux->getNome() << " pertence ao Departamento "<< Dpto << std::endl;
        pAux = pAux->pAnte;
    }
}
