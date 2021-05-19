#ifndef ADRESATMENEGER_H
#define ADRESATMENEGER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenedzer.h"



using namespace std;

class AdresatMenedzer
{
    vector<Adresat> adresaci;
    int idOstatniegoAdresata;
    int pobierzIdOstatniegoAdresata();
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    UzytkownikMenedzer uzytkownikMenedzer(string nazwaPlikuZUzytkownikami);
    PlikZAdresatami plikZAdresatami;
    MetodyPomocnicze metodyPomocnicze;

public:

    AdresatMenedzer(){}
    int dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    int odczytajIdZalogowanegoUzytkownika();

};

#endif
