#include <iostream>
//#include <string>
#include "MinhaString.h"

using namespace std;

int main()
{
	MinhaString S1("Minha primeira string soh minha");
	MinhaString S2A, S2B;
	//const MinhaString S2B("Operador de atribuicao sobrecarregado eh muito util");

	S2A = "Operador de atribuicao sobrecarregado eh muito util";
	S2B = S2A;

	std::cout << S1 << std::endl;
	cout << S2A << S2B << endl;

	cout << endl;

	(S2A == S2B) ? (cout << "S2A e igual a S2B"):(cout << "S2A nao e igual a S2B");
    cout << endl;
    (S2A == S2B) ? (cout << "S2A e igual a S2B"):(cout << "S2A nao e igual a S2B");
    cout << endl;
	return 0;
}
