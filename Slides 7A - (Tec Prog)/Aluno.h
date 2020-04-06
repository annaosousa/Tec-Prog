#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include "Estudante.h"
class Estudante;

class Aluno
{
private:
    Estudante* pEstudante;

public:
    Aluno(int i = 50);  //construtora
    ~Aluno();           //destrutora;

    Aluno *pProx;     //ponteiro responsavel pelo duplo encadeamento
    Aluno *pAnt;      //ponteiro responsavel pelo duplo encadeamento

    void setEstudante(Estudante* pa);    //informa o nome do estudante
    Estudante* getEstudante();           //devolve o nome do estudante
    char* getNome();
};




#endif // ALUNO_H_INCLUDED
