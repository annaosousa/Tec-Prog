#ifndef UNIVERSIDADE_H_INCLUDED
#define UNIVERSIDADE_H_INCLUDED
#include <stdio.h>

class Universidade
{
private:
    char nome [30];

public:
    Universidade (char* n); //construtora
    Universidade();
    ~Universidade (); //destrutora;

    void setNome(char* n); //pega o nome
    char* getNome(); //devolve o nome
};

#endif // UNIVERSIDADE_H_INCLUDED
