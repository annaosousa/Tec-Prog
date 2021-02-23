#ifndef DEPARTAMENTO_H_INCLUDED
#define DEPARTAMENTO_H_INCLUDED
class Universidade;

class Departamento
{
private:
	char Dpto[100];

public:
	Departamento(); //construtora
	~Departamento(); //destrutora

	void setNome(const char* n); //pega o nome do departamento
	char* getNome(); //imprime o nome do departamento correspondente a cada objeto
};

#endif // DEPARTAMENTO_H_INCLUDED
