#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED
#include <stdio.h>
#include "Universidade.h"
#include "Disciplina.h"
#include "Professor.h"
#include "Estudante.h"

class Principal
{
private:

    int diaAt;
    int mesAt;
    int anoAt;

    Universidade UTFPR;  //objetos
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAINF;
    Departamento DAELN;
    Departamento FisicaPrinceton;
    Departamento MatematicaCambridge;

    Professor Simao;
    Professor Einstein;
    Professor Newton;

    Estudante Anna;
    Estudante Sara;
    Estudante Patrick;

    Disciplina Calculo;
    Disciplina Fisica;
    Disciplina Programacao;

public:
    Principal();
    ~Principal();

    void Inicializa ( );
    void InicializaUniversidades ( );
    void InicializaDepartamentos ( );
    void InicializaProfessores ( );
    void InicializaDisciplinas ( );
    void InicializaEstudantes ();

    void executar();

    void CalcIdadeProfs ( );
    void UnivOndeProfsTrabalham ( );
    void DepOndeProfsTrabalham ( );
    void ConhecPessoa();
    void ListaEstudanteDisc();
    void ListeDiscDeptos ( );
};


#endif // PRINCIPAL_H_INCLUDED
