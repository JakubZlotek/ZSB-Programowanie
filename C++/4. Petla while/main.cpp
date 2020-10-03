#include <iostream> //Standardowo ładujemy bibliotekę iostream dzięki której działają polecenia takie jak: cout, cin

using namespace std; //Używamy po to, aby nie musieć do poleceń cout oraz cin dodawać przedrostków std::

int x = 15, liczba; //deklarujemy dwie zmienne całkowite. X = 15 oraz liczba, która nie ma żadnej wartości

int main() //Pomiędzy klamerkami int main() wykonuje się cały kod. Bardzo ważne jest pilnowanie, aby elementy naszego programu nie "wystawały" poza zewnętrzne klamerki ;)
{
    while (liczba < 15) { //Pętla będzie się wykonywała dopóki wprowadzona przez użytkownika liczba będzie mniejsza niż 15
        cout << "Podaj liczbe: "; //Wyświetlamy napis "Podaj liczbę"
        cin >> liczba; //Pobieramy liczbe z klawiatury
    }

    return 0; //Po wykonaniu powyższego skryptu kończymy pracę programu
}

