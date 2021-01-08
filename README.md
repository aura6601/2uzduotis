# laboratorinis darbas
v3.0 
https://github.com/aura6601/2uzduotis/releases/tag/v3.0

sukurtas programos diegimo failas 

v.01
Šioje versijoje yra realizuota programa, kuri leidžia vartotojui įvesti studento vardą ir pavardę, namų darbų pažymius ir egzamino įvertinimą. Baigus duomenų įvedimą programa apskaičiuoja studento galutinį balą, naudojant duotą formulę 0.4 * namų darbų vidurkis + 0.6 * egzaminas. 

Naudojimo instrukcija:

1 žingsnis: vartotojas įveda studentų skaičių.

2 žingsnis: vartotojas įveda vieno studento vardą, pavardę, egzamino rezultatą, 5 namų darbų pažymius.

Baigus pildyti studento duomenis į ekraną išvedami rezultatai.

https://github.com/aura6601/1laboratorinis/blob/master/v0.1a.cpp

v.03

Šioje versijoje tobulinamos prieš tai buvusios versijos. Funkcijos, nauji duomenų tipai (struct’ūros) perkeliamos į antraštinius failus.

Naudojimo instrukcija :

1 žingsnis: vartotojas įveda studentų skaičių.

2 žingsnis: vartotojas paeiliui įveda vieno studento vardą, pavardę, egzamino rezultatą.

3 žingsnis: vartotojui vedant namų darbų pažymius po įvedimo klausiama ar įvesti visi namų darbų pažymiai. Jeigu vartotojas pasirenka "Y", įvedimas nutraukiamas, jeigu pasirenka "N", gali pažymius vesti toliau. 

https://github.com/aura6601/1laboratorinis/blob/v.03/galutinis.cpp

v.04

Šioje versijoje tobuliname v.01 užduotį. 

1 žingsnis: vartotojui leidžiama pasirinkti ar nori, jog failas būtų sugeneruotas automatiškai. Jei pasirenka "N", toliau seka šie žingsniai:
           1.1 žingsnis: vertotojo prašoma įvesti studentų skaičių. 
           1.2 žingsnis: vartotojo prašoma suvesti apie studentą reikalingus duomenis (vardas, pavardė)
           1.3 žingsnis: vartotojo klausiama ar pažymius sugeneruoti automatiškai. Jei vartotojas pasirenka "T", pažimys yra sugeneruojamas automatiškai ir tada klausiama vartotojo ar jau išvesti visi pažymiai. Jeigu vartotojas paspaudžia "T", pažymių įvedimas baigtas, jeigu ne, pažymiai po vieną generuojami toliau. Jei vartotojas pačioje pradžioje pasirinko "N"(nenori generuoti duomenų) vartotojui vedant namų darbų pažymius po įvedimo klausiama ar įvesti visi namų darbų pažymiai. Jeigu vartotojas pasirenka "Y", įvedimas nutraukiamas, jeigu pasirenka "N", gali pažymius vesti toliau. 
           1.4 žingsnis: tokiu pat principu prašoma įvesti ir egzamino balą, tik šį kartą įvedimas arba generavimas vyks tik vieną kartą, nes reikia tik vieno rezultato.
Atlikus šiuos žingsnius ekrane spausdinami studentų duomenys ir jų rezultatai. 
2 žingsnis: jeigu vartotojas pasirinko "T" :
          2.1 žingsnis: vartotojui leidžiama pasirinkti kokio kiekio studentų failą nori generuoti 1000/10000/100000/1000000/10000000. 
Sugeneruojamas failas su pasirinktu kiekiu duomenų rodo studentų vardus ir pavardes. 

Programa rūšiuoja studentų failus pagal pažymius į vargšiukus ir galvočius. 

https://github.com/aura6601/laboratorinis/tree/v%2C04
           

Šioje versijoje yra programa, kuri generuoja studentų failus. Studentų vardai ir pavardės yra šabloniniai (Vardenis0 Pavardenis0, ...), o studentų pažymiai generuojami kompiuterio. Sugeneravus studentų failus, programa papildyta, kad failus sugrupuotų į dvi grupes: "kietiakai" ir "vargsiukai". Skaidymo strategijas: sukurti du nauji konteineriai 'kietiakai' ir 'vargsiukai', duomenis sugrupavus, studentas lieka bendrame konteineryje ir atsiranda dar kuriame nors iš išvardytųjų, priklausomai, koks studento galutinis balas. Šios dvi grupės įrašomos į atskirus failus. Programoje įgyvendinami laiko matavimai. Vykdant programą matauojama ir į ekraną išvedama kiek užtruko sugeneruoti ir į failą įrašyti duomenis, kiek užtruko nuskaityti duomenis iš failo ir sugrupuoti į dvi kategorijas bei kiek užtruko sugrupuotus duomenis išvesti į naujus failus.
Naudojimo instrukcija:

v0.5

Išmatuojamas patobulintos v.04 versijos veikimo sparta naudojant konteinerį list. Naudojami prieš tai sugeneruoti failai.

https://github.com/aura6601/laboratorinis/tree/v.05

v1.0

Išmatuojami laikai naudojant pirmoje strategijoje nurodytus konteinerius.Pagal antos strategijos reikalavimus atliekami laiko matavimai, jei studentas yra vargsiukas, jis yra keliamas į naują konteinerį ir ištrinamas iš seno, tokiu būdų pagreitindamas rūšiavimo procesą ir pirmame konteineryje palikdamas tik galvočius. Panaudojami programos spartinimui skirtas algoritmas remove_if. 

Naudojimo instrukcija:

1 žingsnis: Vartotojas pasirenka konteinerio tipą, kurį nori naudoti.

2 žingsnis: Vartotojas turi įvesti failo pavadinimą.
Ekrane parodomas failo nuskaitymo laikas ir rūšiavimo laikas. 
https://github.com/aura6601/laboratorinis/blob/v1.0
 
