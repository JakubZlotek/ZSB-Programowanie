## Opis:
```cpp
#include <iostream>

using namespace std;
int main()
{
    cout << "Hello World" << endl;
    return 0;
}

```
1. Importujemy bibliotekę iostream
```cpp
#include <iostream>
```
2. Dzięki tym 3 wyrazom nie musimy przed poleceniami `cout` oraz `cin` dodawać `std::`
```cpp
using namespace std;
```
3. Cały program jaki będzie się u nas wykonywał musi znajdować się pomiędzy klamerkami `int main()`
```cpp
int main()
{
...
}
```
4. Polecenie `cout` oznacza <ins>**C**</ins>onsole <ins>**Out**</ins>put. Dalej mamy znak strumienia, który informuje niejako co dzieje się z danymi. Znak strumienia jest integralny z poleceniami `cout` oraz `cin`. Pomiędzy znakami strumienia wstawiamy tekst, który znajduje się w cudzysłowiach. Na końcu możemy dodać polecenie `endl`, które oznacza przejście do nowej linijki
```cpp
    cout << "Hello World" << endl;
```
5. Skrypt kończymy poleceniem `return`;
```cpp
return 0;
```
