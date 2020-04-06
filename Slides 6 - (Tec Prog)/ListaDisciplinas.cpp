#include <iostream>
#include <string.h>
#include "ListaDisciplinas.h"

using namespace std;

ListaDisciplinas::ListaDisciplinas(int nd, const char*n)
{
    numero_disc = nd;
    cont_disc = 0;
    pElDisciplinaPrim = nullptr;
    pElDisciplinaAtual = nullptr;

    strcpy(nome,n);
}

ListaDisciplinas::~ListaDisciplinas()
{
    ElDisciplina *paux1, *paux2;

    paux1 = pElDisciplinaPrim;
    paux2 = paux1;

    while(paux1 != nullptr)
    {
        paux2 = paux1->pProx;
        delete (paux1);
        paux1 = paux2;
    }
    pElDisciplinaPrim = nullptr;
    pElDisciplinaAtual = nullptr;
}

void ListaDisciplinas::setNome(char* n)
{
    strcpy(nome,n);
}

void ListaDisciplinas::incluaDisciplina(Disciplina* pd)
{
    ElDisciplina* paux;

    paux = new ElDisciplina();

    paux->setDisciplina(pd);

    if (((cont_disc < numero_disc) && (pd != nullptr)) ||((numero_disc == -1) && (pd != NULL)))
    {
        if (pElDiscipPrim == nullptr)
        {
            pElDiscipPrim = paux;
            pElDiscipAtual = paux;
        }
        else
        {
            pElDisciplinaAtual->pProx = paux;
            paux->pAnt = pElDiscipAtual;
            pElDiscipAtual = paux;
        }
        cont_disc++;
    }
    else
    {
    std::cout << " Disciplina não incluída " << " Quantia de disc. já lotada em " << numero_disc << " disciplinas." << std::endl;
    }
}

void ListaDisciplinas::listeDisciplinas()
{
    ElDisciplina* paux;

    paux = pElDisciplinaPrim;

    while(paux != nullptr)
    {
        std::cout << "Disciplina " << paux->getNome() << std::endl;

        paux = paux->pProx;
    }
}

void ListaDisciplinas::listeDisciplinas2()
{
    ElDisciplina* paux;

    paux = pElDiscipAtual;

    while(paux != nullptr)
    {
        std::cout << "Disciplina " << paux->getNome() << std::endl;

        paux = paux->pAnt;
    }
}
