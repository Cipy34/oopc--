//
// Created by Ciprian on 03.08.2024.
//

#include <iostream>
#include <string>
#include "Autostrada.h"

using namespace std;

Autostrada::Autostrada() : DrumEuropean(), DrumNational(){
    this->nrBenzi = nrBenzi;
}

Autostrada::Autostrada(const string denumire, const float lungime, const unsigned nrTronsoane, const int nrBenzi, const int nrJudete, const int nrTari)
    : DrumEuropean(denumire, lungime, nrTronsoane, nrTari),
    DrumNational(denumire, lungime, nrTronsoane, nrJudete) {
    this->nrBenzi = nrBenzi;
}

Autostrada::Autostrada(const Autostrada &rhs) : DrumNational(rhs), DrumEuropean(rhs){
    this->nrBenzi = rhs.nrBenzi;
}

void Autostrada::setNrBenzi(const int nrBenzi) {
    this->nrBenzi = nrBenzi;
}

int Autostrada::getNrBenzi() {
    return nrBenzi;
}

Autostrada::~Autostrada(){

}