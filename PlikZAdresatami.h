#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>


using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;

    bool czyPLikJestPusty();

public:
    void dopiszAdresataDoPliku(Adresat adresat);

};


#endif
