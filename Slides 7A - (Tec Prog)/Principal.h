#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED
#include <stdio.h>
#include "Pessoa.h"
#include "Professor.h"
#include "Estudante.h"
#include "ListaUniversidades.h"
#include "ListaDepartamentos.h"
#include "ListaDisciplinas.h"
class ListaDepartamento;

class Principal
{
private:
    int diaAt;               //objetos relacionados a data atual
    int mesAt;
    int anoAt;

    int cont_idDisc;         //contadoras
    int cont_idDepart;
    int cont_idEstudante;

    Universidade UTFPR;               //objetos relacionados as universidades
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAINF;               //objetos relacionados aos departamentos
    Departamento DAELN;
    Departamento FisicaPrinceton;
    Departamento MatematicaCambridge;

    Professor Simao;                 //objetos relacionados aos professores
    Professor Einstein;
    Professor Newton;

    Disciplina TecProg;             //objetos relacionados  as disciplinas
    Disciplina Calculo;
    Disciplina ED1;
    Disciplina Fisica;

    Estudante Anna;                  //objetos relacionados aos alunos
    Estudante Sara;
    Estudante Patrick;

    ListaUniversidades LUniversidades;    //objetos relacionados as listas
    ListaDepartamento LDepartamentos;
    ListaDisciplinas LDisciplinas;
    ListaAlunos LAlunos;


public:
    Principal();
    ~Principal();

    void Inicializa ();             //inicializacoes, referente as classes relacionadas a classe principal
    void InicializaUniversidades ();
    void InicializaDepartamentos ();
    void InicializaProfessores();
    void InicializaDisciplinas();
    void InicializaEstudantes();

    void executar();

    void CalcIdadeProfs ();     // calcula idade de professores e estudantes com referencia a sua data de nascimento e a data atual
    void CalcIdadeEstudantes ();
    void UnivOndeProfsTrabalham ();   //relaciona professores e estudantes em relacao a universidade que sao relacionados
    void UnivOndeEstuda();
    void DepOndeProfsTrabalham ();   //relaciona departamento onde professores trabalham
    void ListeDiscDeptos ();         //relaciona disciplinas por departamento
    void ListaEstudanteDisc();       //relaciona disciplinas aos estudantes

    void CadDisciplina();            //cadastro de disciplinas
    void CadDepartamento();          //cadastro de departamentos
    void CadUniversidade();          //cadastro de universidades
    void CadEstudante();             //cadastro de estudantes

    void GravarTudo();               //grava dados
    void GravarUniversidades();      //grava universidades
    void GravarDepartamentos();      //grava departamentos
    void GravarDisciplinas();        //grava disciplinas
    void GravarEstudantes();         //grava estudantes
    void GravarProfessores();        //grava professores

    void RecuperarTudo();              //recupera dados
    void RecuperarUniversidades();     //recupera universidades
    void RecuperarDepartamentos();     //recupera departamesntos
    void RecuperarDisciplinas();       //recupera disciplinas
    void RecuperarEstudantes();        //recupera estudantes
    void RecuperarProfessores();       //recupera professores

    void menu();                       //menu
    void menuCad();                    //menu para cadastro
    void menuExe();                    //menu para executar
    void menuGravar();                 //menu para gravar
    void menuRecuperar();              //menu para recuperar dados
};

#endif // PRINCIPAL_H_INCLUDED
