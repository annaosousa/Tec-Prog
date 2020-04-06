#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
#include "Pessoa.h"
#include "Universidade.h"

class Professor:public Pessoa
{
private:
    Universidade* pUniversidadeFiliado; //objetos
    Departamento* pDepartamentoFiliado;

public:
    Professor(int dia,int mes, int ano, const char* nome = "");
    Professor(); //construtora
    ~Professor(); //destrutora

    void setUniversidadeFiliado(Universidade* pu); //associa universidade
    void setDepartamento(Departamento* Dpto); //associa departamento
    void QualDepartamento();
    void OndeTrabalha();
};

#endif // PROFESSOR_H_INCLUDED
