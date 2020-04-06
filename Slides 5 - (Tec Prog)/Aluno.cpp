#include <iostream>
#include "Aluno.h"

using namespace std;

Aluno::Aluno ( )
{

}
Aluno::~Aluno ( )
{

}

void Aluno::setEstudante( Estudante* pa )
{
    pEstudante = pa;
}

Estudante* Aluno::getEstudante ( )
{
    return pEstudante;
}

char* Aluno::getNome ( )
{
    pEstudante->getNome();
}
