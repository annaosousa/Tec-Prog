#include <iostream>
#include "ElDisciplina.h"

using namespace std;

ElDisciplina::ElDisciplina()
{
    pDisc = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
}

ElDisciplina::~ElDisciplina()
{
    pDisc = nullptr;
    pProx = nullptr;
    pAnte = nullptr;
}

void ElDisciplina::setDisciplina(Disciplina* pd)
{
    pDisc = pd;
}

Disciplina* ElDisciplina::getDisciplina()
{
    return pDisc;
}

char* ElDisciplina::getNome()
{
    return pDisc->getNome();
}

