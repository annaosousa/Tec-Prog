#include <iostream>
#include <string.h>
#include "Pessoa.h"
#include "Universidade.h"
#include "Principal.h"

using namespace std;

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome)
{
    inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa()
{
    inicializa(0,0,0,"");
}

Pessoa::~Pessoa()
{

}

void Pessoa::calcula_idade(int diaAt, int mesAt, int anoAt)
{
    idadeP = anoAt - anoP;
        if (mesP > mesAt)
            idadeP--;
        else
            if (mesP == mesAt)
                if (diaP > diaAt)
                    idadeP--;
}

int Pessoa::informaIdade()
{
    std::cout <<"Nome e idade, sao reespectivamente, " << nomeP << " e " << idadeP << std::endl;
}

void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char* nome)
{
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idadeP = -1;
    strcpy(nomeP,nome);

}

void Pessoa::setUniversidadeFiliado(Universidade* pu)
{
    pUniversidadeFiliado = pu;
}

void Pessoa::OndeTrabalha()
{
    std::cout << nomeP << " trabalha para " << pUniversidadeFiliado->getNome() << std::endl;
}

void Pessoa::setDepartamento(Departamento* Dpto)
{
    pDepartamentoFiliado = Dpto;
}

void Pessoa::QualDepartamento()
{
    std::cout << nomeP << " trabalha na " << pUniversidadeFiliado->getNome() << " no departamento " << pDepartamentoFiliado->getNome() << std::endl;
}
