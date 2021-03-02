#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Disciplina.h"

Disciplina::Disciplina(int na,int i, const char* ac):
    ObjLEstudantes()
{
    id = i;
    DeptoAssociado = nullptr;
    strcpy(area_conhecimento, ac);
}

Disciplina::Disciplina(int i)
{
    id = i;
}

Disciplina::Disciplina()
{

}

Disciplina::~Disciplina()
{
    DeptoAssociado = nullptr;
}

void Disciplina::setId(int n)
{
    id = n;
}

int Disciplina::getId()
{
    return id;
}

void Disciplina::setNome(const char* n)
{
    strcpy(nome,n);
}

char* Disciplina::getNome()
{
    return nome;
}

void Disciplina::setDepartamento (Departamento* pdpto)
{
    DeptoAssociado = pdpto;
    //DeptoAssociado->setNome(this);
}

Departamento* Disciplina::getDepartamento()
{
    return DeptoAssociado;
}

void Disciplina::incluaEstudantes(Estudante* pa)
{
    ObjLEstudantes.incluir(*pa);
}

void Disciplina::listeEstudantes()
{
    Elemento<Estudante>* pAux = ObjLEstudantes.getPrimeiro();

    while ( NULL != pAux )
    {
        Estudante pEstudante = pAux->getInfo();
        std::cout << " Elemento na lista %s %d \n" << pEstudante.getNome() << std::endl;

        pAux = pAux->getProximo();
    }
}

void Disciplina::listeEstudantes2()
{
   Elemento<Estudante>* pAux = ObjLEstudantes.getUltimo();

    while ( nullptr != pAux )
    {
        Estudante pEstudante = pAux->getInfo();
        std::cout << " Elemento na lista %s %d \n" << pEstudante.getNome() << std::endl;

        pAux = pAux->getAnterior();
    }
}
