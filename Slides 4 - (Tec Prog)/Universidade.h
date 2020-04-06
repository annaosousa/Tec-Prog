#ifndef UNIVERSIDADE_H_INCLUDED
#define UNIVERSIDADE_H_INCLUDED
#include <stdio.h>
#include "Departamento.h"

using namespace std;

class Universidade
{
private:
    char nome [30];
    Departamento *Dpto [50]; //objeto da classa departamento

public:
    Universidade ();            //construtora
    ~Universidade ();          //destrutora;

    void setNome(const char* n);                        //responsavel pelo o nome
    char* getNome();                                    //devolve o nome
    void setNomeDpto(Departamento* nome_dpto, int ctd); //responsavel pelo nome do departamento
   // void imprimeDpto();
};



#endif // UNIVERSIDADE_H_INCLUDED
