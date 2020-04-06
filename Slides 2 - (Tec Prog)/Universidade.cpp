#include <iostream>
#include <string.h>
#include "Universidade.h"
#include "Principal.h"

using namespace std;

Universidade::Universidade (char* n)
{
    strcpy (nome,n);
}

Universidade::Universidade()
{

}
Universidade::~Universidade()
{

}

void Universidade::setNome(char* n)
{
    strcpy (nome,n);
}

char* Universidade::getNome()
{
    return nome;
}
