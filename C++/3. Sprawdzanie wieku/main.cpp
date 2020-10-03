#include <iostream>

using namespace std;
int wiek;

int main()
{
    cout << "podaj swoj wiek: ";
    cin >> wiek;
    if (wiek >= 18) {
        cout << "jestes pelnoletni";
    }
    else {
        cout << "nie jestes pelnoletni";
    }
    return 0;
}
