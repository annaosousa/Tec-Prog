#include <stdio.h>
#include <stdlib.h>
#include "Pessoa.h"

int main()
{
    struct Pessoa Einstein, Newton;

    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;

    Newton.dia = 4;
    Newton.mes = 1;
    Newton.ano = 1643;

    Einstein.idade = calcula_idade(Einstein, 2020);
    Newton.idade = calcula_idade(Newton, 2020);

    printf("A idadade de Einstein e Newton, sao reespectivamente,%d e %d",Einstein.idade,Newton.idade);
}
