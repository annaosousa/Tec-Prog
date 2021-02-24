#include <iostream>
#include <string.h>
#include "Estudante.h"
#include "Departamento.h"
#include "Pessoa.h"

Estudante::Estudante(int dia,int mes, int ano, const char* nome):Pessoa( dia, mes, ano, nome)
{
    pUniversidadeFiliado = nullptr;
}

Estudante::Estudante():Pessoa()
{
    pUniversidadeFiliado = nullptr;
}

Estudante::~Estudante()
{
    pUniversidadeFiliado = nullptr;
}

void Estudante::setRA(int ra)
{
    RA = ra;
}
int Estudante::getRA()
{
    return RA;
}
void Estudante::setUniversidadeFiliado(Universidade* pu)
{
    pUniversidadeFiliado = pu;
}

void Estudante::OndeEstuda()
{
    std::cout << nomeP <<" estuda na "<< pUniversidadeFiliado->getNome() << " e possui RA igual a "<< RA <<std::endl;
}
