#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <stdio.h>
#include "Universidade.h"

class Pessoa
{
private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];

    Universidade* pUniversidadeFiliado; //objeto

public:
    Pessoa(int diaNa, int mesNa, int anoNa, char* nome = "");
    Pessoa (); //função construtora, a qual não recebe parametro

    void calcula_idade(int diaAt, int mesAt, int anoAt); // função para o calculo da idade com base no ano atual
    int informaIdade(); //pode ser substituido pelo getIdade();
    void inicializa(int diaNa, int mesNa, int anoNa, char* nome);// inicializações das variaveis

    void setUniversidadeFiliado(Universidade* pu); //associa universidade
    void OndeTrabalha(); //associa trabalho
};


#endif // PESSOA_H_INCLUDED
