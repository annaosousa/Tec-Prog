#ifndef DEPARTAMENTO_H_INCLUDED
#define DEPARTAMENTO_H_INCLUDED
class Universidade;
class Disciplina;

class Departamento
{
private:
	char Dpto[100];

	Universidade* pUniv;

	Disciplina *pDisciplPrim;
	Disciplina *pDisciplAtual;

public:
	Departamento();//construtora
	~Departamento(); //destrutora

	void setNome(const char* n); //pega o nome do departamento
	char* getNome(); //imprime o nome do departamento correspondente a cada objeto

    void setUniversidade (Universidade* pu );
    Universidade* getUniversidade ( );

    void incluaDisciplina (Disciplina* pd );
    void listeDisciplinas ();
    void listeDisciplinas2 ();
};

#endif // DEPARTAMENTO_H_INCLUDED
