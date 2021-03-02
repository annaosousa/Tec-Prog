#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <fstream>
#include "Elemento.h"

using namespace std;

template<class TIPO>
class Lista
{
private:
    Elemento<TIPO>* pPrimeiro;
    Elemento<TIPO>* pAtual;

    int qntElementos;

public:
    Lista ( );
    ~Lista ( );

    void inicializa ( );

    bool incluir(TIPO pInfo);

    Elemento<TIPO>* getPrimeiro();
    Elemento<TIPO>* getUltimo();

    bool gravarEmArquivo(char const * const arquivo);
    bool recuperarDeArquivo(char const* const arquivo);
};

template<class TIPO>
Lista<TIPO>::Lista ( )
{
    inicializa ( );
}

template<class TIPO>
Lista<TIPO>::~Lista ( )
{
    Elemento<TIPO>* aux = pPrimeiro;
	while (aux != NULL)
	{
		pPrimeiro = aux->getProximo();
		delete aux;
		aux = pPrimeiro;
	}
}

template<class TIPO>
void Lista<TIPO>::inicializa ( )
{
    pPrimeiro = NULL;
    pAtual = NULL;
    qntElementos = 0;
}

template<class TIPO>
bool Lista<TIPO>::incluir( TIPO pInfo )
{

	Elemento<TIPO>* pElemento = new Elemento<TIPO>();
	pElemento->setInfo(pInfo );
	pElemento->setProximo(nullptr);
	pElemento->setAnterior(nullptr);
	if (NULL == pPrimeiro)
	{
		pAtual = pPrimeiro = pElemento;
	}
	else
	{
		pAtual->setProximo( pElemento );
		pElemento->setAnterior( pAtual );
		pAtual = pElemento;
	}

    qntElementos++;
	return true;
}

template<class TIPO>
Elemento<TIPO>* Lista<TIPO>::getPrimeiro()
{
	return pPrimeiro;
}

template<class TIPO>
Elemento<TIPO>* Lista<TIPO>::getUltimo()
{
	return pAtual;
}

template<class TIPO>
bool Lista<TIPO>::gravarEmArquivo(char const* const arquivo)
{
	bool gravavel = true;
	if (NULL == arquivo || 0 == strcmp(arquivo, ""))
		gravavel = false;

	if (gravavel)
	{
		// recupera os elementos da lista;
		TIPO* buffer = new TIPO[qntElementos];
		Elemento<TIPO>* aux = pPrimeiro;
		for (int i = 0; i < qntElementos; i++)
		{
			buffer[i] = aux->getInfo();
			aux = aux->getProximo();
		}

		// tenta abrir o arquivo;
		std::ofstream saida(arquivo, std::ios::binary | std::ios::out);
		if (!saida)
			gravavel = false;

		if (gravavel)
		{	// grava;
			saida.write(reinterpret_cast<char*>(buffer), qntElementos * sizeof(TIPO));
		}
		saida.close();

		delete[] buffer;
	}

	return gravavel;
}

template<class TIPO>
bool Lista<TIPO>::recuperarDeArquivo(char const* const arquivo)
{
	if (NULL == arquivo || 0 == strcmp(arquivo, ""))
		return false;

	// tenta abrir o arquivo;
	ifstream entrada(arquivo, ios::binary | ios::in);
	if (!entrada)
		return false;

	TIPO buffer;
	// lê um por um dos elementos e insere na lista;
	while (!entrada.eof())
	{
		entrada.read(reinterpret_cast<char*>(&buffer), sizeof(TIPO));
		this->incluir(buffer);
	}
	entrada.close();

	return true;
}
#endif // LISTA_H_INCLUDED
