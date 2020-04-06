#include <iostream>
#include "ElUniversidade.h"

using namespace std;

ElUniversidade::ElUniversidade()
{
    pProx = nullptr;
    pAnt = nullptr;
}

ElUniversidade::~ElUniversidade()
{
    pProx = nullptr;
    pAnt = nullptr;
}

void ElUniversidade::setUniversidade(Universidade* pu)
{
    pUniversidade = pu;
}

Universidade* ElUniversidade::getUniversidade()
{
    return pUniversidade;
}

char* ElUniversidade::getNome()
{
    pUniversidade->getNome();
}
