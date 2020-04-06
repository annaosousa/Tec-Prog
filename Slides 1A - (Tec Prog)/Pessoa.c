#include "Pessoa.h"

int calcula_idade(struct Pessoa p, int ano)
{
    int idade = ano - p.ano;

    return idade;
}
