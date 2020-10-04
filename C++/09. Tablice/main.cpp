#include <iostream>

using namespace std;

float oceny[5];
float suma=0,
srednia;

int main()
{
    for(int i=0; i<5; i++)
    {
        cout<<endl<<"Podaj "<<i+1<<" ocene: ";
        cin>>oceny[i];
        suma += oceny[i];
    }

    srednia = suma / 5;
    cout<<endl<<"srednia = "<<srednia;

    return 0;
}
