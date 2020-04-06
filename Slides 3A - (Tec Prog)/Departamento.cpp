#include <iostream>
#include "Departamento.h"
#include <string.h>

using namespace std;

Departamento::Departamento()
{
    strcpy(Dpto,"");
}

Departamento::~Departamento()
{

}

void Departamento::setNome(const char* n)
{
	strcpy(Dpto, n);
}

char* Departamento::getNome()
{
	return Dpto;
}
