# Sisteminis-Programavimas
 Savarankiškas darbas nr.1
 
 #V0.1 
Parašykita programą, kuri nuskaito šiuos studentų duomenis:
vardą ir pavardę
n atliktų namų darbų (nd) rezultatus (10-balėje sistemoje), o taip pat egzamino (egz) rezultatą.
Tuomet iš šių duomenų, suskaičiuoja galutinį balą (galutinis):
galutinis = 0.4 * vidurkis + 0.6 * egzaminas

Studentas klasės informacija:
studento vardas ir pavardė;
namų darbų ir egzamino rezultatai;
galutinis pažymys.
Klasės metodai: 
Konstruktorius (-ai) 
Priskyrimo-kopijavimo operatorius (trijų taisyklė)
Kopijavimo konstruktorius (trijų taisyklė)
Destruktorius (trijų taisyklė)
Duomenų įvedimo metodas (perdengtas cin)
Duomenų išvedimo metodas (perdengtas cout)
Galutinio pažymio skaičiavimo metodas (pagal medianą arbą vidurkį - renkasi žmogus)
Baigus duomenų įvedimą, suskaičiuoja galutį balą ir juos pateikia į ekraną tokiu ar panašiu pavidalu (kur galutinis apskaičiuotas balas pateikiamas dviejų skaičių po kablelio tikslumu):

Pavardė     Vardas       Galutinis (Vid.)
--------------------------------------------------
Arvydas     Sabonis      x.xx
Rimas       Kurtinaitis  y.yy
...

Papildyta programa, kad vietoj vidurkio galutinio balo skaičiavimui būtų galima naudoti ir medianą.

Pavardė     Vardas       Galutinis (Vid.) / Galutinis (Med.)
-----------------------------------------------------------
Arvydas     Sabonis      x.xx               x.xx
Rimas       Kurtinaitis  y.yy               y.yy
...
Programa papildyta taip, kad ji veiktų ir tokiu atveju, kai namų darbų skaičius (n) yra nežinomas iš anksto, t.y. tik įvedimo metu vartotojas nusprendžią kuomet jis jau įvedė visų namų darbų rezultatus.

Programa papildyta taip, kad būtų galimybė, jog mokinio gautieji balai už namų darbus bei egzaminą būtų generuojami atsitiktinai.

Papildyta vektor programos versiją taip, kad būtų galima duomenis ne tik įvesti bet ir nuskaityti iš failo. Todėl sukurkite ir užpildykite failą studentai10.txt, kurio (preliminari) struktūra:
Pavardė     Vardas      ND1  ND2   ND3  ND4  ND5  Egzaminas
Vardas1     Pavardė1    8    9     10   6    10   9
Vardas2     Pavardė2    7    10    8    5    4    6
...
Papildykite programą taip, kad nuskaičiuos duomenis iš failo, išvedimas preliminariai atrodytų taip:

Pavardė     Vardas       Galutinis (Vid.) Galutinis (Med.)
----------------------------------------------------------
Arvydas     Sabonis                  x.xx             x.xx
Rimas       Kurtinaitis              y.yy             y.yy
...

Studentai surūšiuoti pagal pavardes ir visi stulpeliai gražiai išlygiuoti (formatuotas išvedimas).

Atlikitas kodo reorganizavimą.
