#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Pobieranie wartości współczynników od użytkownika
    double a, b, c;
    cout << "Podaj wspolczynniki rownania kwadratowego (ax^2 + bx + c):" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    // Wypisanie postaci równania kwadratowego
    cout << "Postac rownania kwadratowego: ";
    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    // Obliczanie delty
    double delta = b * b - 4 * a * c;

    // Sprawdzenie czy delta jest dodatnia, ujemna czy równa zero
    if (delta > 0) {
        // Obliczanie pierwiastków
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        // Wypisanie pierwiastków
        cout << "Pierwiastki rownania kwadratowego:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        // Obliczanie i wypisanie pierwiastka dla delty równego zero
        double x = -b / (2 * a);
        cout << "Pierwiastek rownania kwadratowego:" << endl;
        cout << "x = " << x << endl;
    }
    else {
        // W przypadku delty ujemnej, brak pierwiastków rzeczywistych
        cout << "Rownanie kwadratowe nie ma pierwiastkow rzeczywistych." << endl;
    }

    return 0;
}