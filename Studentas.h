#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include "isfailo.h";

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
	vector <int> nd; // Namu darbu ivertinimu masyvas
	int egz; // Egzamino rezultatas
	double galutinis; // Galutinis balas

public:
	Studentas();

	Studentas(string v, string p, vector <int> n, int e, bool b);

	Studentas(const Studentas& s);

	~Studentas();

	void countGalutinis(bool budas);

	friend ostream& operator<<(ostream& output, const Studentas& S);
	friend istream& operator>>(istream& input, Studentas& S);

	string getPavarde();
};


#endif