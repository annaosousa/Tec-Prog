#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
#include "Pessoa.h"
#include "Universidade.h"

class Professor:public Pessoa //herança, professor tem acesso a parte publica de pessoa
{
private:
    Universidade* pUniversidadeFiliado; //objeto
    Departamento* pDepartamentoFiliado;

public:
    Professor(int dia,int mes, int ano, const char* nome = ""); //associação de dados
    Professor(); //construtora
    ~Professor(); //destrutora

    void setUniversidadeFiliado(Universidade* pu);
    void setDepartamento(Departamento* Dpto);
    void QualDepartamento();
    void OndeTrabalha();
};

#endif // PROFESSOR_H_INCLUDED
