#include <iostream>
#include "Departamento.h"
#include "ElDepartamento.h"

using namespace std;

ElDepartamento::ElDepartamento()
{
    pProx = nullptr;
    pAnt = nullptr;
}

ElDepartamento::~ElDepartamento()
{
    pProx = nullptr;
    pAnt = nullptr;
}

void ElDepartamento::setDepartamento(ElDepartamento* pdto)
{
    pDepartamento = pdto;
}

ElDepartamento* ElDepartamento::getDepartamento()
{
    return pDepartamento;
}

char* ElDepartamento::getNome()
{
   pDepartamento->getNome();
}
