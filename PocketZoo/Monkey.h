#pragma once
#include "VirtualPet.h"
class Monkey : public VirtualPet
{
private:
    int bananaCount;

public:
    Monkey(const std::string& name = "George", int bananaCount = 0);
    virtual ~Monkey();

    void Feed() override;
    void Play() override;
    void Speak() const override;

    void Save(std::ostream& out) const override;
    void Load(std::istream& in) override;
};

