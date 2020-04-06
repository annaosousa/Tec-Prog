#ifndef DISCIPLINA_H_INCLUDED
#define DISCIPLINA_H_INCLUDED
#include "Departamento.h"
#include "Estudante.h"
#include "Aluno.h"
#include "ListaAlunos.h"
#include "ElDepartamento.h"
class Departamento;
class Estudante;
class ListaAlunos;
class Aluno;


class Disciplina
{
private:
    char nome[150];
    char area_conhecimento[150];

    Departamento* pDptoAssociado;
    Estudante* pe;
    ListaAlunos ObjLAlunos;

    // int id;
    // int numero_estudantes;
	//int cont_estudantes;
    //Aluno* pAlunoPrim;       //ponteiro responsavel pelo duplo encadeamento
    //Aluno* pAlunoAtual;      //ponteiro responsavel pelo duplo encadeamento

public:
    Disciplina (int n = 45, char* ac = "");    //construtora
    ~Disciplina();                             //destrutora;

    Disciplina* pProx;      //ponteiro responsavel pelo duplo encadeamento
    Disciplina* pAnt;       //ponteiro responsavel pelo duplo encadeamento

    void setNome(char* n);
    char* getNomeDisciplina();
    char* getNome();

    //void setDepartamento (Departamento* pdpto);
    //Departamento* getDepartamento();

    //void incluaEstudante(Estudante* pa);
    //void listeEstudante();
    //void listeEstudante2();

};



#endif // DISCIPLINA_H_INCLUDED
