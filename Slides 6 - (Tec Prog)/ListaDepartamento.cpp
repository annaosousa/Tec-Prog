#include <iostream>
#include <string.h>
#include "ListaDepartamento.h"

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

    paux->setElDepartamento(pdpto);

    if (((cont_dpto < numero_dpto) && (pdpto != NULL)) ||((numero_dpto == -1) && (pdpto != NULL)))
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
    {
    std::cout << " Departamento não incluído " << std::endl;
    }

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

void listaDepartamento2()
{
    ElDepartamento* paux;

    paux = pDepartamentoAtual;

    while(paux != nullptr)
    {
        std::cout << "Disciplina " << paux->getNome() << std::endl;

        paux = paux->pAnt;
    }
}

Departamento* ListaDepartamentos::localizar(const char* n)
{
	ElDepartamento* paux;
	paux = pElDepartamentoPrim;
	while (paux != NULL)
	{
		if (0 == strcmp(n, paux->getNome()))
		{
			return paux->getDepartamento();
		}
		paux = paux->pProx;
	}
	return NULL;
}
