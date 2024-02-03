#include <iostream>
#include <iostream>
using namespace std;

// Funkcja do obliczania współczynnika dwumianowego n po k
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

// Funkcja do wyświetlania trójkąta Pascala
void printPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Wypisanie spacji na początku każdego wiersza
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        // Wypisanie współczynników dwumianowych w danym wierszu
        for (int j = 0; j <= i; j++) {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_CTYPE, "Polish");
    int rows;

    // Pobieranie liczby wierszy od użytkownika
    cout << "Podaj liczbe wierszy trójkąta Pascala: ";
    cin >> rows;

    // Wyświetlanie trójkąta Pascala
    cout << "Trójkąt Pascala:" << endl;
    printPascalTriangle(rows);

    return 0;
}