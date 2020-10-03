```cpp
#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++) {
        cout << "Liczba wynosi: " << i << endl;
    }
    return 0;
}
```

1. Pętla **for** jest pętlą, w której warunku zamieszczamy instrukcje sterowania pętlą, najszybciej mówiąc deklarujemy ilość iteracji, czyli ilość powtórzeń. Składnia pętli prezentuje się w następujący sposób:
```cpp
    for (deklaracja warunku rozpoczynającego pętlę; deklaracja warunku kończącego pętlę; zmiana w warunku) {
        ...
    }
```

2. Przykładowe zastosowanie pętli **for**. Pętla wykona się 11 razy
```cpp
    for (int i = 0; i <= 10; i++) {
        cout << "Liczba wynosi: " << i << endl;
    }
```