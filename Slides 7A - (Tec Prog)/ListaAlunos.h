#ifndef LISTAALUNOS_H_INCLUDED
#define LISTAALUNOS_H_INCLUDED
#include "Aluno.h"
#include "Estudante.h"
class Aluno;
class Estudante;

class ListaAlunos
{
private:
    int numero_estudantes;
	int cont_estudantes;
    char nome[150];

    Aluno* pAlunoPrim;         //ponteiro responsavel pelo duplo encadeamento
    Aluno* pAlunoAtual;        //ponteiro responsavel pelo duplo encadeamento
public:
    ListaAlunos(int na = 100,const char*n = "");   //construtora
    ~ListaAlunos();                                //destrutora;

    void incluaEstudante(Estudante* pa);           //inclui estudantes
    void listeEstudante();                         //lista estudantes em filas encadeadas
    void listeEstudante2();

    void graveAlunos();                            //operacoes relacionadas com dados referentes aos estudantes
    void recupereAlunos();
    void limpaLista();                             //apaga a lista
};

#endif // LISTAALUNOS_H_INCLUDED
