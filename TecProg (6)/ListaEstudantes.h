#ifndef LISTAESTUDANTES_H_INCLUDED
#define LISTAESTUDANTES_H_INCLUDED
#include "ElEstudante.h"
#include "Estudante.h"

class ListaEstudantes
{
private:
    int cont_estudantes;
    int numero_estudantes;
    char nome[150];

    ElEstudante* pElEstudantePrim;
    ElEstudante* pElEstudanteAtual;

public:
    ListaEstudantes(int na, const char* n);
    ~ListaEstudantes();

    void incluaEstudantes (Estudante* pa);
    void listeEstudantes ();
    void listeEstudantes2 ();
};


#endif // LISTAESTUDANTES_H_INCLUDED
