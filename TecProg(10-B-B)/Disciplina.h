#ifndef DISCIPLINA_H_INCLUDED
#define DISCIPLINA_H_INCLUDED
#include "Lista.h"
#include "Estudante.h"
#include "Departamento.h"

class Disciplina
{
private:
    int id;
    char nome[150];
    char area_conhecimento[150];

    Departamento* DeptoAssociado;

    Lista<Estudante> ObjLEstudantes;

public:
    Disciplina (int na,int i, const char* ac);
    Disciplina(int i);
    Disciplina();
    ~Disciplina();

    void setId(int n);
    int getId();

    void setNome(const char* n);
    char* getNome();

    void setDepartamento (Departamento* pdpto);
    Departamento* getDepartamento();

    void incluaEstudantes (Estudante* pa);
    void listeEstudantes ();
    void listeEstudantes2 ();
};


#endif // DISCIPLINA_H_INCLUDED
