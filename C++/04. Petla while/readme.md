```cpp
#include <iostream>

using namespace std;

int liczba = 10;

int main()
{
    while (liczba < 15) {
        cout << "Podaj liczbe: ";
        cin >> liczba;
    }

    return 0;
}
```
1. Podczas deklarowania zmiennych można od razu przypisać im stałą wartość, czego przykładem jest poniższy kod
```cpp
int liczba = 10;
```
Jest to zmienna typu **int**, dostaje onwa wartość 15. Jeżeli chcemy zadeklarować więcej niż jedną zmienną tego samego typu, możemy to zrobić po przecinku.

2. Pętla while (ang. dopóki) jak sama nazwa wskazuje będzie się wykonywała **dopóki** nie zostanie spełniony warunek. Składnia warunku wygląda następująco:
```cpp
while (warunek) {
    ...
}
```
3. Program ukazany na samej górze sprawdza, czy wprowadzona liczba jest mniejsza od 15. Pętla będzie się wykonywać dopóki użytkownik nie wprowadzi liczby większed od 15. Po wprowadzeniu takiej liczby pętla się zakończy, a skrypt przerwie swoje działanie.
```cpp
    while (liczba < 15) {
        cout << "Podaj liczbe: ";
        cin >> liczba;
    }
```
