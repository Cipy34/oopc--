//
// Created by Ciprian on 03.08.2024.
//

#include <iostream>
#include <string>
#include "DrumNational.h"

using namespace std;

DrumNational::DrumNational() : Drum(){
    this->nrJudete = 0;
}

DrumNational::DrumNational(const string denumire, const float lungime, const unsigned nrTronsoane, const int nrJudete) : Drum(denumire, lungime, nrTronsoane){
    this->nrJudete = nrJudete;
}

DrumNational::DrumNational(const DrumNational &rhs) : Drum(rhs){
    this->nrJudete = rhs.nrJudete;
}

void DrumNational::setNrJudete(const int nrJudete) {
    this->nrJudete = nrJudete;
}

int DrumNational::getNrJudete() {
    return this->nrJudete;
}

DrumNational::~DrumNational(){

}