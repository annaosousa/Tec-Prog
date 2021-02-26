#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

void grava_string ( string str, ofstream& arquivo )
{
    int tamanho = str.size();

    arquivo.write((char*) &tamanho, sizeof(tamanho));
    arquivo.write((char*) &str[0], tamanho);
}

string le_string ( ifstream& arquivo )
{
    string str;
    int tamanho;

    arquivo.read((char*)&tamanho, sizeof(tamanho));
    str.resize(tamanho);
    arquivo.read((char*)&str[0], tamanho);

    return str;
}

Pessoa::Pessoa ( string c_nome, int c_idade, int c_CPF )
{
    nome = c_nome; idade = c_idade; CPF = c_CPF;
}

Pessoa::~Pessoa ( )
{

}

void Pessoa::setNome(string n)
{
    nome = n;
}

string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setIdade(int i)
{
    idade = i;
}

int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::setCPF(int cpf)
{
    CPF = cpf;
}

int Pessoa::getCPF()
{
    return CPF;
}

void Pessoa::gravar (ofstream& arquivo)
{
    grava_string ( nome, arquivo );
    arquivo.write ( (char*) &idade, sizeof( idade ) ) ;
    arquivo.write ( (char*) &CPF, sizeof( CPF ) );
}

void Pessoa::ler (ifstream& arquivo)
{
    nome = le_string ( arquivo );
    arquivo.read( (char*) &idade, sizeof( idade ) );
    arquivo.read( (char*) &CPF, sizeof( CPF ) );
}
