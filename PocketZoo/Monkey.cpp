#include "Monkey.h"
#include <iostream>

Monkey::Monkey(const string& name, int bananaCount)
    : VirtualPet(name), bananaCount(bananaCount) {
}

Monkey::~Monkey() {}

void Monkey::Feed() {
    if (hunger > 0) {
        hunger -= 8;
        health += 5;
        bananaCount++;
        cout << name << " eats a banana!  Bananas: " << bananaCount << ", Hunger: " << hunger << '\n';
    }
    else {
        cout << name << " isn't hungry right now.\n";
    }
}

void Monkey::Play() {
    hunger += 6;
    health += 8;
    cout << name << " swings on vines happily!  Health: " << health << ", Hunger: " << hunger << '\n';
}

void Monkey::Speak() const {
    cout << name << " screeches: OOH OOH AAH AAH! \n";
}

void Monkey::Save(std::ostream& out) const {
    VirtualPet::Save(out);
    out << bananaCount << '\n';
}

void Monkey::Load(std::istream& in) {
    VirtualPet::Load(in);
    in >> bananaCount;
}

