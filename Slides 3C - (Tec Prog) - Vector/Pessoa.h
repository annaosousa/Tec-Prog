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

    Universidade* pUniversidadeFiliado; //objetos
    Departamento* pDepartamentoFiliado;

public:
    Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Pessoa (); //função construtora, a qual não recebe parametro
    ~Pessoa(); //destrutora

    void calcula_idade(int diaAt, int mesAt, int anoAt); // função para o calculo da idade com base no ano atual
    int informaIdade(); //pode ser substituido pelo getIdade();
    void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);//

    void setNome(const char* n); //associa nome
    char*getNome();

    void setUniversidadeFiliado(Universidade* pu); //associa universidade
    void setDepartamento(Departamento* Dpto); //associa departamento
    void QualDepartamento(); //indica o departamento
    void OndeTrabalha(); //local onde trabalha
    char nomeP[30];
    void OndeEstuda(); //local onde estuda
};


#endif // PESSOA_H_INCLUDED
