#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED
#include <stdio.h>
#include "Pessoa.h"
#include "Universidade.h"
#include "Professor.h"
#include "Estudante.h"

class Principal
{
private:
    int diaAt;
    int mesAt;
    int anoAt;

    Universidade UTFPR; //objetos
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAINF;
    Departamento DAELN;
    Departamento FisicaPrinceton;
    Departamento MatematicaCambridge;

    Professor Simao;
    Professor Einstein;
    Professor Newton;

    Estudante Anna;
    Estudante Sara;
    Estudante Patrick;

public:
    Principal();
    ~Principal();
    void executar();
};


#endif // PRINCIPAL_H_INCLUDED
