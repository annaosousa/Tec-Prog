#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include "Estudante.h"

class Aluno
{
private:
    Estudante* pEstudante;

public:
    Aluno();
    ~Aluno();

    Aluno *pProx;
    Aluno *pAnt;

    void setEstudante(Estudante* pa );
    Estudante* getEstudante ( );
    char* getNome ( );
};


#endif // ALUNO_H_INCLUDED
