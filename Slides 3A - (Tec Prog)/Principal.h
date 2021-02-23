#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED
#include <stdio.h>
#include "Pessoa.h"
#include "Universidade.h"

class Principal
{
private:
    Pessoa Simao;
    Pessoa Einstein;
    Pessoa Newton;

    int diaAt;
    int mesAt;
    int anoAt;

    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAINF;
    Departamento DAELN;
    Departamento FisicaPrinceton;
    Departamento MatematicaCambridge;

public:
    Principal();
    ~Principal();
    void executar();
};


#endif // PRINCIPAL_H_INCLUDED
