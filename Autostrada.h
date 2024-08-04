//
// Created by Ciprian on 03.08.2024.
//

#ifndef DRUMURI_AUTOSTRADA_H
#define DRUMURI_AUTOSTRADA_H
#include "DrumEuropean.h"
#include "DrumNational.h"

class Autostrada : public DrumEuropean, public DrumNational{
private:
    int nrBenzi;
public:
    Autostrada();
    Autostrada(const string denumire, const float lungime, const unsigned nrTronsoane, const int nrBenzi, const int nrJudete, const int nrTari);
    Autostrada(const Autostrada &rhs);

    void setNrBenzi(const int nrBenzi);
    int getNrBenzi();

    ~Autostrada();
};

#endif //DRUMURI_AUTOSTRADA_H
