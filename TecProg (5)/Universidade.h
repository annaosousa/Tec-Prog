#ifndef UNIVERSIDADE_H_INCLUDED
#define UNIVERSIDADE_H_INCLUDED
#include <stdio.h>
#include <list>
#include "Departamento.h"

using namespace std;

class Universidade
{
private:
    char nome [30];
    list <Departamento*> Dpto;
    int ctd;

public:
    Universidade (); //construtora
    ~Universidade (); //destrutora;

    void setNome( char* n); //pega o nome
    char* getNome(); //devolve o nome
    void setNomeDpto(Departamento* nome_dpto); //associa nome do departamento
    void imprimeDpto();
};


#endif // UNIVERSIDADE_H_INCLUDED
