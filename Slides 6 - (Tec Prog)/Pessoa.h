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

    Departamento* pDepartamentoFiliado;

public:

    Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Pessoa ();                                    //função construtora, a qual não recebe parametro
    ~Pessoa();                                    //destrutora;

    void calcula_idade(int diaAt, int mesAt, int anoAt); // função para o calculo da idade com base no ano atual
    int informaIdade();                                 //pode ser substituido pelo getIdade();
    void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);// inicializa variaveis

    void setNome(const char* n);                       // recebe o nome
    char*getNome();                                    //retorna o nome

    char nomeP[30];

   // void setUniversidadeFiliado(Universidade* pu);// associa universidade
   // void setDepartamento(Departamento* Dpto); // associa departamento
   // void QualDepartamento();
   // void OndeTrabalha(); //associa local onde trabalha
   // void OndeEstuda(); //associa local onde estuda
   // Universidade* pUniversidadeFiliado;
};



#endif // PESSOA_H_INCLUDED
