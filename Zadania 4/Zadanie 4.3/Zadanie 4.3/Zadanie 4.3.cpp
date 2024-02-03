#include <iostream>

using namespace std;

int main() {
    const int rozmiar = 10;
    int tablica[rozmiar][10];

    // Wypełnianie tablicy
    for (int i = 0; i < rozmiar; ++i) {
        tablica[i][0] = i;
        tablica[i][1] = i + i;
        tablica[i][2] = 0;
        tablica[i][3] = 0;
        tablica[i][4] = 0;
        tablica[i][5] = 0;
        tablica[i][6] = 0;
        tablica[i][7] = 0;
        tablica[i][8] = 0;
        tablica[i][9] = 0;
    }

    // Wyświetlanie tablicy
    cout << "Pierwsze dwa rzędy tablicy 10x10:" << endl;
    for (int i = 0; i < rozmiar; ++i) {
        cout << tablica[i][0] << "\t" << tablica[i][1] << endl;

    }

    return 0;
}
