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
