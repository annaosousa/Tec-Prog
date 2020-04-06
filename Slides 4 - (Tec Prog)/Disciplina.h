#ifndef DISCIPLINA_H_INCLUDED
#define DISCIPLINA_H_INCLUDED
#include "Departamento.h"
#include "Estudante.h"
#include "Aluno.h"

class Disciplina
{
private:
    int id;
    char nome[150];
    char area_conhecimento[150];
    int numero_alunos;
	int cont_alunos;

    Departamento* pDptoAssociado; //ponteiro responsavel pelo departamento associado

    Estudante* pEstudantePrim;  //ponteiro responsavel pelo duplo encadeamento
	Estudante* pEstudanteAtual;  //ponteiro responsavel pelo duplo encadeamento

public:
    Disciplina (int na, const char* ac = ""); //associacao de dados
    Disciplina();  //cronstrutora
    ~Disciplina();  //destrutora

    Disciplina* pProx;  //ponteiro responsavel pelo duplo encadeamento
    Disciplina* pAnt;  //ponteiro responsavel pelo duplo encadeamento

    void setId(int n);                               //informa o Id
    int getId();                                     //devolve o Id

    void setNome(char* n);                           //informa o nome
    char* getNome();                                 //devolve o nome

    void setDepartamento (Departamento* pdpto);      //informa o departamento
    Departamento* getDepartamento();                 //devolve o departamento

    void incluaEstudante(Estudante* pa);  //inclui os estudantes
    void listeEstudante();                //lista estudantes
    void listeEstudante2();
};


#endif // DISCIPLINA_H_INCLUDED
