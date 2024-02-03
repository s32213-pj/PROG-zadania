#include <iostream>
#include <climits>

using namespace std;

int main() {
    // Pobieranie liczby elementów tablicy od użytkownika
    cout << "Podaj liczbe elementow tablicy: ";
    int n;
    cin >> n;

    // Tworzenie tablicy o rozmiarze n
    int* tablica = new int[n];

    // Pobieranie wartości elementów tablicy od użytkownika
    cout << "Podaj elementy tablicy:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }
    // Znajdowanie największego elementu w tablicy
    int max = tablica[0];
    for (int i = 1; i < n; ++i) {
        if (tablica[i] > max) {
            max = tablica[i];
        }
    }

    // Wyświetlanie największego elementu
    cout << "Najwiekszy element tablicy: " << max << endl;



    return 0;
}