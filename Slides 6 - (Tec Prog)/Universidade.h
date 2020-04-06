#ifndef UNIVERSIDADE_H_INCLUDED
#define UNIVERSIDADE_H_INCLUDED
#include <stdio.h>
//#include "Departamento.h"
#include "ListaDepartamento.h"
#include "ElUniversidade.h"

class Departamento;

using namespace std;

class Universidade
{
private:
    char nome [30];
    ListaDepartamento ObjLDepartamento;           //objeto da lista departamento

    //Departamento *Dpto [50];
public:
    Universidade (int na = 45,const char* n = ""); //construtora
    ~Universidade ();                             //destrutora;

    void setNome(const char* n);                     //pega o nome
    char* getNome();                                 //devolve o nome

    //void incluaDepartamento(Departamento* pa);
    //void listaDepartamento();
    //void listaDepartamento2();

};



#endif // UNIVERSIDADE_H_INCLUDED
