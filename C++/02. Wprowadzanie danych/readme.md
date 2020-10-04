## Opis:
```cpp
#include <iostream>

using namespace std;
string imie;

int main()
{
    cout << "Podaj Imie: ";
    cin >> imie;
    cout << "Witaj, " << imie;
    return 0;
}
```

1. Nowością w tym skrypcie jest deklaracja zmiennej. Zmienna przybiera wartość określoną przez użytkownika. Podczas określania zmiennej musimy określić jej typ oraz symboliczną nazwę
```cpp
    string imie;
```
2. Kolejnym nowym elementem skryptu jest polecenie `cin`, które jest skrótem od <ins>**C**</ins>onsole <ins>**In**</ins>put. Jest to strumień wejścia, czyli element za pomocą którego możemy ustalić wartość danej zmiennej.
```cpp
    cin >> imie;
```
3. Ostatnią zmianą w kodzie jest modyfikacja strumienia `cout` z wykorzystaniem zmiennych. Jeżeli chcemy, aby program wyświetlił podane przez użytkownika imię, musimy oddzielić znakiem strumienia zmienną od tekstu, który deklarowany jest w kodzie, a nie za pomocą zmiennej.
```cpp
    cout << "Witaj, " << imie;
```