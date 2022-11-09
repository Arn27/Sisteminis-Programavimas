#include "bibliotekos.h"


// ---------------------------------------------------------Funkcijos

void Atvaizdavimas(int v, const vector<Studentas>& S) {
	int kiek = S.size();
	if (v == 1) {
		cout << setw(15) << left << "Pavarde" << setw(15) << left << "Vardas" << setw(15) << left << setprecision(2) << fixed << "Galutinis(Vidurkis)" << endl;
	}
	else {
		cout << setw(15) << left << "Pavarde" << setw(15) << left << "Vardas" << setw(15) << left << setprecision(2) << fixed << "Galutinis(Mediana)" << endl;
	}
	cout << "------------------------------------------" << endl;

	for (int j = 0; j < kiek; j++) {
		cout << S[j];
	}
};

int meniu() {
	int op = 0;
	cout << "-------MENIU" << endl;
	cout << "1. Prideti studenta" << endl;
	cout << "2. Duomenu atvaizdavimas (Vidurkis)" << endl;
	cout << "3. Duomenu atvaizdavimas (Mediana)" << endl;
	cout << "4. Skaityti is failo" << endl;
	cout << "------------" << endl;
	cout << "9. Baigti" << endl;
	cin >> op;

	return op;
};


//-------------------------------------------Main
int main()
{
	int option = 0, kiek = 0;
	string r;
	Studentas S;
	vector <Studentas> Studentai;

	while (option != 9) {
		option = meniu();

		switch (option) {
		case 1:
			// prideti studenta
			cin >> S;
			Studentai.push_back(S);
			break;
		case 2:
			kiek = Studentai.size();
			for (int i = 0; i < kiek; i++) {
				Studentai[i].countGalutinis(1);
			}
			Atvaizdavimas(1, Studentai);
			break;
		case 3:
			for (int i = 0; i < kiek; i++) {
				Studentai[i].countGalutinis(1);
			}
			Atvaizdavimas(0, Studentai);
			break;
		case 4:
			isfailo();
			break;
		}
	}

	system("pause");
	return 0;
}
