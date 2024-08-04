//
// Created by Ciprian on 02.08.2024.
//
#include <iostream>
#include <string>
#include "Drum.h"
using namespace std;

Drum::Drum(){
    this->denumire = "";
    this->lungime = 0;
    this->nrTronsoane = 1;
}

Drum::Drum(const string denumire, const float lungime, const unsigned nrTronsoane){
    if(nrTronsoane < 1){
        cout<<"Numarul de tronsoane nu poate fi < 1! Valorile nu au fost modificate!";
        return;
    }
    this->denumire = denumire;
    this->lungime = lungime;
    this->nrTronsoane = nrTronsoane;
};

Drum::Drum(const Drum &rhs){
    denumire = rhs.denumire;
    lungime = rhs.lungime;
    nrTronsoane = rhs.nrTronsoane;
}

void Drum::setDenumire(const string denumire) {
    this->denumire = denumire;
}

void Drum::setLungime(const float lungime) {
    this->lungime = lungime;
}

void Drum::setNrTronsoane(const unsigned int nrTronsoane) {
    if(nrTronsoane < 1){
        cout<<"Numarul de tronsoane nu poate fi < 1!";
        return;
    }
    this->nrTronsoane = nrTronsoane;
}

string Drum::getDenumire() {
    return denumire;
}

float Drum::getLungime() {
    return lungime;
}

unsigned Drum::getNrTronsoane() {
    return nrTronsoane;
}

Drum::~Drum(){
}