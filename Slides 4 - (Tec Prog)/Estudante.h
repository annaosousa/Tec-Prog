#ifndef ESTUDANTE_H_INCLUDED
#define ESTUDANTE_H_INCLUDED
#include "Pessoa.h"
#include "Departamento.h"
class Departamento;

class Estudante : public Pessoa
{
private:
	int RA;

    Universidade* pUniversidadeFiliado;                        //ponteiro que associa universidade filiado
	Departamento*	DptoAssociado;

public:

	Estudante(int dia,int mes, int ano, const char* nome = "");
	Estudante (int i);
	Estudante();                                            // construtora
    ~Estudante();                                           //destrutora

	Estudante* pProx;                                     //ponteiro responsavel pelo duplo encadeamento
	Estudante* pAnt;                                      //ponteiro responsavel pelo duplo encadeamento

	void setRA(int ra);                                   //associa RA
	int getRA();                                          // imprime RA

    void setUniversidadeFiliado(Universidade* pu);        //associa universidade
    void OndeEstuda();

};



#endif // ESTUDANTE_H_INCLUDED
