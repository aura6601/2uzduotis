#pragma once
#include "bibliotekos.h"
class Zmogus
{
public:
    Zmogus() {};

    Zmogus(string v, string p);

    Zmogus& operator=(const Zmogus& z) {
        vardas = z.vardas;
        pavarde = z.pavarde;
        return *this;
    };

    virtual ~Zmogus() = 0;

    virtual const string& getVardas() = 0;
    virtual const string& getPavarde() = 0;

    void setVardas(const string& v)
    {
        vardas = v;
    }

    void setPavarde(const string& p)
    {
        pavarde = p;
    }

protected:
    string vardas;
    string pavarde;
};

