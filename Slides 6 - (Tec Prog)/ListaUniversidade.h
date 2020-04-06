#ifndef LISTAUNIVERSIDADE_H_INCLUDED
#define LISTAUNIVERSIDADE_H_INCLUDED
#include "ElUniversidade.h"
#include "Universidade.h"

class ListaUniversidades
{
private:
    int cont_univ;
    int numero_univ;
    char nome [150];

    ElUniversidade *pElUniversidadePrim;        //ponteiro responsavel pelo duplo encadeamento
    ElUniversidade *pElUniversidadeAtual;       //ponteiro responsavel pelo duplo encadeamento

public:
    ListaUniversidades(int nu = 1000, char*n = "");      //construtora
    ~ListaUniversidades();                               //destrutora;

    void incluaUniversidade(Universidade* pu);           //inclui universidades
    void listeUniversidades();                           //lista universidades em filas encadeadas
    void listeUniversidades2();
    void setNome(char* n);
    Universidade* localizar(char*n);                     //localiza universidades
};

#endif // LISTAUNIVERSIDADE_H_INCLUDED
