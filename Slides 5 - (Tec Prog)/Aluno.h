#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include "Estudante.h"

class Aluno
{
private:
    Estudante* pEstudante;  //  ponteiro para estudante

public:
    Aluno();   //construtora
    ~Aluno();

    Aluno *pProx;  //ponteiro responsavel pelo duplo encadeamento
    Aluno *pAnt;   //ponteiro responsavel pelo duplo encadeamento

    void setEstudante(Estudante* pa );  //informa o nome do estudante
    Estudante* getEstudante ( );        //devolve o nome do estudante
    char* getNome ( );
};


#endif // ALUNO_H_INCLUDED
