```cpp
#include <iostream>

using namespace std;
int wiek;

int main()
{
    cout << "podaj swoj wiek: ";
    cin >> wiek;
    if (wiek >= 18) {
        cout << "Jestes pelnoletni";
    }
    else {
        cout << "Nie jestes pelnoletni";
    }
    return 0;
}
```

1. W powyższym kodzie możemy zobaczyć zastosowanie warunku `if else`. `If` (ang. Jeżeli) jest pętlą sprawdzającą poprawność warunku. Bardzo często wraz z pętlą If jest stosowane polecenie `else` (ang. W przeciwnym wypadku) wykona się, jeżeli warunek w pętli If nie został spełniony. Składnia warunku If wygląda następująco:
```cpp
    if (warunek) {

    }
    | OPCJONALNIE |
    else {

    }
```
2. Zadaniem programu jest sprawdzenie, czy użytkownik jest pełnoletni czy nie. W związku z tym użytkownik musi wprowadzić swój wiek. Następnie skrypt za pomocą warunku If sprawdza czy wartość zmiennej wiek, czyli wartość wprowadzona przez użytkownika jest większa lub równa 18. Jeżeli warunek się spełni. Na ekranie ukaże nam się informacja "Jesteś pełnoletni", jeżeli wprowadzimy liczbę mniejszą niż 18, zostaniemy powiadomieni o tym, że nie jesteśmy pełnoletni
```cpp
    if (wiek >= 18) {
        cout << "Jestes pelnoletni";
    }
    else {
        cout << "Nie jestes pelnoletni";
    }
```
