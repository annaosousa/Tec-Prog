#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("Bom dia!");
    string s2;

    s2 = s1;

    int tam = s2.length();

    cout << "S1: " << s1 << endl;
    cout << "S2: " << s2 << endl;
    cout << endl;

    s2[0] = 'b';

    cout << "S1: " << s1 << endl;
    cout << "S2: " << s2 << endl;
    cout << endl;

    for(int x = 0; x < tam; ++x)
    {
        cout << s2[x];
    }
    cout << endl;
}
