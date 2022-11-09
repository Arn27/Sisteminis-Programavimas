#include "bibliotekos.h"

// --------------------------------------------Pagrindine studento klase
class Studentas {
	string vardas;
	string pavarde;
	vector <int> nd; // Namu darbu ivertinimu masyvas
	int egz; // Egzamino rezultatas
	double galutinis; // Galutinis balas

public:
	Studentas() {
		vardas = "";
		pavarde = "";
		nd.push_back(0);
		egz = 0;
		galutinis = 0;
	}

	Studentas(string v, string p, vector <int> n, int e) {
		vardas = v;
		pavarde = p;
		nd.push_back(0);
		egz = e;
		galutinis = 0;
	}

	Studentas(const Studentas& s) {
		vardas = s.vardas;
		pavarde = s.pavarde;
		nd = s.nd;
		egz = s.egz;
		galutinis = s.galutinis;
	}

	~Studentas() {}

	friend ostream& operator<<(ostream& output, const Studentas& S) {
		output << setw(15) << left << S.pavarde << setw(15) << left << S.vardas << setw(15) << left << S.galutinis << endl;
		return output;
	}

	friend istream& operator>>(istream& input, Studentas& S) {
		int i = 0, ar = 0, kiek = 0, pazym = 0;
		cout << "Naujo studento ivedimas" << endl;
		cout << "Iveskite studento varda:" << endl;
		cin >> S.vardas;
		cout << "Iveskite studento pavarde:" << endl;
		cin >> S.pavarde;
		cout << "Sugeneruoti studento balus? Iveskite \"1\"" << endl;
		cout << "Ivesite rankiniu budu? Iveskite \"2\"" << endl;
		cin >> ar;
		if (ar == 1) {
			cout << "Kiek namu rezultatu sugeneruoti?" << endl;
			cin >> kiek;
			for (i = 0; i < kiek; i++) {
				pazym = rand() % 10;
				S.nd.push_back(pazym);
			}
			pazym = rand() % 10; // egzamino rezultatas
			S.egz = pazym;
		} else {
			cout << "Iveskite studento namu darbu rezultatus:" << endl;

			cout << "Baige iveskite 999 ir paspauskite enter" << endl;
			while (i != 999) {
				cin >> i;
				if (i < 11) {
					S.nd.push_back(i);
				}
			}
			cout << "Iveskite egzamino rezultata:" << endl;
			cin >> S.egz;
		}
		cout << "Duomenys sekmingai ivesti!" << endl;
		return input;
	}

	void countGalutinis(bool budas) {
		int k = nd.size();
		int total = 0;
		if (budas == 1) {
			for (int i = 0; i < k; i++) {
				total += nd[i];
			}
			galutinis = total / (double)k;
			galutinis = (galutinis * 0.4) + (egz * 0.6);
		}
		else {
			sort(nd.begin(), nd.end());
			if (k % 2 == 1) {
				k = k / 2;
				galutinis = (nd[k] * 0.4) + (egz * 0.6);
			}
			else {
				k = k / 2;
				k = (nd[k - 1] + nd[k]) / 2;
				galutinis = (k * 0.4) + (egz * 0.6);
			}
		}
	}
};

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
	cout << "------------" << endl;
	cout << "9. Baigti" << endl;
	cin >> op;

	return op;
};


//-------------------------------------------Main
int main()
{
	int option = 0, kiek = 0;
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
		}
	}

	system("pause");
	return 0;
}
