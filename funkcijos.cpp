#include "studentas.h"


/**
  * palyginami vardai
  */


bool Studentas::compareVardai(const Studentas& a, const Studentas& b)
{
	return false;
}

/**
  * palyginamos pacardes
  */

bool Studentas::comparePavardes(const Studentas& a, const Studentas& b)
{
	return false;
}

/**
 * Konstruktoriaus realizacija
 */

Studentas::Studentas(string v, string p, vector<int> paz, int e, float g) : Zmogus(v, p) {
	pazymiai = paz;
	egzaminas = e;
	galutinis = g;
}

bool compareVardai(Studentas& a, Studentas& b)
{
	return false;
}

bool comparePavardes(Studentas& a, Studentas& b)
{
	return false;
}

/**
  * failo nuskaitymas 
  */
list<Studentas>nuskaitymas_list() {
	fstream failas;

	string n;

	do {
		try {
			cout << "Iveskite failo su duomenimis pavadinima: " << endl;
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

/**
  * patikrinimas
  */

bool tikrinimas(Studentas& eilute) {
	return eilute.getGalutinis() < 5;
}

/**
  * vargsiuku irasymas i faila 
  */

void irasymas(list<Studentas> sarasas) {
	auto start = chrono::high_resolution_clock::now();

	fstream f;

	string pav;

	do {
		try {
			cout << "Iveskite failo i kuri irasysite vargsiukus pavadinima: " << endl;
			cin >> pav;
			f.open(pav);

			if (f.fail())
			{
				throw runtime_error("Failas tokiu pavadinimu neegzistuoja");
			}
		}
		catch (runtime_error& e) {
			cout << "Klaida! Failas nerastas." << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
	} while (f.fail());

	f << left << setw(30) << "Vardas" << setw(30) << "Pavarde" << setw(30) << "Galutinis" << endl;

	for (Studentas& s : sarasas) {
		f << left << setw(30) << s.getVardas() << setw(30) << s.getPavarde() << setw(30) << fixed << setprecision(2) << s.getGalutinis() << endl;
	}

	f.close();
	sarasas.clear();

	/**
  *  irasymo i faila laikas 
  */

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> skirtumas = finish - start;

	cout << "Failo irasymas truko: " << skirtumas.count() << "s" << endl;
}
