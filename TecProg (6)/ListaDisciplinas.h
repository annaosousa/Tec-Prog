#ifndef LISTADISCIPLINAS_H_INCLUDED
#define LISTADISCIPLINAS_H_INCLUDED
#include "ElDisciplina.h"
#include "Disciplina.h"

class ListaDisciplinas
{
private:
    int cont_disciplinas;
    int numero_disciplinas;

    char nome[150];

    ElDisciplina* pElDisciplinaPrim;
    ElDisciplina* pElDisciplinaAtual;

public:
    ListaDisciplinas(int nd = 10000, const char* n = "");
    ~ListaDisciplinas();

    void setNome(const char* n);
    void incluaDisciplinas (Disciplina* pd);

    void listeDisciplinas ();
    void listeDisciplinas2 ();
};

#endif // LISTADISCIPLINAS_H_INCLUDED
