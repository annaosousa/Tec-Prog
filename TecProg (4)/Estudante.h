#ifndef ESTUDANTE_H_INCLUDED
#define ESTUDANTE_H_INCLUDED
#include "Pessoa.h"
#include "Departamento.h"

class Estudante : public Pessoa  //herança
{
private:
	int RA;
	Departamento* DeptoAssociado; //objeto

public:

	Estudante(int dia,int mes, int ano, const char* nome = "");
	Estudante(); //construtora
	~Estudante();

    Estudante *pProx;
    Estudante *pAnte;

	void setRA(int ra); //associa RA
	int getRA(); // imprime RA

	void setDepartamento(Departamento* d);
	Departamento* getDepartamento();
};

#endif // ESTUDANTE_H_INCLUDED
