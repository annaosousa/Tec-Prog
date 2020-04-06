#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
#include "Pessoa.h"
#include "Universidade.h"

class Professor:public Pessoa //herança, professor tem acesso a parte publica de pessoa
{
private:
    Universidade* pUniversidadeFiliado;                         //ponteiro que associa universidade filiada
    Departamento* pDepartamentoFiliado;                         //ponteiro que associa departamento filiado

public:
    Professor(int dia,int mes, int ano, const char* nome = ""); //associação de dados
    Professor();                                               //construtora
    ~Professor();                                             //destrutora

    void setUniversidadeFiliado(Universidade* pu);           //responsavel pela associacao a universidade
    void setDepartamento(Departamento* Dpto);                //responsavel pela associacao ao departamento
    void QualDepartamento();                                 //responsavel pela impressao do departamento (Professores)
    //void OndeTrabalha();
};




#endif // PROFESSOR_H_INCLUDED
