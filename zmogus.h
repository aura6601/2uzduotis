#pragma once
#include "bibliotekos.h"
class Zmogus
{
public:
    Zmogus() {};

    Zmogus(std::string v, std::string p);

    Zmogus& operator=(const Zmogus& z) {
        vardas = z.vardas;
        pavarde = z.pavarde;
        return *this;
    };

    virtual ~Zmogus() = 0;

    virtual const std::string& getVardas() = 0;
    virtual const std::string& getPavarde() = 0;

    void setVardas(const std::string& v)
    {
        vardas = v;
    }

    void setPavarde(const std::string& p)
    {
        pavarde = p;
    }

protected:
    std::string vardas;
    std::string pavarde;
};

