#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa(int dia, int mes, int ano)
{
    diaP = dia;
    mesP = mes;
    anoP = ano;
    idadeP = 0;
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
    return idadeP;
}
