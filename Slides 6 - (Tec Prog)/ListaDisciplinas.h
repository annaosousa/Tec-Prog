#ifndef LISTADISCIPLINAS_H_INCLUDED
#define LISTADISCIPLINAS_H_INCLUDED
#include "Disciplina.h"
#include "ElDisciplina.h"

class ListaDisciplinas
{
private:
    int numero_disc;
	int cont_disc;
    char nome[150];

    ElDisciplina* pElDisciplinaPrim;        //ponteiro responsavel pelo duplo encadeamento
	ElDisciplina* pElDisciplinaAtual;       //ponteiro responsavel pelo duplo encadeamento

public:
    ListaDisciplinas(int nd = 50, const char* n = "");       //construtora
    ~ListaDisciplinas();                                     //destrutora;

    void setNome(char* n);

    void incluaDisciplinas(ElDisciplina* pd);          //inclui disciplinas
    void listeDisciplinas();                           //lista disciplinas em filas encadeadas
    void listeDisciplinas2();
};


#endif // LISTADISCIPLINAS_H_INCLUDED
