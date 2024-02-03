#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int size;
    //  Wczytanie rozmiaru tablicy liczb całkowitych
    cout << "Podaj rozmiar tablicy (musi byc liczba parzysta): ";
    cin >> size;

    if (size <= 0 || size % 2 != 0) {
        std::cout << "Rozmiar tablicy musi byc dodatni i parzysty." << std::endl;
        return 1;
    }
    //  Wczytanie elementów tablicy liczb całkowitych
    vector<int> array(size);

    cout << "Podaj elementy tablicy:" << endl;
    for (int i = 0; i < size; ++i)
        cin >> array[i];

    reverse(array.begin(), array.end());

    cout << "Tablica po zamianie miejscami:" <<endl;
    for (const auto& element : array)
        cout << element << " ";

    return 0;
}