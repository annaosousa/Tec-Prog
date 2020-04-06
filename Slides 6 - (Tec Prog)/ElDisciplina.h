#ifndef ELDISCIPLINA_H_INCLUDED
#define ELDISCIPLINA_H_INCLUDED
#include "Disciplina.h"
class Disciplina;

class ElDisciplina
{
private:
    Disciplina* pDisciplina;

public:
    ElDisciplina();          //construtora
    ~ElDisciplina();         //destrutora;

    ElDisciplina *pProx;         //ponteiro responsavel pelo duplo encadeamento
    ElDisciplina *pAnt;          //ponteiro responsavel pelo duplo encadeamento

    void setDisciplina(Disciplina* pd);     //informa disciplina
    Disciplina* getDisciplina();            //devolve disciplina

    char* getNome();
};


#endif // ELDISCIPLINA_H_INCLUDED
