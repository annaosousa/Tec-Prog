#ifndef ESTUDANTE_H_INCLUDED
#define ESTUDANTE_H_INCLUDED
#include "Pessoa.h"
#include "Universidade.h"

class Estudante : public Pessoa  //herança
{
private:
	int RA;
	Universidade* pUniversidadeFiliado; //objeto

public:

	Estudante(int dia,int mes, int ano, const char* nome = "");
	Estudante(); //construtora
	~Estudante();

	void setRA(int ra); //associa RA
	int getRA(); // imprime RA
	void setUniversidadeFiliado(Universidade* pu); //associa universidade
    void OndeEstuda(); //local onde se estuda

};

#endif // ESTUDANTE_H_INCLUDED
