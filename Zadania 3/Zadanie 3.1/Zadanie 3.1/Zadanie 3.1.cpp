#include <iostream>
#include <iomanip> // Do ustawienia precyzji wyświetlania
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Polish");
    float x, y;

    // Wczytanie dwóch liczb z klawiatury
    cout << "Podaj pierwszą liczbę (x): ";
    cin >> x;

    cout << "Podaj drugą liczbę (y): ";
    cin >> y;

    // Obliczenie sumy, różnicy, iloczynu i ilorazu
    float suma = x + y;
    float roznica = x - y;
    float iloczyn = x * y;
    float iloraz = x / y;

    // Wyświetlenie wyników z dokładnością do dwóch miejsc po kropce
    cout << fixed << setprecision(2); // Ustawienie precyzji wyświetlania na dwie liczby po kropce

    cout << "Suma: " << suma << endl;
    cout << "Różnica: " << roznica << endl;
    cout << "Iloczyn: " << iloczyn << endl;
    cout << "Iloraz: " << iloraz << endl;

    return 0;
}