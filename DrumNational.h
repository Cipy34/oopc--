//
// Created by Ciprian on 03.08.2024.
//
#pragma once
#ifndef DRUMURI_DRUMNATIONAL_H
#define DRUMURI_DRUMNATIONAL_H

#include <iostream>
#include "Drum.h"
using namespace std;

class DrumNational : virtual public Drum{
private:
    int nrJudete;
public:
    DrumNational();
    DrumNational(const string denumire, const float lungime, const unsigned nrTronsoane, const int nrJudete);
    DrumNational(const DrumNational &rhs);

    friend istream *operator >>(istream &in, const DrumNational &rhs);
    friend ostream *operator <<(ostream &out, const DrumNational &rhs);

    void setNrJudete(const int nrJudete);
    int getNrJudete();

    ~DrumNational();
};

#endif //DRUMURI_DRUMNATIONAL_H
