#include <iostream>
#include <string.h>
#include "ListaEstudantes.h"

using namespace std;

ListaEstudantes::ListaEstudantes(int na, const char* n)
{
    numero_estudantes = na;
    cont_estudantes = 0;

    pElEstudantePrim = nullptr;
    pElEstudanteAtual = nullptr;

    strcpy(nome, n);
}

ListaEstudantes::~ListaEstudantes()
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

    pElEstudanteAtual = nullptr;
    pElEstudantePrim = nullptr;
}

void ListaEstudantes::incluaEstudantes (Estudante* pa)
{
    if((cont_estudantes < numero_estudantes) && (pa != nullptr))
    {
        ElEstudante* paux = nullptr;
        paux = new ElEstudante();
        paux->setEstudante(pa);

        paux->pProx = nullptr;
        paux->pAnte = nullptr;

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
        if(pa != nullptr)
        {
            std::cout << "Aluno nao incluido" << std::endl;
        }
        else
        {
            std::cout << "ponteiro nulo" <<std::endl;
        }
    }
}

void ListaEstudantes::listeEstudantes ()
{
    ElEstudante* pAux = nullptr;
    pAux = pElEstudantePrim;

    while(pAux != nullptr)
    {
        std::cout<<"Aluno " << pAux->getNome() << " matriculado em " << nome << std::endl;
        pAux = pAux->pProx;
    }
}

void ListaEstudantes::listeEstudantes2 ()
{
    ElEstudante* pAux = nullptr;
    pAux = pElEstudanteAtual;

    while(pAux != nullptr)
    {
        std::cout<<"Aluno " << pAux->getNome() << " matriculado em " << nome << std::endl;
        pAux = pAux->pAnte;
    }
}
