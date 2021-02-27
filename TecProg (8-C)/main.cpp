#include <iostream>
#include <string>
#include "MinhaString.h"

using namespace std;

int main()
{
	MinhaString S1("Minha primeira string soh minha");
	MinhaString S2A, S2B;
	//const MinhaString S2B("Operador de atribuicao sobrecarregado eh muito util");

	S2A = "Operador de atribuicao sobrecarregado eh muito util";
	S2B = S2A;

	cout << S1.getString() << endl;
	cout << S2A.getString() << endl;
	cout << S2B.getString() << endl;

	if (S2A == S2B)
		cout << "Sao iguais!" << endl;
	else
		cout << "Sao diferentes!" << endl;
	return 0;
}