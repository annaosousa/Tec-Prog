#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED
#include <stdio.h>
#include "Elemento.h"
#include "Lista.h"
#include "Departamento.h"
#include "Disciplina.h"
#include "Universidade.h"
#include "Professor.h"
#include "Estudante.h"

class Principal
{
private:

    int diaAt;
    int mesAt;
    int anoAt;

    int cont_idDisc;
    int cont_idDep;
    int cont_idEst;

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

    Lista<Universidade> LUniversidades;
    Lista<Departamento> LDepartamentos;
    Lista<Disciplina> LDisciplinas;
    Lista<Estudante> LEstudantes;

    char const* const arqUniversidades;
    char const* const arqDepartamentos;
    char const* const arqDisciplinas;
    char const* const arqEstudantes;

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

    void CadDisciplina();
    void CadDepartamento();
    void CadUniversidade();
    void CadEstudante();

    void GravarTudo ();
    void GravarUniversidades ();
    void GravarDepartamentos ();
    void GravarDisciplinas ();
    void GravarEstudantes();
    void GravarProfessores ();

    void RecuperarTudo ();
    void RecuperarUniversidades ();
    void RecuperarDepartamentos ();
    void RecuperarDisciplinas ();
    void RecuperarEstudantes();
    void RecuperarProfessores ();

    void Menu();
    void MenuCad();
    void MenuExe();
    void MenuGravar();
    void MenuRecuperar();
};


#endif // PRINCIPAL_H_INCLUDED
