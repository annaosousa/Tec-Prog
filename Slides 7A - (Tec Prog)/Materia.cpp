#include <iostream>
#include "Materia.h"

using namespace std;

Materia::Materia()
{
    pProx = nullptr;
    pAnt = nullptr;
}

Materia::~Materia()
{
    pProx = nullptr;
    pAnt = nullptr;
}

void Materia::setDisciplina (Disciplina* pdi)
{
    pDisciplina = pdi;
}

Materia::Disciplina* getDisciplina()
{
    return pDisciplina;
}

char* Materia::getNome()
{
    return pDisciplina->getNome();
}
