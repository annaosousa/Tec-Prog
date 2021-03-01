#include <iostream>
#include "ElUniversidade.h"

ElUniversidade::ElUniversidade()
{
    pUniversidade = nullptr;
	pProx = nullptr;
    pAnte = nullptr;
}

ElUniversidade::~ElUniversidade()
{
    pUniversidade = nullptr;
	pProx = nullptr;
    pAnte = nullptr;
}

void ElUniversidade::setUniversidade(Universidade *pu)
{
   pUniversidade = pu;
}

Universidade* ElUniversidade::getUniversidade()
{
   return pUniversidade;
}

char* ElUniversidade::getNome()
{
    return pUniversidade->getNome();
}
