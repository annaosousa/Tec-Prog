#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
    int CPF;

public:
    Pessoa ( string c_nome = "", int c_idade = -1, int c_CPF = -1 );
    ~Pessoa ( ) ;

    void setNome(string n);
    string getNome();

    void setIdade(int i);
    int getIdade();

    void setCPF(int cpf);
    int getCPF();

    void gravar (ofstream& arq);
    void ler (ifstream& arq);
    //métodos Setters e Getters

};


#endif // PESSOA_H_INCLUDED
