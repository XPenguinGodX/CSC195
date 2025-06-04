#include "PetManager.h"
#include "Penguin.h"
#include "Monkey.h"
#include "Rino.h"
#include <iostream>
#include <fstream>

void PetManager::AddPet() {
    cout << "Choose a pet type:\n1. Penguin\n2. Monkey\n3. Rino\nChoice: ";
    int choice;
    cin >> choice;
    cin.ignore(); // Flush newline

    string name;
    cout << "Enter pet name: ";
    getline(cin, name);

    switch (choice) {
    case 1:
        pets.push_back(make_unique<Penguin>(name));
        break;
    case 2:
        pets.push_back(make_unique<Monkey>(name));
        break;
    case 3:
        pets.push_back(make_unique<Rino>(name));
        break;
    default:
        cout << "Invalid choice.\n";
    }
}

void PetManager::ShowAllPets() const {
    if (pets.empty()) {
        cout << "No pets available.\n";
        return;
    }

    for (size_t i = 0; i < pets.size(); ++i) {
        cout << i + 1 << ". " << *pets[i] << endl;
    }
}

void PetManager::DeletePet() {
    if (pets.empty()) {
        cout << "There are no pets to delete.\n";
        return;
    }

    ShowAllPets();
    cout << "Enter the number of the pet you want to delete: ";
    int index;
    cin >> index;

    if (index < 1 || index > pets.size()) {
        cout << "Invalid selection.\n";
        return;
    }

    pets.erase(pets.begin() + (index - 1));

    cout << "Pet deleted successfully.\n";
}

void PetManager::InteractWithPet() {
    if (pets.empty()) {
        cout << "No pets to interact with.\n";
        return;
    }

    ShowAllPets();
    cout << "Choose a pet by number: ";
    int index;
    cin >> index;

    if (index < 1 || index > pets.size()) {
        cout << "Invalid selection.\n";
        return;
    }

    auto& pet = pets[index - 1];

    cout << "1. Feed\n2. Play\n3. Speak\nChoice: ";
    int action;
    cin >> action;

    switch (action) {
    case 1: pet->Feed(); break;
    case 2: pet->Play(); break;
    case 3: pet->Speak(); break;
    default: cout << "Invalid action.\n";
    }
}

void PetManager::SaveAll(const string& filename) const {
    ofstream out(filename);
    if (!out) {
        cout << "Error opening file for saving.\n";
        return;
    }

    out << pets.size() << '\n';
    for (const auto& pet : pets) {
        if (dynamic_cast<Penguin*>(pet.get()))
            out << "Penguin\n";
        else if (dynamic_cast<Monkey*>(pet.get()))
            out << "Monkey\n";
        else if (dynamic_cast<Rino*>(pet.get()))
            out << "Rino\n";

        pet->Save(out);
    }

    cout << "Pets saved to " << filename << endl;
}

void PetManager::LoadAll(const string& filename) {
    ifstream in(filename);
    if (!in) {
        cout << "Error opening file for loading.\n";
        return;
    }

    pets.clear();
    size_t count;
    in >> count;
    in.ignore(); // Flush newline

    for (size_t i = 0; i < count; ++i) {
        string type;
        do {
            if (in.eof()) {
                cout << "Unexpected end of file while reading pet type.\n";
                return;
            }

            getline(in, type);
        } while (type.empty());

        unique_ptr<VirtualPet> pet;
        if (type == "Penguin")
            pet = make_unique<Penguin>();
        else if (type == "Monkey")
            pet = make_unique<Monkey>();
        else if (type == "Rino")
            pet = make_unique<Rino>(); 
        else {//PROVIDED BY CHAT
            cout << "Warning: Unknown pet type \"" << type << "\" found in file. Skipping.\n";
            // optionally skip a line to prevent file desync
            string dummy;
            getline(in, dummy);  // skip the next line assuming it's pet data
            continue; // skip this loop iteration
        };

        if (pet) {
            pet->Load(in);
            pets.push_back(move(pet));
        }
    }

    cout << "Pets loaded from " << filename << endl;
}