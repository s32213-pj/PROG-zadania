#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Polish");
    int miesiac;

    // Pobieranie liczby miesiąca od użytkownika
    cout << "Podaj numer miesiąca (od 1 do 12): ";
    cin >> miesiac;

    // Sprawdzanie, czy podana liczba mieści się w przedziale od 1 do 12
    if (miesiac < 1 || miesiac > 12) {
        cout << "Podano niepoprawny numer miesiąca. Program zostanie zakończony." << endl;
        return 1; // Zakończenie programu z kodem błędu
    }

    // Wypisanie polskiej nazwy miesiąca
    cout << "Miesiąc: ";
    switch (miesiac) {
    case 1:
        cout << "Styczeń" << endl;
        break;
    case 2:
        cout << "Luty" << endl;
        break;
    case 3:
        cout << "Marzec" << endl;
        break;
    case 4:
        cout << "Kwiecień" << endl;
        break;
    case 5:
        cout << "Maj" << endl;
        break;
    case 6:
        cout << "Czerwiec" << endl;
        break;
    case 7:
        cout << "Lipiec" << endl;
        break;
    case 8:
        cout << "Sierpień" << endl;
        break;
    case 9:
        cout << "Wrzesień" << endl;
        break;
    case 10:
        cout << "Październik" << endl;
        break;
    case 11:
        cout << "Listopad" << endl;
        break;
    case 12:
        cout << "Grudzień" << endl;
        break;
    }
    // Wypisanie liczby dni w miesiącu nieprzestępnym
    int dni;
    switch (miesiac) {
    case 1:
        dni = 31;
        break;
    case 2:
        dni = 28;
        break;
    case 3:
        dni = 31;
        break;
    case 4:
        dni = 30;
        break;
    case 5:
        dni = 31;
        break;
    case 6:
        dni = 30;
        break;
    case 7:
        dni = 31;
        break;
    case 8:
        dni = 31;
        break;
    case 9:
        dni = 30;
        break;
    case 10:
        dni = 31;
        break;
    case 11:
        dni = 30;
        break;
    case 12:
        dni = 31;
        break;
    }
    cout << "Liczba dni w miesiącu nieprzestępnym: " << dni << endl;

    // Sprawdzanie, czy w miesiącu jest słonecznie czy pochmurno
    bool slonecznie;
    switch (miesiac) {
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        slonecznie = true;
        break;
    default:
        slonecznie = false;
        break;
    }
    if (slonecznie) {
        cout << "W tym miesiącu jest słonecznie." << endl;
    }
    else {
        cout << "W tym miesiącu jest pochmurno." << endl;
    }

    return 0;
}