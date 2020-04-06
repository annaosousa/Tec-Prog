#ifndef ESTUDANTE_H_INCLUDED
#define ESTUDANTE_H_INCLUDED
#include "Pessoa.h"
#include "Departamento.h"
class Departamento;

class Estudante : public Pessoa
{
private:
	int RA;
	//Departamento*	DptoAssociado;
	Universidade* pUniversidadeFiliado; //objeto

public:

	Estudante(int dia,int mes, int ano, const char* nome = "");
	Estudante();                                               // construtora
	~Estudante();                                              //destrutora

	//Estudante* pProx;
	//Estudante* pAnt;

	void setRA(int ra);                                       //associa RA
	int getRA();                                              // imprime RA

	void setUniversidadeFiliado(Universidade* pu);            //associa universidade ao estudante
    void OndeEstuda();                                        //relaciona local ao estudante

};



#endif // ESTUDANTE_H_INCLUDED
