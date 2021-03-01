#include <iostream>
#include "ElDepartamento.h"

using namespace std;

ElDepartamento::ElDepartamento()
{
    pDep = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
}

ElDepartamento::~ElDepartamento()
{
    pDep = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
}

void ElDepartamento::setDepartamento(Departamento* pd)
{
    pDep = pd;
}

Departamento* ElDepartamento::getDepartamento()
{
    return pDep;
}

char* ElDepartamento::getNome()
{
    return pDep->getNome();
}

