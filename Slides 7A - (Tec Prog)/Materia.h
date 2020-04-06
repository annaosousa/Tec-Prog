#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED
#include "Disciplina.h"

class Materia
{
private:
    Disciplina* pDisciplina;

public:
    Materia();
    ~Materia();

    Materia* pProx;
    Materia* pAnt;

    void setDisciplina (Disciplina* pdi);
    Disciplina* getDisciplina();

    char* getNome();
};


#endif // MATERIA_H_INCLUDED
