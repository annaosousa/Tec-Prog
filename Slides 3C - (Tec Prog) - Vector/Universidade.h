#ifndef UNIVERSIDADE_H_INCLUDED
#define UNIVERSIDADE_H_INCLUDED
#include <stdio.h>
#include <vector>
#include "Departamento.h"

using namespace std;

class Universidade
{
private:
    char nome [30];
    vector < Departamento* > Dpto;//objeto da classa departamento
    int ctd;

public:
    Universidade (); //construtora
    ~Universidade (); //destrutora;

    void setNome(const char* n); //pega o nome
    char* getNome(); //devolve o nome
    void setNomeDpto(Departamento* nome_dpto);
    void imprimeDpto();
};


#endif // UNIVERSIDADE_H_INCLUDED
