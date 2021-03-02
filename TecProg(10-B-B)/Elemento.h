#ifndef ELEMENTO_H_INCLUDED
#define ELEMENTO_H_INCLUDED
#include <string.h>

template<class TIPO>

class Elemento
{
private:
    Elemento<TIPO>* pProximo;
    Elemento<TIPO>* pAnterior;
    TIPO pInfo;
    char nome[150];

public:
    Elemento ( );
    ~Elemento ( );

    void setProximo ( Elemento<TIPO>* pp );
    Elemento<TIPO>* getProximo ( );

    void setAnterior ( Elemento<TIPO>* pa );
    Elemento<TIPO>* getAnterior ( );

    void setInfo ( TIPO pi );
    TIPO getInfo ( );

    void setNome ( char* n );
    char* getNome ( );
};

template<class TIPO>
Elemento<TIPO>::Elemento ( )
{
    pProximo = nullptr; 
    pAnterior = nullptr; 
}

template<class TIPO>
inline Elemento<TIPO>::~Elemento()
{

}

template<class TIPO>
void Elemento<TIPO>::setProximo ( Elemento<TIPO>* pp )
{
    pProximo = pp;
}

template<class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getProximo ( )
{
    return pProximo;
}

template<class TIPO>
void Elemento<TIPO>::setAnterior ( Elemento<TIPO>* pa )
{
    pAnterior = pa;
}

template<class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getAnterior ( )
{
    return pProximo;
}

template<class TIPO>
void Elemento<TIPO>::setInfo ( TIPO pi )
{
    pInfo = pi;
}

template<class TIPO>
TIPO Elemento<TIPO>::getInfo ( )
{
    return pInfo;
}

template<class TIPO>
void Elemento<TIPO>::setNome ( char* n )
{
    strcpy ( nome, n );
}

template<class TIPO>
char* Elemento<TIPO>::getNome ()
{
    return nome;
}

#endif // ELEMENTO_H_INCLUDED
