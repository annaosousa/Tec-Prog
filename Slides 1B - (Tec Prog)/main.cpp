#include <iostream>
#include "Pessoa.h"

//using namespace std;

int main()
{
    Pessoa Einstein (14, 3, 1879);
    Pessoa Newton (4, 1 , 1643);

    Einstein.calcula_idade(2, 3, 2020);
    Newton.calcula_idade(2, 3, 2020);

    printf("A idade de Einstein e Newton, sao reespectivamente,%d e %d",Einstein.informaIdade(),Newton.informaIdade());

    return 0;
}
