#include <iostream>
#include <string.h>
#include <vector>
#include "Universidade.h"
#include "Departamento.h"

using namespace std;

Universidade::Universidade ()
{
  list < Departamento* > ::iterator iterator;

    for(iterator = Dpto.begin(); iterator != Dpto.end(); iterator++)
         *iterator;
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

void Universidade::setNomeDpto(Departamento* nome_dpto)
{
    Dpto.push_back(nome_dpto);
}

void Universidade::imprimeDpto()
{
    list < Departamento* > ::iterator iterator;

    for(iterator = Dpto.begin(); iterator != Dpto.end(); iterator++)
        std::cout << (*iterator) -> getNome() <<std::endl;
}
