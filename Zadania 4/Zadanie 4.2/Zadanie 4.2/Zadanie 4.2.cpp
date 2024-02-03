#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // Pobieranie liczby elementów tablicy od użytkownika
    cout << "Podaj liczbe elementow tablicy: ";
    int n;
    cin >> n;

    
    
    // Tworzenie tablicy 
    int* tablica = new int[n];

    // Pobieranie wartości elementów tablicy od użytkownika
    cout << "Podaj elementy tablicy:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }
    // Tworzenie mapy, aby zliczyć wystąpienia każdego elementu
    unordered_map<int, int> wystapienia;

    // Znajdowanie elementu o maksymalnej liczbie wystąpień
    for (int i = 0; i < n; ++i) {
        wystapienia[tablica[i]]++;
    }
    int najczesciejWystepujacyElement = tablica[0];
    int najwiecejWystapien = 1;

    for (const auto& para : wystapienia) {
        if (para.second > najwiecejWystapien) {
            najczesciejWystepujacyElement = para.first;
        }
    }
    cout << "Najczesciej wystepujacy element tablicy: " << najczesciejWystepujacyElement << endl;

    return 0;
}