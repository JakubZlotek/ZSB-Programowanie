```cpp
#include <iostream>

using namespace std;

float oceny[5];
float suma=0, srednia;

int main()
{
    for(int i=0; i<5; i++)
    {
        cout << endl << "Podaj " << i+1 << " ocene: ";
        cin >> oceny[i];
        suma += oceny[i];
    }

    srednia = suma / 5;
    cout << endl << "srednia = " << srednia;

    return 0;
}
```

1. Tablice można określić jako zbiór danych, które przechowywane są pod jedną nazwą

| Zmienna   | Wartość           | Przykład wartości  |
| :----:    |    :---           | :---               |
| x[0]      | Pierwsza wartość  | ziemniaki          |
| x[1]      | Druga wartość     | marchewka          |
| x[2]      | Trzecia wartość   | koperek            |
| x[3]      | Czwarta wartość   | jabłka             |