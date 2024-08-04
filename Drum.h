//
// Created by Ciprian on 02.08.2024.
//
#pragma once
#ifndef DRUMURI_DRUM_H
#define DRUMURI_DRUM_H

#include <string>
using namespace std;
class Drum{
private:
    string denumire;
    float lungime;
    unsigned nrTronsoane;
public:
    Drum();
    Drum(const string denumire, const float lungime, const unsigned nrTronsoane);
    Drum(const Drum &rhs);

    friend istream &operator>>(istream &in, const Drum &rhs);
    friend ostream &operator<<(ostream &out, const Drum &rhs);

    void setDenumire(const string denumire);
    void setLungime(const float lungime);
    void setNrTronsoane(const unsigned nrTronsoane);

    string getDenumire();
    float getLungime();
    unsigned getNrTronsoane();

    ~Drum();
};
#endif //DRUMURI_DRUM_H
