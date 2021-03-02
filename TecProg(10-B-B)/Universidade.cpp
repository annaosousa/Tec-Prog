#include <iostream>
#include <string.h>
#include "Universidade.h"
#include "Elemento.h"

using namespace std;

Universidade::Universidade()
{

}

Universidade::~Universidade()
{

}

void Universidade::setNome( const char* n)
{
    strcpy(nome,n);
}

char* Universidade::getNome()
{
    return nome;
}

void Universidade::incluaDepartamentos(Departamento* pd)
{
    ObjLDepartamentos.incluir(pd);
}

void Universidade::listeDepartamentos()
{
    Elemento<Departamento*>* elem = ObjLDepartamentos.getPrimeiro();

    while(nullptr != elem)
    {
        Departamento* obj = (Departamento*)elem->getInfo();

        std::cout << obj->getNome() << std::endl;
    }
    elem = elem->getProximo();
}

void Universidade::listeDepartamentos2()
{
    Elemento<Departamento*>* elem = ObjLDepartamentos.getUltimo();

    while(nullptr != elem)
    {
        Departamento* obj = (Departamento*)elem->getInfo();
        std::cout << obj->getNome() << std::endl;
    }
    elem = elem->getAnterior();
}
