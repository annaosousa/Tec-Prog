#pragma once
#include <iostream>
#include <ostream>

using namespace std;

class MinhaString
{
private:
	int tam;
	char* pStr;

public:
	//MinhaString();
	MinhaString(const char* s = "");
	~MinhaString();

	const char* getString();
	void operator = (const char* s);
	bool operator == (MinhaString& s);
	void operator = (MinhaString& s);

private:
	void setString(const char* s);
};

ostream& operator<< (ostream& saida, MinhaString& s);
