#ifndef LISTADEPARTAMENTOS_H_INCLUDED
#define LISTADEPARTAMENTOS_H_INCLUDED
#include "ElDepartamento.h"
#include "Disciplina.h"

class ListaDepartamentos
{
private:
    int cont_departamentos;
    int numero_departamentos;

    char nome[150];

    ElDepartamento* pElDepartamentoPrim;
    ElDepartamento* pElDepartamentoAtual;

public:
    ListaDepartamentos(int nd = 10000, const char* n = "");
    ~ListaDepartamentos();

    void setNome(char* n);
    void incluaDepartamentos (Departamento* pd);

    void listeDepartamentos ();
    void listeDepartamentos2 ();
};



#endif // LISTADEPARTAMENTOS_H_INCLUDED
