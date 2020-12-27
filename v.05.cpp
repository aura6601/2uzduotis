#include "bibliotekos.h"
#include "studentas.h"

int main()
{
	list<Studentas> sarasas = nuskaitymas_list();

	list<Studentas> vargsiukai;

	auto start2 = chrono::high_resolution_clock::now();

	for (Studentas& s : sarasas) {
		if (s.getGalutinis() < 5) {
			s.getVardas();
			s.getPavarde();
			s.getGalutinis();
			vargsiukai.push_back(s);
		}
	}
	sarasas.remove_if(tikrinimas);

	auto finish2 = chrono::high_resolution_clock::now();
	chrono::duration<double> skirtumas2 = finish2 - start2;
	cout << "Studentu suskirstymas i dvi grupes uztruko: " << skirtumas2.count() << "s" << endl;

	irasymas(vargsiukai);
}