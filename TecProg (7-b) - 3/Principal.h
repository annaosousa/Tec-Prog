#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED
#include <iostream>
#include <string>
#include <fstream>
#include "Pessoa.h"

class Principal
{
private:
    int tamanho_grupo;
    Pessoa* grupo;

public:
    Principal();
    ~Principal();

    void setTamanho_grupo(int tam);
    int getTamanho_grupo();

    void setPessoa(Pessoa* p);
    Pessoa* getPessoa();

    void executar();

    void cadastrarPessoas();
    void mostrarPessoas();
    void salvarGrupo();
    void carregarGrupo();
};


#endif // PRINCIPAL_H_INCLUDED
