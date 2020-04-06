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

    Departamento* pDptoAssociado;   //ponteiro responsavel pelo departamento associado

    Aluno* pAlunoPrim;  //ponteiro responsavel pelo duplo encadeamento
    Aluno* pAlunoAtual; //ponteiro responsavel pelo duplo encadeamento

public:
    Disciplina (int n = 45, const char* ac = "");  //construtora
    ~Disciplina();                                 //destrutora;

    Disciplina* pProx;  //ponteiro responsavel pelo duplo encadeamento
    Disciplina* pAnt;   //ponteiro responsavel pelo duplo encadeamento

    void setId(int n);
    int getId();

    void setNome(char* n);
    char* getNome();

    void setDepartamento (Departamento* pdpto);   //informa o nome do departamento
    Departamento* getDepartamento();              //devolve o nome do departamento

    void incluaEstudante (Aluno* pa );            //inclui os estudantes
    void listeEstudante ( );                      //inclui estudantes da lista encadeada
    void listeEstudante2 ( );

};



#endif // DISCIPLINA_H_INCLUDED
