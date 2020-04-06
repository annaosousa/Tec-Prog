#ifndef ESTUDANTE_H_INCLUDED
#define ESTUDANTE_H_INCLUDED
#include "Pessoa.h"
#include "Departamento.h"
#include "Aluno.h"
class Departamento;


class Estudante:public Pessoa
{
private:
	int RA;
    //Departamento* pDeptoAssociado;

public:

	//Estudante(int dia,int mes, int ano, const char* nome = "");
	Estudante(int i = -1);              // construtora
	~Estudante();                       //destrutora

	Estudante* pProx;                  //ponteiro responsavel pelo duplo encadeamento

	void setRA(int ra);                //associa RA
	int getRA();                       // imprime RA

	void setEstudante(Estudante* pa);  //associa estudante
    Estudante* getEstudante();         //relaciona nome do estudante

	//void setDepartamento(Departamento* pd);
    //Departamento* getDepartamento();

};




#endif // ESTUDANTE_H_INCLUDED
