#include <iostream>

using namespace std;

int licznik = 48, liczba = 1; //Deklarujemy 2 zmienne licznik oraz liczba z wartościami kolejno: 48 oraz 1

int main()
{
    do {               //Nowością w tym skrypcie jest pętla do..while. Różni się ona od pętli while kolejnąścią działania. Tutaj najpierw wykonujemy określone działanie, a dopiero                         potem sprawdzamy warunek
        liczba+=2;              //Do wartości liczby dodajemy 2. Czyli jeżeli liczba ma wartość 1, to po dodaniu 2 mamy 3, następnie 5, 7, 9 itd.
        cout << liczba << endl; //Wyświetlamy liczbę
    } while (liczba <= licznik); //Sprawdzamy czy liczba jest mniejsza lub równa od licznika

    return 0;
}
