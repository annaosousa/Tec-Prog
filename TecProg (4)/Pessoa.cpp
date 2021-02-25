#include <iostream>
#include <string.h>
#include "Pessoa.h"

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
    std::cout <<"Nome e idade, sao reespectivamente, " << nomeP << " e " << idadeP << std::endl;
}

int Pessoa::informaIdade()
{
    return idadeP;
}

void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char* nome)
{
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idadeP = -1;
    strcpy(nomeP,nome);

}

char* Pessoa::getNome()
{
    return nomeP;
}
