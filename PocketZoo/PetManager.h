#pragma once
#include "VirtualPet.h"
#include <vector>
#include <memory>
#include <string>

class PetManager {
private:
    vector<unique_ptr<VirtualPet>> pets;

public:
    void DeletePet();
    void AddPet();
    void ShowAllPets() const;
    void InteractWithPet();
    void SaveAll(const string& filename) const;
    void LoadAll(const string& filename);
};