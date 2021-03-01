#ifndef ESTUDANTE_H_INCLUDED
#define ESTUDANTE_H_INCLUDED
#include "Pessoa.h"
#include "Departamento.h"

class Estudante : public Pessoa  //heran�a
{
private:
    int id;
	int RA;
	Departamento* DeptoAssociado; //objeto

public:

	Estudante(int dia,int mes, int ano, const char* nome = "");
	Estudante(int i);
	Estudante(); //construtora
	~Estudante();

	void setRA(int ra); //associa RA
	int getRA(); // imprime RA

	void setDepartamento(Departamento* pd); //associa universidade
    Departamento* getDepartamento();

    void setId(int i); //local onde se estuda
    int getid();

};

#endif // ESTUDANTE_H_INCLUDED
