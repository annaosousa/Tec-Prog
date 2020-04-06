#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <stdio.h>

class Pessoa
{
private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;

public:
    Pessoa(int dia, int mes, int ano); //passagem de parametros
    void calcula_idade(int diaAt, int mesAt, int anoAt); //calcula a idade
    int informaIdade(); //retorna a idade
};


#endif // PESSOA_H_INCLUDED
