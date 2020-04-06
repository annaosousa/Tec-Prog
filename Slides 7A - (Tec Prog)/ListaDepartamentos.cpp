#include <iostream>
#include <string.h>
#include "ListaDepartamentos.h"

using namespace std;

ListaDepartamento::ListaDepartamento(int nd, char*n)
{
    numero_dpto = nd;
    cont_dpto = 0;
    pElDepartamentoPrim = nullptr;
    pElDepartamentoAtual = nullptr;

    strcpy(nome,n);
}

ListaDepartamento::~ListaDepartamento()
{
    ElDepartamento *paux1, *paux2;

    paux1 = pElDepartamentoPrim;
    paux2 = paux1;

    while(paux1 != nullptr)
    {
        paux2 = paux1->pProx;
        delete (paux1);
        paux1 = paux2;
    }
    pElDepartamentoPrim = nullptr;
    pElDepartamentoAtual = nullptr;
}
void ListaDepartamento::setNome(char* n)
{
    strcpy(nome,n);
}

void ListaDepartamento::incluaDepartamento(ElDepartamento* pdpto)
{
    ElDepartamento* paux;

    paux = new ElDepartamento();

    paux->setDepartamento(pdpto);

    if (((cont_dpto < numero_dpto) && (pdpto != nullptr)) ||((numero_dpto == -1) && (pdpto != nullptr)))
    {
        if (pElDepartamentoPrim == nullptr)
        {
            pElDepartamentoPrim = paux;
            pElDepartamentoAtual = paux;
        }
        else
        {
            pElDepartamentoAtual->pProx = paux;
            paux->pAnt = pElDepartamentoAtual;
            pElDepartamentoAtual = paux;
        }
        cont_dpto++;
    }
    else
    std::cout << " Departamento não incluído " << std::endl;

}

void ListaDepartamento::listaDepartamento()
{
    ElDepartamento* paux;
    paux = pElDepartamentoPrim;

    while (paux != nullptr)
    {
       std::cout << "O Departamento " << paux->getNome() << nome <<std::endl;

        paux = paux->pProx;
    }
}

void ListaDepartamento::listaDepartamento2()
{
    ElDepartamento* pAux;

    pAux = pElDepartamentoAtual;

    while(pAux != nullptr)
    {
        std::cout << "Disciplina " << pAux->getNome() << std::endl;

        pAux = pAux->pAnt;
    }
}

