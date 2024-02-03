#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Polish");
    char znak;

    cout << "Podawaj znaki z klawiatury. Wpisz 't', aby zakończyć." << endl;

    // Pobieranie znaków z klawiatury do momentu, aż zostanie podany znak 't'
    do {
        cin >> znak;
        cout << "Wprowadzony znak: " << znak << endl;
    } while (znak != 't');

    cout << "Koniec programu." << endl;

    return 0;
}