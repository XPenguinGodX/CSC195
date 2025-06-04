#pragma once
#include "VirtualPet.h"
class Rino : public VirtualPet
{
private:
    int hornStrength;

public:
    Rino(const string& name = "Rinobro", int hornStrength = 50);
    virtual ~Rino();

    void Feed() override;
    void Play() override;
    void Speak() const override;

    void Save(ostream& out) const override;
    void Load(istream& in) override;
};

