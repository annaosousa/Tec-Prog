#include <iostream>
#include <string.h>
#include "ListaDepartamentos.h"

using namespace std;

ListaDepartamentos::ListaDepartamentos(int nd, const char* n)
{
    cont_departamentos = 0;
    numero_departamentos = nd;

    pElDepartamentoPrim = nullptr;
    pElDepartamentoAtual = nullptr;

    strcpy(nome, n);
}

ListaDepartamentos::~ListaDepartamentos()
{
    ElDepartamento *paux1, *paux2;
    paux1 = pElDepartamentoPrim;
    paux2 = paux1;

    while(paux1 != nullptr)
    {
        paux2 = paux1->pProx;
        delete(paux1);
        paux1 = paux2;
    }

    pElDepartamentoAtual = nullptr;
    pElDepartamentoPrim = nullptr;
}

void ListaDepartamentos::setNome(char* n)
{
    strcpy(nome, n);
}

void ListaDepartamentos::incluaDepartamentos (Departamento* pd)
{
    if((cont_departamentos < numero_departamentos) && (pd != nullptr) ||
       (numero_departamentos == -1) && (pd != nullptr))
    {
        ElDepartamento* paux = nullptr;
        paux = new ElDepartamento();
        paux->setDepartamento(pd);

        paux->pProx = nullptr;
        paux->pAnte = nullptr;

        if(pElDepartamentoPrim == nullptr)
        {
            pElDepartamentoPrim = paux;
            pElDepartamentoAtual = paux;
        }
        else
        {
            pElDepartamentoAtual->pProx = paux;
            paux->pAnte = pElDepartamentoAtual;
            pElDepartamentoAtual = paux;
        }
        cont_departamentos++;
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

void ListaDepartamentos::listeDepartamentos ()
{
    ElDepartamento* pAux;

    pAux = pElDepartamentoPrim;

    while(pAux != nullptr)
    {
        std::cout<<"O departamento " << pAux->getNome() << " pertence a universidade "<< nome << std::endl;
        pAux = pAux->pProx;
    }
}

void ListaDepartamentos::listeDepartamentos2 ()
{
    ElDepartamento* pAux = nullptr;
    pAux = pElDepartamentoAtual;

    while(pAux != nullptr)
    {
        std::cout<<"O departamento " << pAux->getNome() << " pertence a universidade " << nome << std::endl;
        pAux = pAux->pAnte;
    }
}

