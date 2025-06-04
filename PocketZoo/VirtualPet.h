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

    VirtualPet(const string& name = "Unnamed");
    virtual ~VirtualPet();

    virtual void Feed() = 0;
    virtual void Play() = 0;
    virtual void Speak() const = 0;

    virtual void Save(ostream& out) const;
    virtual void Load(istream& in);

    friend std::ostream& operator<<(ostream& os, const VirtualPet& pet);

};

