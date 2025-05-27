#include <iostream>
#include "Database.h"
#include "User.h"
using namespace std;

int main() {

    Database database;
    bool quit = false;

    while (!quit) {
        cout << "\nPenguin Database Menu\n";
        cout << "1 - Create User\n";
        cout << "2 - Display All Users\n";
        cout << "3 - Display by Username\n";
        cout << "4 - Display by Type\n";
        cout << "5 - Quit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "\nSelect user type:\n";
            cout << "1 - Kool Penguin Account\n";
            cout << "2 - Admin Account\n";
            cout << "Enter type: ";
            int typeInput;
            cin >> typeInput;

            //Enum conversion
            if (typeInput == 1 || typeInput == 2) {
                database.Create(static_cast<User::eType>(typeInput));
            }
            else {
                cout << "Invalid type selection.\n";
            }
            break;
        }

        case 2:
            cout << "\nAll Users:\n";
            database.DisplayAll();
            break;

        case 3: {
            cout << "Enter username to search: ";
            string username;
            cin >> username;
            database.Display(username);
            break;
        }

        case 4: {
            cout << "Enter type to display (1 = KoolPenguin, 2 = Admin): ";
            int typeInput;
            cin >> typeInput;

            if (typeInput == 1 || typeInput == 2) {
                database.Display(static_cast<User::eType>(typeInput));
            }
            else {
                cout << "Invalid type selection.\n";
            }
            break;
        }

        case 5:
            quit = true;
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}