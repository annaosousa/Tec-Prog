#include <iostream>
#include <string.h>
#include "Universidade.h"

using namespace std;

Universidade::Universidade():
    ObjLDepartamentos(-1, "")
{
    //pObjLDepartamentos = new ListaDepartamentos( -1,  "");
}

Universidade::~Universidade()
{
    /*if (pObjLDepartamentos)
    {
        delete pObjLDepartamentos;
    }*/
}

void Universidade::setNome( const char* n)
{
    strcpy (nome,n);
}

char* Universidade::getNome()
{
    return nome;
}

void Universidade::incluaDepartamentos(Departamento* pd)
{
    ObjLDepartamentos.incluaDepartamentos(pd);
}

void Universidade::listeDepartamentos()
{
    ObjLDepartamentos.listeDepartamentos();
}

void Universidade::listeDepartamentos2()
{
    ObjLDepartamentos.listeDepartamentos2();
}
