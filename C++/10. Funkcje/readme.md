```cpp
#include <iostream>

using namespace std;

void ulubiona(int liczba) {
  cout << "Moja ulubiona liczba to: " << liczba;
}

string zwierzefnc(string zwierze){
    if (zwierze == "Kot") {
      return "Ma dlugi ogon";
    } else if (zwierze == "Pies") {
      return "Merda ogonem";
    } else {
      return "Nie znam takiego zwierzecia :(";
    }
}

int main()
{
    liczba(5);
    cout << zwierzefnc("Kot") << endl;
    cout << zwierzefnc("Pies") << endl;
    cout << zwierzefnc("Strus") << endl;
    return 0;
}
```

1. Funkcja to fragment programu, któremu nadano nazwę. Funkcję możemy wykonywać poprzez podanie jej nazwy oraz ewentualnych argumentów (nie są obowiązkowe). Funkcję tworzymy w podany sposób:
```cpp
typ_zmiennej nazwa_funkcji(argument_1, argument_n) {

}
```
2. Każda funkcja oprócz funkcji typu `void` musi zwracać jakąś wartość za pomocą polecenia `return`. Funkcja typu void nie zwraca żadnej wartości, co nie oznacza, że nic nie robi. Może np. wyświetlić tekst. Przykładowy kod:
```cpp
    float liczba() {
        cout << "moja liczba to 8.52";
        return 8.52;
    }
```

3. 