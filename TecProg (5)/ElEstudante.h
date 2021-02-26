#ifndef ELESTUDANTE_H_INCLUDED
#define ELESTUDANTE_H_INCLUDED
#include "Estudante.h"

class ElEstudante
{
private:
    Estudante* pAl;

public:
    ElEstudante();
    ~ElEstudante();

    ElEstudante* pProx;
    ElEstudante* pAnte;

    void setEstudante(Estudante* pa);
    Estudante* getEstudante();
    char* getNome();
};


#endif // ELESTUDANTE_H_INCLUDED
