#include "isfailo.h";
#include "bibliotekos.h"
#include "Studentas.h";


void isfailo() {
	ifstream input("studentai10.txt");
	string firstName;
	string lastName;
	bool check = false;

	int i=0, egzaminas, temp = 0;
	vector<int> namudarbai;
	vector<Studentas> STs;
	cout << "Skaiciuoti vidurki ar mediana? Vidurkis - 1; Mediana - 0" << endl;
	cin >> check;

	for (string line; getline(input, line); ){
		istringstream ss(line);
		if (i == 0) {
			i++;
		}
		else {
			stringstream iss(line);
			iss >> firstName >> lastName;
			for (int j = 0; j < 15; j++) {
				iss >> temp;
				namudarbai.push_back(temp);
			}
			iss >> egzaminas;
			Studentas Stud(firstName, lastName, namudarbai, egzaminas, check);
			STs.push_back(Stud);
		}
	}

	sort(STs.begin(), STs.end(), [](Studentas lhs, Studentas rhs) {
		return lhs.getPavarde() < rhs.getPavarde();
	});

	Atvaizdavimas(check, STs);
}