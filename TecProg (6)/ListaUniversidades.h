#ifndef LISTAUNIVERSIDADES_H_INCLUDED
#define LISTAUNIVERSIDADES_H_INCLUDED
#include "ElUniversidade.h"
#include "Universidade.h"

class ListaUniversidades
{
private:
	int  cont_univ;
	int  numero_univ;
	char nome[150];

	ElUniversidade *pElUniversidadePrim;
    ElUniversidade *pElUniversidadeAtual;
public:

	ListaUniversidades(int nu = 1000, const char* n = "");
	~ListaUniversidades();
	void incluaUniversidade(Universidade* pu);
    void listeUniversidades();
    void listeUniversidades2();

	Universidade* localizar(char* n);
};

#endif // LISTAUNIVERSIDADES_H_INCLUDED
