#ifndef DEPARTAMENTO_H_INCLUDED
#define DEPARTAMENTO_H_INCLUDED
class Universidade;
class Disciplina;

class Departamento
{
private:
	char Dpto[100];

	Universidade* pUniv;    //ponteiro que associa universidade

	Disciplina* pDiscipPrim;  //ponteiro responsavel pelo duplo encadeamento
	Disciplina* pDiscipAtual;  //ponteiro responsavel pelo duplo encadeamento

public:
	Departamento(); //construtora
	~Departamento(); //destrutora

    void setNome(char* n);                  //pega o nome do departamento
    char* getNome();                    //imprime o nome do departamento correspondente a cada objeto

    void setUniversidade (Universidade* pu);  //nome da universidade
    Universidade* getUniversidade();         //imprime nome da universidade

    void incluaDisciplina(Disciplina* pd);
    void listeDisciplinas();                //lista disciplinas
    void listeDisciplinas2();
};



#endif // DEPARTAMENTO_H_INCLUDED
