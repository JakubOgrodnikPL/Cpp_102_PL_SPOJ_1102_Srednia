#include <iostream>
using namespace std;

float srednia, najmniejsza, roznica, suma = 0;
int ile, dlugosc, wynik;
float tablica[100];

int main()
{
    cin >> ile;
    for (int i = 1; i <= ile; i++)
    {
        najmniejsza = 100;
        cin >> dlugosc;
        for (int j = 0; j < dlugosc; j++)
        {
            cin >> tablica[j];
            suma += tablica[j];
        }
        srednia = suma/dlugosc;
        for (int k = 0; k < dlugosc; k++)
        {
            roznica = srednia - tablica[k];
            if (roznica < 0) roznica = -roznica;
            if (roznica < najmniejsza)
            {
                najmniejsza = roznica;
                wynik = tablica[k];
            }
        }

        cout << wynik << endl;
        suma = 0;

    }
}
