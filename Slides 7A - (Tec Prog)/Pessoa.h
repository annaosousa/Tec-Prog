#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <stdio.h>
#include "Universidade.h"
class Departamento;
class Universidade;

class Pessoa
{
private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;

    //Universidade* pUniversidadeFiliado; //objeto
    Departamento* pDepartamentoFiliado;

public:

    Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Pessoa (int i = 40); //função construtora, a qual não recebe parametro
    ~Pessoa();           //destrutora

    void calcula_idade(int diaAt, int mesAt, int anoAt); // função para o calculo da idade com base no ano atual
    int informaIdade();                                 //pode ser substituido pelo getIdade();
    void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);// inicializa variaveis

    void setNome(const char* n); // recebe o nome
    char*getNome();              //retorna o nome
    char nomeP[30];

    //Universidade* pUniversidadeFiliado;
    //void setUniversidadeFiliado(Universidade* pu);
    //void setDepartamento(Departamento* Dpto);
    //void QualDepartamento();
    //void OndeTrabalha();
    //void OndeEstuda();

};



#endif // PESSOA_H_INCLUDED
