#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ListaUniversidades.h"

using namespace std;

ListaUniversidades::ListaUniversidades(int nu, char*n)
{
    numero_univ = nu;
    cont_univ = 0;
    pElUniversidadePrim = nullptr;
    pElUniversidadeAtual = nullptr;

    strcpy(nome,n);
}

ListaUniversidades::~ListaUniversidades()
{
    ElUniversidade *paux1, *paux2;

    paux1 = pElUniversidadesPrim;
    paux2 = paux1;

    while(paux1 != nullptr)
    {
        paux2 = paux1->pProx;
        delete (paux1);
        paux1 = paux2;
    }
    pElUniversidadesPrim = nullptr;
    pElUniversidadesAtual = nullptr;
}

void ListasUniversidades::setNome(char* n)
{
    strcpy(nome,n);
}

void ListaUniversidades::incluaUniversidade(Universidade* pu)
{
    ElUniversidades* paux;

    paux = new Universidades();

    paux->setUniversidades(pu);

    if (((cont_univ < numero_univ) && (pu != nullptr)) ||((numero_univ == -1) && (pu != nullptr)))
    {
        if (pElUniversidadesPrim == nullptr)
        {
            pElUniversidadesPrim = paux;
            pElUniversidadesAtual = paux;
        }
        else
        {
            pElUniversidadesAtual->pProx = paux;
            paux->pAnt = pElUniversidadesAtual;
            pElDiscipAtual = paux;
        }
        cont_univ++;
    }
    else
    {
    std::cout << " Universidade não incluída " << std::endl;
    }
}

void ListaUniversidades::listeUniversidades()
{
    ElUniversidades* pAux;

    pAux = pElUniversidadesPrim;

    while(pAux != nullptr)
    {
        std::cout << "Universidade " << pAux->getNome() << std::endl;

        pAux = pAux->pProx;
    }
}

void ListaUniversidades::listeUniversidades2()
{
    ElUniversidades* pAux;

    pAux = pElUniversidadesAtual;

    while(pAux != nullptr)
    {
        std::cout << "Universidade " << pAux->getNome() << std::endl;

        pAux = pAux->pAnt;
    }
}

Universidade* ListaUniversidades::localizar(char*n)
{
    ElUniversidade* paux;
    paux = pElUniversidadePrim;

    while ( paux != nullptr )
    {
        if (0 == strcmp(n,paux->getNome()))
        {
            return paux->getUniversidade();
        }
    paux= paux->pProx;
    }
    return nullptr;
}
