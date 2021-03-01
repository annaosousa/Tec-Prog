#ifndef ELUNIVERSIDADE_H_INCLUDED
#define ELUNIVERSIDADE_H_INCLUDED
#include "Universidade.h"

class ElUniversidade
{
 private:
    Universidade* pUniversidade;

 public:
    ElUniversidade( );
    ~ElUniversidade( );

    ElUniversidade *pProx;
    ElUniversidade *pAnte;

    void setUniversidade(Universidade* pu);
    Universidade* getUniversidade ( );
    char* getNome();
};



#endif // ELUNIVERSIDADE_H_INCLUDED
