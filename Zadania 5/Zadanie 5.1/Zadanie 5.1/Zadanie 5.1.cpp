#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Pobieranie liczby elementów wektora od użytkownika
    cout << "Podaj liczbe elementow wektora: ";
    cin >> n;

    // Tworzenie wektora o rozmiarze n
    vector<int> wektor(n);

    //  Pobieranie wartości wszystkich elementów wektora od użytkownika
    cout << "Podaj elementy wektora: ";
    for (int i = 0; i < n; ++i) {
        cin >> wektor[i];
    }

    //  Wskazywanie wartości elementu maksymalnego wektora
    int max_element = wektor[0];
    for (int i = 1; i < n; ++i) {
        if (wektor[i] > max_element) {
            max_element = wektor[i];
        }
    }
    cout << "Wartosc elementu maksymalnego wektora: " << max_element << endl;

    //  Wskazywanie numeru indeksu elementu maksymalnego
    int index_max_element = 0;
    for (int i = 1; i < n; ++i) {
        if (wektor[i] == max_element) {
            index_max_element = i;
            break; // Zakończ pętlę po znalezieniu pierwszego wystąpienia maksimum
        }
    }
    cout << "Numer indeksu elementu maksymalnego wektora: " << index_max_element << endl;

    return 0;
}