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

1. Tablice można określić jako zbiór danych, które przechowywane są pod jedną nazwą.

| Zmienna   | Wartość           | Przykład wartości  |
| :----:    |    :---           | :---               |
| x[0]      | Pierwsza wartość  | ziemniaki          |
| x[1]      | Druga wartość     | marchewka          |
| x[2]      | Trzecia wartość   | koperek            |
| x[3]      | Czwarta wartość   | jabłka             |

2. Zadaniem skryptu jest obliczenie średniaj z 5 ocen wprowadzonych przez użytkownika. Po każdym wprowadzeniu oceny zmienna suma jest powiększana o wartość zmiennej `ocena[]`.
```cpp
float oceny[5];
```
3. Tworzymy zmienną oceny, która jest typem float oraz ma 6 wierszy, które możemy nadpisać.
4. Dla przykładu chcemy zapisać w zmiennej oceny 4 oceny, a następnie je wyświetlić. Możemy to zrobić na 2 sposoby:
```cpp
float oceny[3];

int main() {
    oceny[0] = 4;
    oceny[1] = 6;
    oceny[2] = 5;
    oceny[3] = 2;

    cout << oceny[0] << endl;
    cout << oceny[1] << endl;
    cout << oceny[2] << endl;
    cout << oceny[3] << endl;
}
```
Pierwsza rzecz jaka rzuca się w oczy to fakt, że zaczynamy od zera. Należy o tym pamiętać, że w programowaniu pierwszą liczbą **nie jest** 1, lecz 0. Program możemy również działać w sposób bardziej zoptymalizowany

```cpp
float oceny[3];

int main() {
    for (int i=0;i<3;i++) {
        cout << "Podaj ocene: ";
        cin >> oceny[i];
    }
    for (int i=0;i<3;i++) {
        cout << oceny[i] << endl;
    }
}
```
W tym sposobie użyliśmy poznanej już wcześniej pętli for. Zamiast ręcznego wstawiania numeru wiersza w tablicy używamy iteratora pętli (zmiennej i). Taki sposób jest o wiele bardziej wydajny między innymi dlatego, że nie powtarzamy 4 razy tych samych poleceń, a robi to za nas pętla warunkowa.


```cpp
    for(int i=0; i<5; i++)
    {
        cout << endl << "Podaj " << i+1 << " ocene: ";
        cin >> oceny[i];
        suma += oceny[i];
    }

    srednia = suma / 5;
    cout << endl << "srednia = " << srednia;
```
5. Omówmy sobie działanie powyższego skryptu. Pętla for będzie działała dopóki zmienna i będzie mniejsza od 5 (pętla wykona się 5 razy, ponieważ odliczmay od 0). Następnie skrypt prosi o podanie oceny. Skrypt przyjmuje ocenę i dodaje ją do sumy wszystkich ocen. Pod koniec wyliczana jest średnia ocen poprzez podzielenie sumy przez 5. Na końcu wyświetlamy średnią.s