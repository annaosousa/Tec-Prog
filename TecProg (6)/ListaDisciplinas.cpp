#include <iostream>
#include <string.h>
#include "ListaDisciplinas.h"

using namespace std;

ListaDisciplinas::ListaDisciplinas(int na, const char* n)
{
    cont_disciplinas = 0;
    numero_disciplinas = na;

    pElDisciplinaPrim = nullptr;
    pElDisciplinaAtual = nullptr;

    strcpy(nome, n);
}

ListaDisciplinas::~ListaDisciplinas()
{
    ElDisciplina *paux1, *paux2;
    paux1 = pElDisciplinaPrim;
    paux2 = paux1;

    while(paux1 != nullptr)
    {
        paux2 = paux1->pProx;
        delete(paux1);
        paux1 = paux2;
    }

    pElDisciplinaAtual = nullptr;
    pElDisciplinaPrim = nullptr;
}

void ListaDisciplinas::setNome(const char* n)
{
    strcpy(nome, n);
}

void ListaDisciplinas::incluaDisciplinas (Disciplina* pd)
{
    if((cont_disciplinas < numero_disciplinas) && (pd != nullptr) ||
       (numero_disciplinas == -1) && (pd != nullptr))
    {
        ElDisciplina* paux = nullptr;
        paux = new ElDisciplina();
        paux->setDisciplina(pd);

        paux->pProx = nullptr;
        paux->pAnte = nullptr;

        if(pElDisciplinaPrim == nullptr)
        {
            pElDisciplinaPrim = paux;
            pElDisciplinaAtual = paux;
        }
        else
        {
            pElDisciplinaAtual->pProx = paux;
            paux->pAnte = pElDisciplinaAtual;
            pElDisciplinaAtual = paux;
        }
        cont_disciplinas++;
    }
    else
    {
        if(pd != nullptr)
        {
            std::cout << "Disciplina nao incluida" << std::endl;
        }
        else
        {
            std::cout << "ponteiro nulo" <<std::endl;
        }
    }
}

void ListaDisciplinas::listeDisciplinas ()
{
    ElDisciplina* pAux;

    pAux = pElDisciplinaPrim;

    while(pAux != nullptr)
    {
        std::cout<<"A disciplina " << pAux->getNome() << " pertence ao Departamento "<< nome << std::endl;
        pAux = pAux->pProx;
    }
}

void ListaDisciplinas::listeDisciplinas2 ()
{
    ElDisciplina* pAux = nullptr;
    pAux = pElDisciplinaAtual;

    while(pAux != nullptr)
    {
        std::cout<<"Disciplina " << pAux->getNome() << " do departamento " << nome << std::endl;
        pAux = pAux->pAnte;
    }
}
