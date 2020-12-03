#include "funkcijos.h"

bool compareVardai(studentas a, studentas b) {
    return a.vardas < b.vardas;
}
bool comparePavardes(studentas a, studentas  b) {
    return a.pavarde < b.pavarde;
}

list<studentas> nuskaitymas() {
	fstream failas;

	string n;

	do {
		try {
			cout << "Iveskite failo pavadinima: " << endl;
			cin >> n;
			failas.open(n);

			if (failas.fail())
			{
				throw runtime_error("Failas nerastas");
			}
		}
		catch (runtime_error& e) {
			cout << "Klaida! Failas tokiu pavadinimu nerastas." << endl;
			cout << "Jusu ivestis: " << n << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
	} while (failas.fail());

	int rows = 0, cols = 0;
	string eilute, reiksme;
	string vardas1, pavarde1, vardas, pavarde;
	string rez;
	vector<string> rezultatai1;
	vector<string> rezultatai;
	list<studentas> grupe;
	float galutinis;

	while (getline(failas, eilute)) {
		rows++;
		if (rows == 1) {
			stringstream ss(eilute);
			while (ss >> reiksme) {
				cols++;
			}
		}
	}
	failas.close();

	failas.open(n);

	if (failas.is_open()) {
		for (int i = 0; i < 1; i++) {
			failas >> vardas1 >> pavarde1;

			for (int j = 0; j < cols - 2; j++) {
				failas >> rez;
				rezultatai1.push_back(rez);
			}
			rezultatai1.clear();
			vector<string>().swap(rezultatai1);
		}

		for (int i = 1; i < rows; i++) {
			failas >> vardas >> pavarde >> galutinis;

			grupe.push_back(studentas{ vardas, pavarde, galutinis });

		}
	}
	failas.close();
	return grupe;
}



void spausdinimas(vector<studentas>sarasas)
{

	auto start = chrono::high_resolution_clock::now();

	fstream failas;

	string pav;
	cout << "Iveskite failo, i kuri irasysite duomenis, pavadinima" << endl;
	cin >> pav;

	failas.open(pav);

	failas << left << setw(30) << "Vardas" << setw(30) << "Pavarde" << setw(30) << "Galutinis balas (vidurkis)" << endl;

	for (int i = 0; i < sarasas.size(); i++) {
		failas << left << setw(30) << sarasas[i].vardas << setw(30) << sarasas[i].pavarde << setw(30) <<sarasas[i].galutinis << endl;
	}

	failas.close();
	sarasas.clear();

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> time = finish - start;

	cout << "Failo irasymas truko: " << time.count() << "s" << endl;
}

