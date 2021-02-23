#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <stdio.h>
#include "Universidade.h"

class Pessoa
{
private:
    int diaP, mesP, anoP, idadeP;
    char nomeP[30];

    Universidade* pUniversidadeFiliado; //objeto
    Departamento* pDepartamentoFiliado;

public:
    Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Pessoa (); //função construtora, a qual não recebe parametro
    ~Pessoa(); //destrutora

    void calcula_idade(int diaAt, int mesAt, int anoAt); // função para o calculo da idade com base no ano atual
    int informaIdade(); //pode ser substituido pelo getIdade();
    void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);// inicializa variaveis

    void setNome(char* n); // relaciona nome
    char*getNome(); //imprime nome

    void setUniversidadeFiliado(Universidade* pu); //associa universidade
    void setDepartamento(Departamento* Dpto); //associa departamento
    void QualDepartamento(); // imprime o deparatmento assoiado
    void OndeTrabalha(); //imprime o local assoiado
};


#endif // PESSOA_H_INCLUDED
