#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Polish");
    int n;

    // Wczytanie liczby n od użytkownika
    cout << "Podaj liczbę n: ";
    cin >> n;

    int suma = 0;
    int skladnik = 0;

    // Obliczanie sumy szeregu
    for (int i = 1; i <= n; ++i) {
        skladnik += i;
        suma += skladnik;
    }

    // Wyświetlenie wyniku
    cout << "Suma szeregu wynosi: " << suma << endl;

    return 0;
}