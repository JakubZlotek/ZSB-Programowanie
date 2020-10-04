#include <iostream>

using namespace std;

int licznik = 48, liczba = 1;

int main()
{
    do {
        liczba+=2;              
        cout << liczba << endl;
    } while (liczba <= licznik);

    return 0;
}
