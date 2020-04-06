#ifndef DEPARTAMENTO_H_INCLUDED
#define DEPARTAMENTO_H_INCLUDED
class Universidade;
class Disciplina;

class Departamento
{
private:
	char Dpto[100];

	Universidade* pUniv;

	Disciplina* pDiscipPrim;   //ponteiro responsavel pelo duplo encadeamento
	Disciplina* pDiscipAtual;  //ponteiro responsavel pelo duplo encadeamento

public:
	Departamento();           //construtora
	~Departamento();          //destrutora

	void setNome(const char* n); //pega o nome do departamento
	char* getNome();            //imprime o nome do departamento correspondente a cada objeto

    void setUniversidade (Universidade* pu);  //informa o nome da universidade
    Universidade* getUniversidade();          //devolve o nome da universidade

    void incluaDisciplina(Disciplina* pd);   //inclui disciplina ao departamento
    void listeDisciplinas();                 //lista as disciplinas incluidas
    void listeDisciplinas2();
};



#endif // DEPARTAMENTO_H_INCLUDED
