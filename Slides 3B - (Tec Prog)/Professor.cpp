#include <iostream>
#include <string.h>
#include "Professor.h"
#include "Pessoa.h"

Professor::Professor(int dia, int mes, int ano, const char* nome):Pessoa( dia, mes, ano, nome)
{
    pUniversidadeFiliado = nullptr;
    pDepartamentoFiliado = nullptr;
}

Professor::Professor():Pessoa()
{
    pUniversidadeFiliado = nullptr;
    pDepartamentoFiliado = nullptr;
}

Professor::~Professor()
{
    pUniversidadeFiliado = nullptr;
    pDepartamentoFiliado = nullptr;
}

void Professor::setUniversidadeFiliado(Universidade* pu)
{
    pUniversidadeFiliado = pu;
}

void Professor::setDepartamento(Departamento* Dpto)
{
    pDepartamentoFiliado = Dpto;
}

void Professor::OndeTrabalha()
{
    std::cout << nomeP <<" trabalha para "<< pUniversidadeFiliado->getNome() << std::endl;
}

void Professor::QualDepartamento()
{
    std::cout << nomeP << "trabalha para "<< pUniversidadeFiliado->getNome()<< " no departamento "<<pDepartamentoFiliado->getNome() << std::endl;
}
