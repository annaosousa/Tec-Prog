#ifndef ELDEPARTAMENTO_H_INCLUDED
#define ELDEPARTAMENTO_H_INCLUDED
#include "Departamento.h"

class ElDepartamento
{
private:
    Departamento* pDepartamento;

public:
    ElDepartamento();      //construtora
    ~ElDepartamento();     //destrutora;

    ElDepartamento *pProx;        //ponteiro responsavel pelo duplo encadeamento
    ElDepartamento *pAnt;         //ponteiro responsavel pelo duplo encadeamento

    void setDepartamento(Departamento* pdpto);      //informa o departamento
    Departamento* getDepartamento();                  //devolve o departamento informado
    char* getNome();
};


#endif // ELDEPARTAMENTO_H_INCLUDED
