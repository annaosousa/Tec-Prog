#include <iostream>
#include "Estudante.h"

using namespace std;

Aluno::Aluno()
{
	pProx = pAnt = nullptr;
}

Aluno::~Aluno()
{

}

void Aluno::setEstudante(Estudante *pa)
{
	pAluno = pa;
}

Aluno* Aluno::getEstudante()
{
	return pAluno;
}
