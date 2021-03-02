#ifndef UNIVERSIDADE_H_INCLUDED
#define UNIVERSIDADE_H_INCLUDED
#include <stdio.h>
#include "Lista.h"
#include "Departamento.h"

using namespace std;

class Universidade
{
private:
    char nome [30];

    Lista<Departamento*> ObjLDepartamentos;

public:
    Universidade (); //construtora
    ~Universidade (); //destrutora;

    void setNome( const char* n); //pega o nome
    char* getNome(); //devolve o nome

    void incluaDepartamentos(Departamento* pd);
    void listeDepartamentos();
    void listeDepartamentos2();
};


#endif // UNIVERSIDADE_H_INCLUDED
