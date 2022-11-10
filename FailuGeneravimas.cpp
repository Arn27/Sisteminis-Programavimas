#include "FailuGeneravimas.h"

void FailuGeneravimas(int k) {
	ofstream output("Studentai.txt");
	string vardas = "Vardas";
	string pavarde = "Pavarde";
	auto start = high_resolution_clock::now();
	output << setw(15) << left << vardas << setw(15) << left << pavarde << setw(5) << left << "ND1" << setw(5) << left << "ND2"
		<< setw(5) << left << "ND3" << setw(5) << left << "ND4" << setw(5) << left << "ND5" << setw(10) << left << "Egzaminas" << endl;

	for (long i = 1; i <= k; i++) {
		output << setw(15) << left << vardas + to_string(i) << setw(15) << left << pavarde + to_string(i) << setw(5) << left << rand() % 10 + 1
			<< setw(5) << left << rand() % 10 + 1 << setw(5) << left << rand() % 10 + 1 << setw(5) << left << rand() % 10 + 1
			<< setw(5) << left << rand() % 10 + 1 << setw(10) << left << rand() % 10 + 1 << endl;
	}

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop - start);
	cout << "Faila sukurti uztruko: " << duration.count() << "ms." << endl;

	output.close();
};

void RusiavimasIDuFailus() {

	ifstream input("Studentai.txt");
	string firstName;
	string lastName;
	bool check = false;

	int i = 0, egzaminas, temp = 0;
	vector<int> namudarbai;
	vector<Studentas> Studentai, vargsiukai, kietekai;

	for (string line; getline(input, line); ) {
		istringstream ss(line);
		if (i == 0) {
			i++;
		}
		else {
			stringstream iss(line);
			iss >> firstName >> lastName;
			for (int j = 0; j < 5; j++) {
				iss >> temp;
				namudarbai.push_back(temp);
			}
			iss >> egzaminas;
			Studentas Stud(firstName, lastName, namudarbai, egzaminas);
			Studentai.push_back(Stud);
		}
	}

	for (int m = 0; m < Studentai.size(); m++) {
		Studentai[m].countGalutinis(0);
	}
	
	auto start1 = high_resolution_clock::now();
	for (Studentas st : Studentai) {
		if (st.getGalutinis() >= 5) {
			kietekai.push_back(st);
		}
		else {
			vargsiukai.push_back(st);
		}
	}

	auto stop1 = high_resolution_clock::now();
	auto trukme1 = duration_cast<milliseconds>(stop1 - start1);
	cout << "Studentu rusiavimas uztruko: " << trukme1.count() << "ms." << endl;

	auto start2 = high_resolution_clock::now();
	ofstream outVar("Vargsiukai.txt");
	outVar << setw(15) << left << "Pavarde" << setw(15) << left << "Vardas" << setw(15) << left << setprecision(2) << fixed << "Galutinis(Vidurkis)" << endl;
	for (int i = 0; i < vargsiukai.size(); i++) {
		outVar << setw(15) << left << vargsiukai[i].getVarda() << setw(15) << left << vargsiukai[i].getPavarde() << setw(5) << left << vargsiukai[i].getGalutinis() << endl;
	}

	outVar.close();

	ofstream outKiet("Kietekai.txt");
	outKiet << setw(15) << left << "Pavarde" << setw(15) << left << "Vardas" << setw(15) << left << setprecision(2) << fixed << "Galutinis(Vidurkis)" << endl;
	for (int i = 0; i < kietekai.size(); i++) {
		outKiet << setw(15) << left << kietekai[i].getVarda() << setw(15) << left << kietekai[i].getPavarde() << setw(5) << left << kietekai[i].getGalutinis() << endl;
	}

	outKiet.close();

	auto stop2 = high_resolution_clock::now();
	auto trukme2 = duration_cast<milliseconds>(stop2 - start2);
	cout << "Studentu surasymas i skirtingus failus uztruko: " << trukme2.count() << "ms." << endl;
};