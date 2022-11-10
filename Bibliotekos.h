#ifndef UNTITLED_BIBLIOTEKOS_H
#define UNTITLED_BIBLIOTEKOS_H
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <chrono>
#include <deque>
#include "Studentas.h"
#include "Isfailo.h"
#include "FailuGeneravimas.h"

using std::cin;
using std::cout;
using std::istream;
using std::ostream;
using std::endl;
using std::setw;
using std::setprecision;
using std::fixed;
using std::left;
using std::right;
using std::string;
using std::vector;
using namespace std::chrono;

void Atvaizdavimas(int v, const vector<Studentas>& S);

#endif