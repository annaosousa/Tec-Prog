#ifndef ELDEPARTAMENTO_H_INCLUDED
#define ELDEPARTAMENTO_H_INCLUDED
#include "Departamento.h"

class ElDepartamento
{
private:
    Departamento* pDep;

public:
    ElDepartamento();
    ~ElDepartamento();

    ElDepartamento* pProx;
    ElDepartamento* pAnte;

    void setDepartamento(Departamento* pd);
    Departamento* getDepartamento();
    char* getNome();
};


#endif // ELDEPARTAMENTO_H_INCLUDED
