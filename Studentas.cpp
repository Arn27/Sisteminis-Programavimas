#include "Studentas.h";

Studentas::Studentas() {
	vardas = "";
	pavarde = "";
	nd.push_back(0);
	egz = 0;
	galutinis = 0;
}

Studentas::Studentas(string v, string p, vector <int> n, int e) {
	vardas = v;
	pavarde = p;
	nd = n;
	egz = e;
	galutinis = 0;
}

Studentas::Studentas(const Studentas& s) {
	vardas = s.vardas;
	pavarde = s.pavarde;
	nd = s.nd;
	egz = s.egz;
	galutinis = s.galutinis;
}

Studentas::~Studentas() {};

ostream& operator<<(ostream& output, const Studentas& S) {
	output << setw(15) << left << S.pavarde << setw(15) << left << S.vardas << setw(15) << left << S.galutinis << endl;
	return output;
}

istream& operator>>(istream& input, Studentas& S) {
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
		cout << "Kiek namu darbu rezultatu sugeneruoti?" << endl;
		cin >> kiek;
		for (i = 0; i < kiek; i++) {
			pazym = rand() % 10;
			S.nd.push_back(pazym);
		}
		pazym = rand() % 10; // egzamino rezultatas
		S.egz = pazym;
	}
	else {
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

string Studentas::getVarda() {
	return this->vardas;
}

string Studentas::getPavarde() {
	return this->pavarde;
}

double Studentas::getGalutinis() {
	return this->galutinis;
}

void Studentas::countGalutinis(bool budas) {
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