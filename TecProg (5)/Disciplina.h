#ifndef DISCIPLINA_H_INCLUDED
#define DISCIPLINA_H_INCLUDED
#include "ElEstudante.h"
#include "Departamento.h"

class Disciplina
{
private:
    int id;
    char nome[150];
    char area_conhecimento[150];
    int numero_estudantes;
    int cont_estudantes;

    Departamento* pDeptoAssociado;

    ElEstudante* pElEstudantePrim;
    ElEstudante* pElEstudanteAtual;

public:
    Disciplina (int na = 45, char* ac="");
    ~Disciplina();

    Disciplina* pProx;
    Disciplina* pAnte;

    void setId(int n);
    int getId();

    void setNome(char* n);
    char* getNome();

    void setDepartamento (Departamento* pdpto);
    Departamento* getDepartamento();

    void incluaEstudantes (Estudante* pa);
    void listeEstudantes ();
    void listeEstudantes2 ();
};


#endif // DISCIPLINA_H_INCLUDED
