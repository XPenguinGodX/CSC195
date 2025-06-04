#include "Penguin.h"
#include <iostream>

Penguin::Penguin(const string& name, int fishCount)
    : VirtualPet(name), fishCount(fishCount) {
}

Penguin::~Penguin() {}

void Penguin::Feed() {
    if (hunger > 0) {
        hunger -= 10;
        health += 5;
        fishCount++;
        cout << name << " ate a fish! Hunger now " << hunger << ", Fish count: " << fishCount << '\n';
    }
    else {
        cout << name << " is not hungry. *waddles away*\n";
    }
}

void Penguin::Play() {
    hunger += 5;
    health += 10;
    cout << name << " slides around happily...Suddenly it does a backflip! Health: " << health << ", Hunger: " << hunger << '\n';
}

void Penguin::Speak() const {
    cout << name << " squawks adorably.\n";
}

void Penguin::Save(ostream& out) const {
    VirtualPet::Save(out);
    out << fishCount << '\n';
}

void Penguin::Load(istream& in) {
    VirtualPet::Load(in);
    in >> fishCount;
}