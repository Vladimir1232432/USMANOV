#include<iostream>

using namespace std;

	

int main() {
	int IshodnoeChislo = 20610;//изменить на своё
	int Mnojitel = 55642;//изменить на своё
	int Delitel = 35542;//изменить на своё
	int Proizvedenie = IshodnoeChislo * Mnojitel;
	int CelaiaChast = Proizvedenie / Delitel;
	int Ostatok = Proizvedenie % Delitel;
	double SluchiainoeChislo = (double)Ostatok / 100000;

	cout << IshodnoeChislo<<" " << '\t';
	cout << Proizvedenie << " " << '\t';
	cout << CelaiaChast << " " << '\t';
	cout << Ostatok << " " << '\t';
	cout << SluchiainoeChislo << endl;

	for (int i = 0; i < 15; i++) {
		 int NovoeIshodnoeChislo = Ostatok;
		 Proizvedenie = NovoeIshodnoeChislo * Mnojitel;
		 CelaiaChast = Proizvedenie / Delitel;
		 Ostatok = Proizvedenie % Delitel;
		 SluchiainoeChislo = (double)Ostatok / 100000;


		cout << NovoeIshodnoeChislo << " "<<'\t';
		cout << Proizvedenie << " " << '\t';
		cout << CelaiaChast << " " << '\t';
		cout << Ostatok << " " << '\t';
		cout << SluchiainoeChislo << endl;
	}

	return 0;
}