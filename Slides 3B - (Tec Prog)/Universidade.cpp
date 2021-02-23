#include <iostream>
#include <string.h>
#include "Universidade.h"
#include "Departamento.h"

using namespace std;

Universidade::Universidade ()
{
    for(int i = 0; i < 50; i++)
        Dpto[i] = nullptr;
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

void Universidade::setNomeDpto(Departamento* nome_dpto, int ctd)
{
    Dpto[ctd] = nome_dpto;
}

void Universidade::imprimeDpto()
{
    for(int i = 0; i < 50; i++)
        if(Dpto[i] != nullptr)
            std::cout << Dpto[i]->getNome() << std::endl;
}
