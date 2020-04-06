#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
#include "Pessoa.h"
#include "Universidade.h"

class Professor:public Pessoa //herança, professor tem acesso a parte publica de pessoa
{
private:
    Universidade* pUniversidadeFiliado;  //ponteiro que associa universidade filiada
    Departamento* pDepartamentoFiliado;  //ponteiro que associa departamento filiado

    Disciplina* pDisciplPrim;       //ponteiro responsavel pelo duplo encadeamento
    Disciplina* pDisciplAtual;      //ponteiro responsavel pelo duplo encadeamento
    char ac[40];


public:
    Professor(int dia,int mes, int ano, const char* nome = ""); //associação de dados
    Professor(); //construtora
    ~Professor(); //destrutora

    void setUniversidadeFiliado(Universidade* pu);            //informa universidade filiado ao professor
    void setDepartamento(Departamento* Dpto);                 //informa departamento filiado ao professor
    void QualDepartamento();                                  //associa o departamento
    //void OndeTrabalha();
};




#endif // PROFESSOR_H_INCLUDED
