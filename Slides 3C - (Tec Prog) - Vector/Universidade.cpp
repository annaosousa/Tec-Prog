#include <iostream>
#include <string.h>
#include <vector>
#include "Universidade.h"
#include "Principal.h"
#include "Departamento.h"

using namespace std;

Universidade::Universidade ()
{
    int tam = (int)Dpto.size();
    for(int i = 0; i < tam; i++)
    {
        (Dpto[i]) = nullptr;
    }
}

Universidade::~Universidade()
{

}

void Universidade::setNome(const char* n)
{
    strcpy (nome,n);
}

char* Universidade::getNome()
{
    return nome;
}

void Universidade::setNomeDpto(Departamento* nome_dpto)
{
    Dpto.push_back(nome_dpto);
}

void Universidade::imprimeDpto()
{
  int tam = (int)Dpto.size();
  for(int i = 0; i < tam; i++)
  {
      std::cout << (Dpto[i])->getNome() << std::endl;
  }
}
