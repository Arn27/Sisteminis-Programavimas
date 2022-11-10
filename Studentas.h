#ifndef UNTITLED_STUDENTAS_H
#define UNTITLED_STUDENTAS_H
#include "Bibliotekos.h"

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::istream;
using std::ostream;
using std::fixed;
using std::left;
using std::right;
using std::endl;
using std::setw;
using std::setprecision;


class Studentas {
	string vardas;
	string pavarde;
	vector<int> nd; // Namu darbu ivertinimu masyvas
	int egz; // Egzamino rezultatas
	double galutinis; // Galutinis balas

public:
	Studentas();

	Studentas(string v, string p, vector<int> n, int e);

	Studentas(const Studentas& s);

	~Studentas();

	void countGalutinis(bool budas);

	friend ostream& operator<<(ostream& output, const Studentas& S);
	friend istream& operator>>(istream& input, Studentas& S);

	string getVarda();
	string getPavarde();
	double getGalutinis();
};

#endif
