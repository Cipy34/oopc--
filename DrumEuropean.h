//
// Created by Ciprian on 03.08.2024.
//
#pragma once
#ifndef DRUMURI_DRUMEUROPEAN_H
#define DRUMURI_DRUMEUROPEAN_H

#include <iostream>
#include <string>
#include "Drum.h"

using namespace std;

class DrumEuropean : virtual public Drum{
private:
    int nrTari;
public:
    DrumEuropean();
    DrumEuropean(const string denumire, const float lungime, const unsigned nrTronsoane, const int nrTari);
    DrumEuropean(const DrumEuropean &rhs);

    void setNrTari(const int nrTari);
    int getNrTari();

    ~DrumEuropean();
};


#endif //DRUMURI_DRUMEUROPEAN_H
