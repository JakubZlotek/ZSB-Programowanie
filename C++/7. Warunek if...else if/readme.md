```cpp
#include <iostream>

using namespace std;
float procent;
int main()
{
    cout << "Podaj wynik procentowy twojego egzaminu: ";
    cin >> procent;
    if (procent < 10) {
      cout << "niestety otrzymales 1 :(";
    } else if (procent < 30) {
      cout << "twoja ocena to 2 moglo byc gorzej :/";
    } else if (procent < 50) {
      cout << "twoja ocena to 3 poszlo ci tak se :|";
    } else if (procent < 70) {
      cout << "twoja ocena to 4 jest dobrze :)";
    } else {
      cout << "twoja ocena to 5 essa :3";
    }
    return 0;
}

```

1. Warunek **if...else if** to warunek Jeżeli, w przeciwnym wypadku jeżeli. Warunek **if...else if** może mieć nieskończoną liczbę innych warunków. Najłatwiej zobrazować to przykładem: jeżeli masz 5 złotych to kupisz sobie paczkę chipsów, w przeciwnym wypadku jeżeli masz mniej niż 3 złote to kupisz sobie kanapkę, w przeciwnym wypadku jeżeli masz mniej niż 0.5 gr nie kupisz sobie nic. Tak to wygląda w formie pseudokodu:
```cpp
if (budzet = 5) {
    kupie chipsy
}
else if (budzet < 3) {
    kupie kanapke
}
else if (budzet < 0.5) {
    nie kupie nic
}
```

2. Program, który ładnie zobrazuje warunek **if...else if** będzie informował o ocenie z egzaminu. W kodzie zamiast zmiennej int, której dotychczas używaliśmy pojawiła się zmienna float, która określa liczby zmiennoprzecinkowe. Wynik procentowy egzaminu może być z przecinkiem dlatego musieliśmy ustawić taki typ danych. Prosimy użytkownika o podanie wyniku w formie procentów, a następnie program określa, który z warunków został spełniony
```cpp
    if (procent < 10) {
      cout << "niestety otrzymales 1 :(";
    } else if (procent < 30) {
      cout << "twoja ocena to 2 moglo byc gorzej :/";
    } else if (procent < 50) {
      cout << "twoja ocena to 3 poszlo ci tak se :|";
    } else if (procent < 70) {
      cout << "twoja ocena to 4 jest dobrze :)";
    } else {
      cout << "twoja ocena to 5 essa :3";
    }
```