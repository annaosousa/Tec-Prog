#ifndef ESTUDANTE_H_INCLUDED
#define ESTUDANTE_H_INCLUDED
#include "Pessoa.h"
#include "Departamento.h"
class Departamento;

class Estudante : public Pessoa  //herança
{
private:
	int RA;
	Departamento* DeptoAssociado; //objeto

public:

	Estudante(int dia,int mes, int ano, const char* nome);
	Estudante(int i);
	Estudante(); //construtora
	~Estudante();

	void setRA(int ra); //associa RA
	int getRA(); // imprime RA

	void setDepartamento(Departamento* pd); //associa universidade
    Departamento* getDepartamento();

};

#endif // ESTUDANTE_H_INCLUDED
