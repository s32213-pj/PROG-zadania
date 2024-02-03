#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Polish");
    int a, b, c;

    // Wczytanie trzech liczb od użytkownika
    cout << "Podaj trzy liczby: ";
    cin >> a >> b >> c;

    // Sprawdzenie, która liczba jest największa
    int max;

    if (a >= b && a >= c) {
        max = a;
    }
    else if (b >= a && b >= c) {
        max = b;
    }
    else {
        max = c;
    }

    // Wyświetlenie największej liczby
    cout << "Największa liczba to: " << max << endl;
   
    return 0;
}