#include "Isfailo.h";

void Isfailo( int c ) {
	ifstream input("Studentai.txt");
	string firstName;
	string lastName;
	bool check = false;
	int nd1, nd2, nd3, nd4, nd5;
	int i=0, egzaminas, temp = 0;
	vector<int> namudarbai;
	deque<Studentas> STs;

	auto start = high_resolution_clock::now();
	for (string line; getline(input, line); ){
		istringstream ss(line);
		if (i == 0) {
			i++;
		}
		else {
			stringstream iss(line);
			iss >> firstName >> lastName >> nd1 >> nd2 >> nd3 >> nd4 >> nd5 >> egzaminas;
			namudarbai.push_back(nd1);
			namudarbai.push_back(nd2);
			namudarbai.push_back(nd3);
			namudarbai.push_back(nd4);
			namudarbai.push_back(nd5);
			Studentas Stud(firstName, lastName, namudarbai, egzaminas);
			STs.push_back(Stud);
		}
	}
	auto stop = high_resolution_clock::now();
	auto trukme = duration_cast<milliseconds>(stop - start);
	cout << "Faila nuskaityti uztruko: " << trukme.count() << "ms." << endl;

}
