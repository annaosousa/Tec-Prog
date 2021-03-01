#ifndef ELDISCIPLINA_H_INCLUDED
#define ELDISCIPLINA_H_INCLUDED
#include "Disciplina.h"

class ElDisciplina
{
private:
    Disciplina* pDisc;
public:
    ElDisciplina();
    ~ElDisciplina();

    ElDisciplina* pProx;
    ElDisciplina* pAnte;

    void setDisciplina(Disciplina* pd);
    Disciplina* getDisciplina();
    char* getNome();
};

#endif // ELDISCIPLINA_H_INCLUDED
