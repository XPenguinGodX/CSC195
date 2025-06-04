#include "Rino.h"
#include <iostream>

Rino::Rino(const string& name, int hornStrength)
    : VirtualPet(name), hornStrength(hornStrength) {
}

Rino::~Rino() {}

void Rino::Feed() {
    if (hunger > 0) {
        hunger -= 7;
        health += 6;
        hornStrength += 1;
        cout << name << " munches on grass! Horn strength is now " << hornStrength << ", Hunger: " << hunger << endl;
    }
    else {
        cout << name << " is full and refuses to eat.\n";
    }
}

void Rino::Play() {
    hunger += 8;
    health += 10;
    hornStrength += 2;
    cout << name << " charges around wildly! Horn strength: " << hornStrength << ", Health: " << health << ", Hunger: " << hunger << endl;
}

void Rino::Speak() const {
    cout << name << " snorts aggressively.\n";
}

void Rino::Save(ostream& out) const {
    VirtualPet::Save(out);
    out << hornStrength << '\n';
}

void Rino::Load(istream& in) {
    VirtualPet::Load(in);
    in >> hornStrength;
}
