#pragma once
#include <string>
#include <iostream>
using namespace std;


class VirtualPet
{
protected:
    string name;
    int health;
    int hunger;

public:

    VirtualPet(const std::string& name = "Unnamed");
    virtual ~VirtualPet();

    virtual void Feed() = 0;
    virtual void Play() = 0;
    virtual void Speak() const = 0;

    virtual void Save(std::ostream& out) const;
    virtual void Load(std::istream& in);

    friend std::ostream& operator<<(std::ostream& os, const VirtualPet& pet);

};

