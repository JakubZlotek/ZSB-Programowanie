```cpp
#include <iostream>

using namespace std;
int dzien;
int main()
{
    cout << "Podaj numer dnia tygodnia: ";
    cin >> dzien;
    switch (dzien) {
      case 1:
      cout << "Poniedzialek";
      break;

      case 2:
      cout << "Wtorek";
      break;

      case 3:
      cout << "Sroda";
      break;

      case 4:
      cout << "Czwartek";
      break;

      case 5:
      cout << "Piatek";
      break;

      case 6:
      cout << "Sobota";
      break;

      case 7:
      cout << "Niedziela";
      break;
    }

    return 0;
}

```

1. Instrukcja **switch** to nic innego jak warunek wielokrotnego wyboru, który już wcześniej omawialiśmy. Warunkiem wielokrotnego wyboru sa instrukcje **if..else** oraz **if...else if**. Instrukcja **if** daje nam pełną kontrolę nad warunkiem, w przypadku instrukcji **switch** pełnej kontroli nie mamy, dlaczego? Instrukcja **switch** może wykonywać decyzje tylko na podstawie wartości jednej zmiennej. Nie może być to liczba zmiennoprzecinkowa. Najprościej mówiąc musi być to jeden znak. Dlaczego w takim razie instrukcja **switch** jest używana? Używanie jej w niektórych przypadkach wpływa korzystniej na działanie kodu, oprócz tego instrukcja **switch** jest przejrzystsza. Składnia instrukcji **switch** prezentuje się następująco:
```cpp
    switch (zmienna) {
        case warunek_1:
            ...
            break;
        case warunek_2:
            ...
            break;
        case warunek_n:
            ...
            break;
        default:
            ...
            break;
    }
```
**break** (ang. przerwać/złamać) oznacza przerwanie kodu dziejącego się w danym **casie**. Gdyby nie zastosowanie polecenia break; instrukcja wykonywałaby się nie tylko dla danego **case'a**, ale również dla wszystkich pod nim. Używając **break'a** niejako mówimy programowi "Wykonaj tylko tę część". Oprócz **case'ów** w kodzie znajduje się również instrukcja **default**. Działa ona podobnie do instrukcji **else**, czyli jeżeli żaden z **case'ów** nie spełnia warunku, to zostanie wykonany defaultowy kod.

2. Poniższy kod prezentuje praktyczne działanie instrukcji switch. Program prosi użytkownika o wpisanie numeru dnia tygodnia, a następnie na podstawie wprowadzonych danych wyświetla odpowiedni dzień tygodnia:
```cpp
    cout << "Podaj numer dnia tygodnia: ";
    cin >> dzien;
    switch (dzien) {
      case 1:
      cout << "Poniedzialek";
      break;

      case 2:
      cout << "Wtorek";
      break;

      case 3:
      cout << "Sroda";
      break;

      case 4:
      cout << "Czwartek";
      break;

      case 5:
      cout << "Piatek";
      break;

      case 6:
      cout << "Sobota";
      break;

      case 7:
      cout << "Niedziela";
      break;
    }
```