```cpp
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
```
1. Skrypt prezentuje działanie pętli **do..while** (ang. wykonuj dopóki). Różni się ona od pętli **while** momentem sprawdzania warunku. W pętli **while** warunek sprawdzaliśmy przed wykonaniem kodu, w pętli **do..while** jest odwrotnie. Najpierw wykonujemy kod, a dopiero potem sprawdzamy warunek. Składnia pętli **do..while** prezentuje się następująco:
```cpp
do {
    ...
} while (warunek);
```
2. Powyższy skrypt będzie dodawał 2 do zmiennej liczba (1, 3, 5, 7 itd..) dopóki zmienna ta nie osiągnie wartości większej lub równej wartości zmiennej licznik. Za każdym powtórzeniem pętli wyświetlamy aktualną wartość zmiennej liczba
```cpp
    do {               
        liczba+=2;              
        cout << liczba << endl; 
    } while (liczba <= licznik);
```