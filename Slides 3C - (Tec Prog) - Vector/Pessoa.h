#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <stdio.h>
class Estudante;
class Professor;

class Pessoa
{
private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;

public:
    Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Pessoa (); //fun��o construtora, a qual n�o recebe parametro
    ~Pessoa(); //destrutora

    void calcula_idade(int diaAt, int mesAt, int anoAt); // fun��o para o calculo da idade com base no ano atual
    int informaIdade(); //pode ser substituido pelo getIdade();
    void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);//

    void setNome(const char* n); //associa nome
    char*getNome();

    char nomeP[30];
};


#endif // PESSOA_H_INCLUDED
