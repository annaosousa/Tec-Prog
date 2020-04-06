#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
#include "Pessoa.h"
#include "Universidade.h"

class Professor:public Pessoa //heran�a, professor tem acesso a parte publica de pessoa
{
private:
    Universidade* pUniversidadeFiliado; //objeto
    Departamento* pDepartamentoFiliado;

    //Disciplina* pDisciplPrim;
    //Disciplina* pDisciplAtual;

public:
    Professor(int dia,int mes, int ano, const char* nome = ""); //associa��o de dados
    Professor();                                               //construtora
    ~Professor();                                             //destrutora

    void setUniversidadeFiliado(Universidade* pu);          //relaciona universidade ao professor
    void setDepartamento(Departamento* Dpto);               //relaciona departamento ao professor
    void QualDepartamento();
   // void OndeTrabalha();
};



#endif // PROFESSOR_H_INCLUDED
