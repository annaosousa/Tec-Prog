#include <iostream>
#include "Principal.h"

using namespace std;

Principal::Principal()
{
    tamanho_grupo = 0;
    grupo = nullptr;
}

Principal::~Principal()
{
    if ( grupo )
        delete[] grupo;
}

void Principal::executar()
{
    // Cadastra todas as pessoas no vetor grupo
    cadastrarPessoas();
    // Salva o grupo cadastrado em um arquivo
    salvarGrupo();
    // Apaga o grupo
    delete[] grupo; grupo = NULL;
    // Carrega o grupo do arquivo salvo
    carregarGrupo();
}

void Principal::setTamanho_grupo(int tam)
{
    tamanho_grupo = tam;
}

int Principal::getTamanho_grupo()
{
    return tamanho_grupo;
}

void Principal::setPessoa(Pessoa* p)
{
    grupo = p;
}

Pessoa* Principal::getPessoa()
{
    return grupo;
}

void Principal::cadastrarPessoas()
{
    cout << "digite o tamanho do grupo: ";
    cin >> tamanho_grupo;

    grupo = new Pessoa [tamanho_grupo];

    for ( int i = 0; i < tamanho_grupo; i++)
    {
        system ("cls");
        cout << "Digite o nome da " << i+1 << "a pessoa: " << endl;
        string c_nome;
        cin >> c_nome;
        grupo[i].setNome(c_nome);

        cout << "Digite a idade da " << i+1 << "a pessoa: " << endl;
        int c_idade;
        cin >> c_idade;
        grupo[i].setIdade(c_idade);

        cout << "Digite o CPF da " << i+1 << "a pessoa: " << endl;
        int c_CPF;
        cin >> c_CPF;
        grupo[i].setCPF(c_CPF);
    }
}

void Principal::mostrarPessoas ( )
{
    system ( "cls" );

    if ( grupo )
    {
        for ( int i = 0; i < tamanho_grupo; i++ )
        {
            cout << "Pessoa n" << i + 1
            << " nome: " << grupo[i].getNome()
            << " idade: " << grupo[i].getIdade()
            << " CPF: " << grupo[i].getCPF()
            << endl;
        }
    }
    system("pause");
}

void Principal::salvarGrupo()
{
    ofstream arquivo;
    arquivo.open("grupo1.dat", ios::binary | ios::out);

    arquivo.write( (char* ) &tamanho_grupo, sizeof ( tamanho_grupo ) );

    for ( int i = 0; i < tamanho_grupo; i++ )
    {
        grupo[i].gravar ( arquivo );
    }
}

void Principal::carregarGrupo()
{
    ifstream arquivo;

    arquivo.open ( "grupo1.dat", ios::binary | ios::in );

    arquivo.read ( (char*)&tamanho_grupo, sizeof( tamanho_grupo ) );

    grupo = new Pessoa [ tamanho_grupo ];

    for ( int i = 0; i < tamanho_grupo; i++ )
    {
        grupo[i].ler(arquivo);
    }
    mostrarPessoas();
}
