#ifndef DEPARTAMENTO_H_INCLUDED
#define DEPARTAMENTO_H_INCLUDED
#include "Lista.h"

class Universidade;
class Disciplina;

class Departamento
{
private:
    int id;
	char Dpto[100];

	Universidade* pUniv;

	Lista<Disciplina> ObjLDisciplinas;

public:
	Departamento(int i );//construtora
	Departamento();
	~Departamento(); //destrutora

	int getId();

	void setNome(const char* n); //pega o nome do departamento
	char* getNome(); //imprime o nome do departamento correspondente a cada objeto

    void setUniversidade (Universidade* pu );
    Universidade* getUniversidade ( );

    void incluaDisciplina (Disciplina* pd );
    void listeDisciplinas ();
    void listeDisciplinas2 ();
};

#endif // DEPARTAMENTO_H_INCLUDED
