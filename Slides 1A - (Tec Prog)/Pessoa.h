#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

struct Pessoa
{
    int dia;
    int mes;
    int ano;
    int idade;
};

int calcula_idade(struct Pessoa p, int ano);

#endif // PESSOA_H_INCLUDED
