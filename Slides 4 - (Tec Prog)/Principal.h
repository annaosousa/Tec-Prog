#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED
#include <stdio.h>
#include "Pessoa.h"
#include "Universidade.h"
#include "Professor.h"
#include "Estudante.h"
#include "Disciplina.h"
class Disciplina;

class Principal
{
private:
    int diaAt;           //objetos relacionados a data atual
    int mesAt;
    int anoAt;

    Universidade UTFPR; //objetos relacionados as universidades
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAINF;   //objetos relacionados aos departamentos
    Departamento DAELN;
    Departamento FisicaPrinceton;
    Departamento MatematicaCambridge;

    Professor Simao;    //objetos relacionados aos professores
    Professor Einstein;
    Professor Newton;

    Estudante Anna;    //objetos relacionados aos alunos
    Estudante Sara;
    Estudante Patrick;

    Disciplina TecProg;  //objetos relacionados  as disciplinas
    Disciplina Calculo;
    Disciplina ED1;
    Disciplina Fisica;

public:
    Principal();           //construtora
    ~Principal();          //destrutora

    void Inicializa ();    //inicializacoes, referente as classes relacionadas a classe principal
    void InicializaUniversidades ();
    void InicializaDepartamentos ();
    void InicializaProfessores();
    void InicializaDisciplinas();
    void InicializaEstudantes();

    void executar();

    void CalcIdadeProfs();            // calcula idade de professores e estudantes com referencia a sua data de nascimento e a data atual
    void CalcIdadeEstudantes();
    void UnivOndeProfsTrabalham();   //relaciona professores e estudantes em relacao a universidade que sao relacionados
    void UnivOndeEstuda();
    void DepOndeProfsTrabalham();   //relaciona departamento onde professores trabalham
    void ListeDiscDeptos();        //relaciona disciplinas por departamento
    void ListaEstudanteDisc();     //relaciona disciplinas aos estudantes
};



#endif // PRINCIPAL_H_INCLUDED
