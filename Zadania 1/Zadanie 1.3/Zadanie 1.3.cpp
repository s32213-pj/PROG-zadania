#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Polish");
    int liczba;

    // Wczytanie liczby od użytkownika
    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    // Sprawdzenie warunków
    if (liczba == 0) {
        cout << "Liczba jest równa zero." << endl;
    }
    else if (liczba % 2 == 0) {
        cout << "Liczba " << liczba << " jest parzysta." << endl;
    }
    else {
        cout << "Liczba " << liczba << " jest nieparzysta." << endl;
    }
    cin.get();

    return 0;
}