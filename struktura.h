#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std; 

class Studentas {

private:
	string vardas_;
	string pavarde_;
	int egzaminas_;
	vector<int> pazymiai_;
	double mediana_; 
public:
	Studentas() { };
	Studentas(string v, string p, int e, vector<int>nd, double m);
	~Studentas() {};
	const string& getVardas_() {
		return vardas_;
	}
	const string& getPavarde_() {
		return pavarde_;
	}
	const int& getEgzaminas_() {
		return egzaminas_;
	}
	const vector<int>& getPazymiai_() {
		return pazymiai_;
	}
	const double& getMediana_() {
		return mediana_;
	}
	void setVardas_(string v) {
		vardas_ = v;
	}
	void setPavarde_(string p) {
		pavarde_ = p;
	}
	void setEgzaminas_(int e) {
		egzaminas_ = e;
	}
	void setPazymiai_(vector<int> nd) {
		pazymiai_ = nd;
	}
	void setMediana_(double m) {
		mediana_ = m;
	}
};

struct vargsiukai {
	string vardas;
	string pavarde;
	float galutinis;
};

struct galvociai {
	string vardas;
	string pavarde;
	float galutinis;
};