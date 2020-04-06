#ifndef ESTUDANTE_H_INCLUDED
#define ESTUDANTE_H_INCLUDED
#include "Pessoa.h"
class Departamento;

class Estudante:public Pessoa
{
private:
	int RA;
    //Departamento* pDeptoAssociado; //objeto

public:

	Estudante(int dia,int mes, int ano, const char* nome = "");
	Estudante(); // construtora
	~Estudante(); //destrutora

	void setRA(int ra); //associa RA
	int getRA(); // imprime RA

	//void setUniversidadeFiliado(Universidade* pu);
    // void OndeEstuda();

};



#endif // ESTUDANTE_H_INCLUDED
