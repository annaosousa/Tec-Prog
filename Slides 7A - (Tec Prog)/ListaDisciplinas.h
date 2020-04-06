#ifndef LISTADISCIPLINAS_H_INCLUDED
#define LISTADISCIPLINAS_H_INCLUDED
#include "Departamento.h"
#include "Disciplina.h"
#include "ElDisciplina.h"
class Disciplina;
class Eldisciplina;

class ListaDisciplina
{
private:
    int numero_disc;
	int cont_disc;
    char nome[150];

    Disciplina *pElDisciplinaPrim;         //ponteiro responsavel pelo duplo encadeamento
	Disciplina *pELDisciplinaAtual;        //ponteiro responsavel pelo duplo encadeamento

public:
    ListaDisciplina(int nd = 50, const char* n = "");    //construtora
    ~ListaDisciplina();                                  //destrutora;

    void setNome(char* n);
    void incluaDisciplinas(Disciplina* pd);  //inclui disciplinas

    void listeDisciplinas();                //lista disciplinas em filas encadeadas
    void listeDisciplinas2();
};


#endif // LISTADISCIPLINAS_H_INCLUDED
