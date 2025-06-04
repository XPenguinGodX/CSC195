#include "PetManager.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    PetManager manager;
    int choice;

    do {
        cout << "1. Add Pet\n";
        cout << "2. Show All Pets\n";
        cout << "3. Interact With a Pet\n";
        cout << "4. Delete a Pet\n";       
        cout << "5. Save Pets\n";
        cout << "6. Load Pets\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            manager.AddPet();
            break;
        case 2:
            manager.ShowAllPets();
            break;
        case 3:
            manager.InteractWithPet();
            break;
        case 4:
            manager.DeletePet();
            break;
        case 5:
            manager.SaveAll("pets.txt");
            break;
        case 6:
            manager.LoadAll("pets.txt");
            break;
        case 0:
            cout << "Thanks for playing!\n";
            break;
        default:
            cout << "Invalid choice.\n";
            break;
        }

    } while (choice != 0);

    /*ifstream in("pets.txt");
    string line;
    getline(in, line);*/

    _CrtDumpMemoryLeaks();

    return 0;
}