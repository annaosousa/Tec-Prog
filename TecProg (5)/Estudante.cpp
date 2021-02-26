#include <iostream>
#include <string.h>
#include "Estudante.h"

Estudante::Estudante(int dia,int mes, int ano, char* nome):
    Pessoa( dia, mes, ano, nome)
{

}

Estudante::Estudante(int i):
    Pessoa()
{
    id = i;
    RA = 0;

}

Estudante::Estudante():
    Pessoa()
{

}

Estudante::~Estudante()
{

}

void Estudante::setRA(int ra)
{
    RA = ra;
}
int Estudante::getRA()
{
    return RA;
}
void Estudante::setDepartamento(Departamento* pd)
{
    DeptoAssociado = pd;
}

Departamento* Estudante::getDepartamento()
{
    return DeptoAssociado;
}

void Estudante::setId(int i)
{
    id = i;
}

int Estudante::getid()
{
    return id;
}
