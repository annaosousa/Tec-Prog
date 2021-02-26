#include <iostream>
#include "ElEstudante.h"

using namespace std;

ElEstudante::ElEstudante()
{
    pAl = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
}

ElEstudante::~ElEstudante()
{
    pAl = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
}

void ElEstudante::setEstudante(Estudante* pa)
{
    pAl = pa;
}

Estudante* ElEstudante::getEstudante()
{
    return pAl;
}

char* ElEstudante::getNome()
{
    return pAl->getNome();
}
