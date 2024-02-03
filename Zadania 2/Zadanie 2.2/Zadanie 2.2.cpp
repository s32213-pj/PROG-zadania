#include <iostream>
#include <locale.h>
using namespace std;

int a, b;

int main() {
	setlocale(LC_CTYPE, "Polish");

	
	cout << "Podaj dlugość boku a: ";
	cin >> a;
	cout << "Podaj dlugosc boku b: ";
	cin >> b;
	
	cout << "Wiersz o dlugość a:" << endl;
	for (int i = 0; i < a; i++) {
		cout << "*";
	}
	
	cout << "\n\nKolumna o długości b:" << endl;
	for (int i = 0; i < b; i++) {
		cout << "*" << endl;
	}
	
	cout << "\nProstokąt o wymiarach a na b:" << endl;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "\nObwód o wymiarach a na b:" << endl;
	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= a; j++) {
			if (i == 1 || i == b) {
				cout << "*";
			}
			else {
				if (j == 1 || j == a) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}

		}
		cout << endl;
	}
	return 0;
}