#include "VirtualPet.h"

VirtualPet::VirtualPet(const string& name)
    : name(name), health(100), hunger(50) {
}

VirtualPet::~VirtualPet() {}

void VirtualPet::Save(ostream& out) const {
    out << name << ' ' << health << ' ' << hunger << '\n';
}

void VirtualPet::Load(std::istream& in) {
    in >> name >> health >> hunger;
}

ostream& operator <<(ostream& os, const VirtualPet& pet) {
    os << "Name: " << pet.name
        << ", Health: " << pet.health
        << ", Hunger: " << pet.hunger;
    return os;
}