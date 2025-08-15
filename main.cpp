#include <iostream>
using namespace std;

// Function to check if it is raining
bool isRaining() {
    int rain;
    cout << "Is it raining? (1-Yes, 0-No): ";
    cin >> rain;
    return rain == 1;
}

// Function to find umbrella
bool findUmbrella() {
    int found;
    cout << "Did you find the umbrella? (1-Yes, 0-No): ";
    cin >> found;
    return found == 1;
}

int main() {
    char choice;

    do {
        if (isRaining()) {
            cout << "Finding umbrella...\n";
            
            if (findUmbrella()) {
                cout << "Bring umbrella.\n";
            } else {
                cout << "Can't go without umbrella, checking again...\n";
                continue; // Loop again without asking user
            }
        } else {
            cout << "Don't bring umbrella.\n";
        }

        cout << "\nDo you want to check again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Process ended.\n";
    return 0;
}
