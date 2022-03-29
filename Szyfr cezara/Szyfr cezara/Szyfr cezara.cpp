#include <iostream>
#include <windows.h>
using namespace std;
void szyfruj(int klucz, char tab[])
{
	int dl = strlen(tab);
	if (!(klucz >= -26 && klucz <= 26)) return;

	if (klucz >= 0) {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz <= 'z') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i] + klucz - 26;
			}
		}
	}
	else {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz >= 'a') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i] + klucz + 26;
			}
		}
	}
}

int main()
{
	bool program = true;
	int menu;
	while (program == true) {
		cout << "Szyfr cezara" << endl;
		cout << "1:Szyfruj" << endl;
		cout << "2:Autorzy" << endl;
		cout << "3:Wyjdz" << endl;
		cin >> menu;
		if (menu == 1) {
			char tab[1000];
			int klucz;
			cout << "Podaj wyraz z małych liter:";
			cin >> tab;
			cout << "Podaj klucz od -26 do 26]:";
			cin >> klucz;
			szyfruj(klucz, tab);
			cout << "Po zaszyfrowaniu:" << tab << endl;
			szyfruj(-klucz, tab);
			cout << "Po rozszyfrowaniu:" << tab << endl;
			Sleep(10000);
			system("cls");
		}
		else if (menu == 2) {
			cout << "Maxwell Broll" << endl;
			cout << "Luka Stojanović" << endl;
			Sleep(2000);
			system("cls");
		}
		else if (menu == 3) {
			program = false;
		}
		else
		{
			system("cls");
			cout << "Błąd" << endl;
			Sleep(2000);
			system("cls");
		}
	}
}