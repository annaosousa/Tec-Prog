#ifndef DEPARTAMENTO_H_INCLUDED
#define DEPARTAMENTO_H_INCLUDED
#include "Disciplina.h"
#include "ListaDisciplinas.h"
class Universidade;

class Departamento
{
private:
	char Dpto[100];

	Universidade* pUniv;

	ListaDisciplinas* pObjLDisciplinas;
	//Disciplina* pDiscipPrim;
	//Disciplina* pDiscipAtual;

public:
	Departamento(const char* n = ""); //construtora
	~Departamento();                 //destrutora

	void setNome(char* n); //pega o nome do departamento
	char* getNome(); //imprime o nome do departamento correspondente a cada objeto

    //void setUniversidade (Universidade* pu);
    //Universidade* getUniversidade();

   // void incluaDisciplina(Disciplina* pd);
   // void listeDisciplinas();
   // void listeDisciplinas2();
};



#endif // DEPARTAMENTO_H_INCLUDED
