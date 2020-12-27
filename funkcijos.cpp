#include "funkcijos.h"
#include "studentas.h"

bool compareVardai(Studentas a, Studentas b) {
    return a.getVardas() < b.getVardas();
}
bool comparePavardes(Studentas a, Studentas  b) {
    return a.getPavarde() < b.getPavarde();
}

Studentas::Studentas(string v, string p, vector<int> paz, int e, float g) : Zmogus(v, p) {
	pazymiai = paz;
	egzaminas = e;
	galutinis = g;
}

list<Studentas>nuskaitymas_list() {
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
			cout << "Klaida! Failas tokiu pavadinimu nerastas" << endl;
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
	list<Studentas> grupe;
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

			Studentas studentas;

			studentas.setVardas(vardas);
			studentas.setPavarde(pavarde);
			studentas.setGalutinis(galutinis);

			grupe.push_back(studentas);

		}
	}
	failas.close();
	return grupe;
}

bool tikrinimas(Studentas& eilute) {
	return eilute.getGalutinis() < 5;
}



