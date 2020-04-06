#include <iostream>
#include <string.h>
#include "Estudante.h"
#include "Pessoa.h"

Estudante::Estudante(int i):Pessoa(i), RA(0)
{
    RA = -1;
   // pUniversidadeFiliado = nullptr;
}

Estudante::~Estudante()
{
    RA = -1;
    //pUniversidadeFiliado = nullptr;
}

void Estudante::setRA(int ra)
{
    RA = ra;
}
int Estudante::getRA()
{
    return RA;
}

/*void Estudante::setDepartamento(Departamento* pd)
{
    pDeptoAssociado = pd;
}

Departamento* Estudante::getDepartamento()
{
    return pDeptoAssociado;
}
*/
/*Estudante::Estudante(int dia,int mes, int ano, const char* nome):Pessoa( dia, mes, ano, nome)
{
    pUniversidadeFiliado = nullptr;
}*/
