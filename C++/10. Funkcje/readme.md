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