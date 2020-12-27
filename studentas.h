#pragma once
#include "bibliotekos.h"
#include "zmogus.h"

using namespace std;

class Studentas : public Zmogus {

private:
	int egzaminas;
	vector<int> pazymiai;
	float galutinis;
public:
	bool compareVardai(const Studentas& a, const Studentas& b);
	bool comparePavardes(const Studentas& a, const Studentas& b);

	Studentas() {};
	Studentas(string v, string p, vector<int> paz, int e, float g);

	~Studentas() {};

	Studentas& operator=(const Studentas& s)
	{
		Zmogus::operator=(s);
		vardas = s.vardas;
		pavarde = s.pavarde;
		pazymiai = s.pazymiai;
		egzaminas = s.egzaminas;
		galutinis = s.galutinis;
		return *this;
	};
	const string& getVardas() {
		return vardas;
	}
	const string& getPavarde() {
		return pavarde;
	}
	const int& getEgzaminas() {
		return egzaminas;
	}
	const vector<int>& getPazymiai() {
		return pazymiai;
	}
	const double& getGalutinis()
	{
		return galutinis;
	}
	void setVardas(string v) {
		vardas = v;
	}
	void setPavarde(string p) {
		pavarde = p;
	}
	void setEgzaminas_(int e) {
		egzaminas = e;
	}
	void setPazymiai(vector<int> paz) {
		pazymiai = paz;
	}
	void setGalutinis(double g) {
		galutinis = g;
	}
};

bool compareVardai(Studentas& a, Studentas& b);
bool comparePavardes(Studentas& a, Studentas& b);
list<Studentas> nuskaitymas_list();
bool tikrinimas(Studentas& eilute);
void irasymas(list<Studentas> sarasas);
