#ifndef ELUNIVERSIDADE_H_INCLUDED
#define ELUNIVERSIDADE_H_INCLUDED
#include "Universidade.h"
class Universidade;

class ElUniversidade
{
private:
    Universidade* pUniversidade;

public:
    ElUniversidade();          //construtora
    ~ElUniversidade();         //destrutora;

    ElUniversidade *pProx;      //ponteiro responsavel pelo duplo encadeamento
    ElUniversidade *pAnt;       //ponteiro responsavel pelo duplo encadeamento

    void setUniversidade(Universidade* pu);        //informa universidade
    Universidade* getUniversidade();               //devolve universidade

    char* getNome();
};



#endif // ELUNIVERSIDADE_H_INCLUDED
