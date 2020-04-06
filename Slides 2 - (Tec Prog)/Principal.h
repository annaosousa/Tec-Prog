#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED
#include <stdio.h>
#include "Pessoa.h"
#include "Universidade.h"

class Principal
{
private:
    Pessoa Simao;  //declaração de objetos
    Pessoa Einstein;
    Pessoa Newton;

    int diaAt;
    int mesAt;
    int anoAt;

    Universidade UTFPR;

public:
    Principal();
    ~Principal();
    void executar();
};


#endif // PRINCIPAL_H_INCLUDED
