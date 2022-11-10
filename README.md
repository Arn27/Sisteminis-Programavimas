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
Baigus duomenų įvedimą, suskaičiuoja galutį balą ir juos pateikia į ekraną tokiu ar panašiu pavidalu (kur galutinis apskaičiuotas balas pateikiamas dviejų skaičių po kablelio tikslumu).

Papildyta programa, kad vietoj vidurkio galutinio balo skaičiavimui būtų galima naudoti ir medianą.

Programa papildyta taip, kad ji veiktų ir tokiu atveju, kai namų darbų skaičius (n) yra nežinomas iš anksto, t.y. tik įvedimo metu vartotojas nusprendžią kuomet jis jau įvedė visų namų darbų rezultatus.

Programa papildyta taip, kad būtų galimybė, jog mokinio gautieji balai už namų darbus bei egzaminą būtų generuojami atsitiktinai.

Papildyta vektor programos versiją taip, kad būtų galima duomenis ne tik įvesti bet ir nuskaityti iš failo.

Papildykite programą taip, kad nuskaičiuos duomenis iš failo, išvedimas preliminariai atrodytų taip:

Studentai surūšiuoti pagal pavardes ir visi stulpeliai gražiai išlygiuoti (formatuotas išvedimas).

Atlikitas kodo reorganizavimas.

#V0.2

Pridėta galimybė generuoti failus su studentų duomenimis.
Programa skaito duomenis iš failo.
Galimybė atlikti studentų rūšiavimą į dvi grupes.
Surūšiavus studentus, programa juos spausdina į du atskirus failus.
Visi šie veiksmai turi laiko skaičiavimo funkcija, kurios dėka į ekraną išvedama kiek (milisekundėmis) užtruko veiksmas.

_Veiksmų atlikimo trukmė:_

_Failų kūrimas:_
1000 - 19 ms
10 000 - 175 ms
100 000 - 1691 ms
1000 000 - 16630 ms

_Duomenų nuskaitymas iš failų:_
1000 - 41 ms
10 000 - 1196 ms
100 000 - N/A
1000 000 - N/A

_Studentų rūšiavimas į dvi grupes/kategorijas:_
1000 - 7 ms
10 000 - 1993 ms
100 000 - N/A
1000 000 - N/A

_Surūšiuotų studentų išvedimas į du naujus failus:_
1000 - 12 ms
10 000 - 102 ms
100 000 - 1601 ms
1000 000 - 1791 ms

