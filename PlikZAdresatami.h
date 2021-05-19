#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenedzer.h"


using namespace std;

class PlikZAdresatami
{


    string nazwaPlikuZAdresatami;
    MetodyPomocnicze metodyPomocnicze;
    bool czyPlikJestPusty();

public:
    PlikZAdresatami()
    {
     nazwaPlikuZAdresatami = "Adresaci.txt";
    }
    void dopiszAdresataDoPliku(Adresat adresat);



    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);


};


#endif
