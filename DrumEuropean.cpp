//
// Created by Ciprian on 03.08.2024.
//

#include <iostream>
#include <string>
#include "DrumEuropean.h"

DrumEuropean::DrumEuropean() : Drum() {
    this->nrTari = 0;
}

DrumEuropean::DrumEuropean(const string denumire, const float lungime, const unsigned nrTronsoane, const int nrTari) : Drum(denumire, lungime, nrTronsoane){
    this->nrTari = nrTari;
}

DrumEuropean::DrumEuropean(const DrumEuropean &rhs) : Drum(rhs) {
    this->nrTari = rhs.nrTari;
}

void DrumEuropean::setNrTari(const int nrTari) {
    this->nrTari = nrTari;
}

int DrumEuropean::getNrTari() {
    return this->nrTari;
}

DrumEuropean::~DrumEuropean() {}
