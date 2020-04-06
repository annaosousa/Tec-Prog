#include <iostream>
#include "Departamento.h"
#include "ElDepartamento.h"

using namespace std;

ElDepartamento::ElDepartamento()
{
    pDepartamento = nullptr;
    pProx = nullptr;
    pAnt = nullptr;
}

ElDepartamento::~ElDepartamento()
{
    pProx = nullptr;
    pAnt = nullptr;
}

void ElDepartamento::setDepartamento(Departamento* pdto)
{
    pDepartamento = pdto;
}

Departamento* ElDepartamento::getDepartamento()
{
    return pDepartamento;
}

char* ElDepartamento::getNome()
{
   pDepartamento->getNome();
}
