#include <string.h>
#include "MinhaString.h"

MinhaString::MinhaString(const char* s):
	tam (strlen(s))
{
	setString(s);
}

MinhaString::~MinhaString()
{
	delete[] pStr;
	pStr = nullptr;
}

void MinhaString::setString(const char* s)
{
	pStr = new char[tam + 1];
	strcpy(pStr, s);
}

const char* MinhaString::getString()
{
	return pStr;
}

void MinhaString::operator=(const char* s)
{
	if (s != pStr)
	{
		delete[] pStr;
		tam = strlen(s);
		setString(s);
	}
}

bool MinhaString::operator==(MinhaString& s)
{
	//char* aux = new char[strlen(s.getString()) + 1];
	//strcpy(aux, s.getString());

	if (0 == strcmp(pStr, s.getString()))
		return true;
	else
		return false;
}

void MinhaString::operator=(MinhaString& s)
{
	operator = (s.getString());
}

ostream& operator<< (ostream &saida, MinhaString &s)
{
    saida << s.getString();
    return saida;
}
