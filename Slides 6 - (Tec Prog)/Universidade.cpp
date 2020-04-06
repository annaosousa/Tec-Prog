#include <iostream>
#include <string.h>
#include "Universidade.h"
//#include "Principal.h"
//#include "Departamento.h"

using namespace std;

Universidade::Universidade (int na = 45,const char* n = ""):ObjLDepartamento(na,n)
{
    //int i;
    //for(i = 0; i < 50; i++)
      //  Dpto[i] = nullptr;
}

Universidade::~Universidade()
{

}

void Universidade::setNome(const char* n)
{
    strcpy (nome,n);
}

char* Universidade::getNome()
{
    return nome;
}

void Universidade::incluaDepartamento(Departamento* pa)
{
    pObjLDepartamento->incluaDepartamento();
}

void Universidade::listaDepartamento()
{
    pObjLDepartamento->listaDepartamento();
}

void Universidade::listaDepartamento2()
{
    pObjLDepartamento->listaDepartamento2();
}
