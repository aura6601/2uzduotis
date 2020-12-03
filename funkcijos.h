#pragma once
#ifndef FUNKCIJOS_H_INCLUDED
#define FUNKCIJOS_H_INCLUDED

using namespace std;

#include <string>
#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdio>
#include <sstream> 
#include <chrono>
#include <vector>
#include <list>


#include "struktura.h";

bool tikrinimas(const studentas& eilute);
bool compareVardai(studentas a, studentas b);
bool comparePavardes(studentas a, studentas  b);

vector<studentas> nuskaitymas_vector();
list<studentas> nuskaitymas_list();

#endif
