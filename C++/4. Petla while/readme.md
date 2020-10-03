```cpp
#include <iostream>

using namespace std;

int x = 15, liczba;

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
int x = 15, liczba;
```
Obie zmienne są typu **int**, zmienna x dostaje wartość 15, natomiast zmiennej o nazwie liczba nie przypisujemy żadnej wartości. Jeżeli chcemy zadeklarować więcej niż jedną zmienną tego samego typu, możemy to zrobić po przecinku.

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