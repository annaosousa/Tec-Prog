#ifndef UNIVERSIDADE_H_INCLUDED
#define UNIVERSIDADE_H_INCLUDED
#include <stdio.h>
#include "Departamento.h"
#include "ListaDepartamentos.h"
#include "ElUniversidade.h"
class ListaDepartamento;
class Departamento;

using namespace std;

class Universidade
{
private:
    char nome [30];
    ListaDepartamento *ObjLDepartamento;

    //Departamento *Dpto [50]; //objeto da classa departamento
public:
    Universidade ();                                 //construtora
    ~Universidade ();                                //destrutora;

    void setNome(const char* n);                    //pega o nome
    char* getNome();                                //devolve o nome

    //void incluaDepartamento(Departamento* pa);
    //void listaDepartamento();
    //void listaDepartamento2();

};


#endif // UNIVERSIDADE_H_INCLUDED
