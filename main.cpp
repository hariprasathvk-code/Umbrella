#include <iostream>
#include <string>
using namespace std;

int main() {
    bool raining, umbrellaFound;
    char choice;
    do {
        cout << "\nIs it raining? (1-Yes, 0-No): ";
        cin >> raining;
        if (raining) {
            cout << "Finding umbrella\n";
            cout << "Did you find the umbrella? (1-Yes, 0-No): ";
            cin >> umbrellaFound;

            if (umbrellaFound) {
                cout << "Bring umbrella.\n";
            } else {
                cout << "Can't go without umbrella, checking again...\n";
                continue; // loop back to check whether it is raining again
            }
        }

}