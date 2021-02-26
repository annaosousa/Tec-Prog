#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <stdio.h>
class Estudante;
class Professor;

class Pessoa
{
protected:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];
    int id;

public:
    Pessoa(int diaNa, int mesNa, int anoNa, char* nome = "");
    Pessoa (); //fun��o construtora, a qual n�o recebe parametro
    ~Pessoa();

    void calcula_idade(int diaAt, int mesAt, int anoAt); // fun��o para o calculo da idade com base no ano atual
    int informaIdade(); //pode ser substituido pelo getIdade();
    void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);//

    void setNome(char* n);
    char* getNome();

    void setId(int i);
    int getId();
};


#endif // PESSOA_H_INCLUDED
