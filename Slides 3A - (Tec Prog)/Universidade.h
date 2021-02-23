#ifndef UNIVERSIDADE_H_INCLUDED
#define UNIVERSIDADE_H_INCLUDED
#include <stdio.h>
#include "Departamento.h"

class Universidade
{
private:
    char nome [30];
    Departamento *Dpto [50]; //objeto da classa departamento
public:
    Universidade (); //construtora
    ~Universidade (); //destrutora;

    void setNome(const char* n); //pega o nome
    char* getNome(); //devolve o nome
    void setNomeDpto(Departamento* nome_dpto, int ctd); //associa nome ao departamento
    void imprimeDpto(); //imprime dpto
};


#endif // UNIVERSIDADE_H_INCLUDED
