#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include "Estudante.h"

class Aluno
{
private:
	Estudante* pAluno;

public:
	Aluno *pAnt;
	Aluno *pProx;

	Aluno();
	~Aluno();

	void setEstudante(Estudante *pa);
	Estudante* getEstudante();
};


#endif // ALUNO_H_INCLUDED
