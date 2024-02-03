#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    int liczba;
    setlocale(LC_CTYPE, "Polish");
    // Wczytanie liczby od użytkownika
    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    // Sprawdzenie warunków
    if (liczba > 0) {
        cout << "Liczba " << liczba << " jest dodatnia." << endl;
    }
    else if (liczba < 0) {
        cout << "Liczba " << liczba << " jest ujemna." << endl;
    }
    else {
        cout << "Liczba jest równa zero." << endl;
    }
    cin.get();
    return 0;
}