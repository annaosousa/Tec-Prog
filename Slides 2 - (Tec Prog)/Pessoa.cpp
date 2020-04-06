#include <iostream>
#include "Pessoa.h"
#include "Universidade.h"
#include "Principal.h"
#include <string.h>

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, char* nome)
{
    //inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa()
{
    //inicializa(0,0,0,"");
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
    std::cout <<"Nome e idade, sao reespectivamente, " << nomeP << " e " << idadeP << std::endl;
}

int Pessoa::informaIdade()
{
    return idadeP;
}

void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, char* nome)
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
