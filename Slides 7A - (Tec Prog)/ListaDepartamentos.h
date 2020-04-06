#ifndef LISTADEPARTAMENTO_H_INCLUDED
#define LISTADEPARTAMENTO_H_INCLUDED
#include "Departamento.h"
#include "ElDepartamento.h"

class ListaDepartamento
{
private:
    int numero_dpto;
	int cont_dpto;
    char nome[150];

    ElDepartamento* pElDepartamentoPrim;        //ponteiro responsavel pelo duplo encadeamento
    ElDepartamento* pElDepartamentoAtual;       //ponteiro responsavel pelo duplo encadeamento
public:
    ListaDepartamento(int nd = 50, char*n = "");    //construtora
    ~ListaDepartamento();                           //destrutora;

    void setNome(char* n);
    //void incluaDepartamento(ElDepartamento pdpto);

    void incluaDepartamento(ElDepartamento* pd);   //inclui departamentos
    void listaDepartamento();                      //lista departamento em filas encadeadas
    void listaDepartamento2();
};


#endif // LISTADEPARTAMENTOS_H_INCLUDED
