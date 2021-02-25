#include <iostream>
#include <string.h>
#include "Estudante.h"


Estudante::Estudante(int dia,int mes, int ano, const char* nome):Pessoa( dia, mes, ano, nome)
{

}

Estudante::Estudante():Pessoa()
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
void Estudante::setDepartamento(Departamento* d)
{
    DeptoAssociado = d;
}

Departamento* Estudante::getDepartamento()
{
    return DeptoAssociado;
}
