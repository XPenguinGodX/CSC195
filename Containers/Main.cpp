#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>

using namespace std;

// array<string, 7>
void handleArray() {
    array<string, 7> daysOfWeek = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };

    cout << "Number of items in the array: " << daysOfWeek.size() << endl;

    for (const string& day : daysOfWeek) {
        cout << day << "\n";
    }

    cout << endl;
}

//vector<int> 
void handleVector() {
    vector<int> numbers = { 1, 2, 3, 4, 5 };  // Initialize with 5 values

    numbers.push_back(6);  // Add one more
    numbers.push_back(7);  // Add another
    numbers.pop_back();    // Remove last element (7)

    cout << "Vector contents: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl << endl;
}

//list<string> 
void handleList() {
    list<string> fruits = { "peach", "banana", "cherry" };  // Initialize with 3 items

    fruits.push_front("kiwi");         // Add to front
    fruits.push_back("watermelon");    // Add to back
    fruits.remove("banana");           // Remove specific element

    cout << "List contents: ";
    for (list<string>::iterator it = fruits.begin(); it != fruits.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl << endl;
}

// map<string, int>
void handleMap() {
    map<string, int> stock;

    stock["apples"] = 10;
    stock["bananas"] = 5;
    stock["oranges"] = 8;

    stock["bananas"] = 7;  // Update value

    cout << "Map contents:\n";
    for (const auto& item : stock) {
        cout << item.first << " = " << item.second << endl;
    }

    cout << endl;
}

// --- Main function ---
int main() {
    handleArray();
    handleVector();
    handleList();
    handleMap();

    return 0;
}