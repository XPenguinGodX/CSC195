#pragma once
#include "VirtualPet.h"
class Penguin : public VirtualPet
{
private:
    int fishCount; // unique penguin trait

public:
    Penguin(const string& name = "Pengy", int fishCount = 0);
    virtual ~Penguin();

    void Feed() override;
    void Play() override;
    void Speak() const override;

    void Save(std::ostream& out) const override;
    void Load(std::istream& in) override;
};

