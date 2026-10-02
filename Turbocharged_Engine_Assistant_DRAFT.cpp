#include <iostream>
#include <limits>
using namespace std;

void boostPressure() {
    double psi;
    cout << "\nEnter boost pressure (PSI): ";

    if (!(cin >> psi)) {
        cout << "Invalid input. Please enter a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }

    if (psi < 8)
        cout << "Boost level: Low\n";
    else if (psi <= 14)
        cout << "Boost level: Moderate\n";
    else
        cout << "Boost level: High\n";
}

void symptomInfo() {
    int choice;

    cout << "\nTurbo-related symptoms:\n";
    cout << "1. Smoke\n";
    cout << "2. Turbo lag\n";
    cout << "3. Loss of power\n";
    cout << "Choose a symptom: ";

    if (!(cin >> choice)) {
        cout << "Invalid input.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }

    switch (choice) {
        case 1:
            cout << "Smoke may indicate an engine or turbo-related issue.\n";
            break;
        case 2:
            cout << "Turbo lag is a delay before the turbocharger provides boost.\n";
            break;
        case 3:
            cout << "Loss of power may be related to boost or engine problems.\n";
            break;
        default:
            cout << "Invalid symptom option.\n";
    }
}

void engineComparison() {
    int priority;

    cout << "\nWhat is your priority?\n";
    cout << "1. More power from a smaller engine\n";
    cout << "2. Simpler naturally aspirated setup\n";
    cout << "Choose: ";

    if (!(cin >> priority)) {
        cout << "Invalid input.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }

    switch (priority) {
        case 1:
            cout << "Turbocharged engine fits this priority.\n";
            break;
        case 2:
            cout << "Naturally aspirated engine fits this priority.\n";
            break;
        default:
            cout << "Invalid priority option.\n";
    }
}

int main() {
    int option;

    do {
        cout << "\n=== Turbocharged Engine Assistant ===\n";
        cout << "1. Check boost pressure\n";
        cout << "2. Turbo symptom information\n";
        cout << "3. Compare engine types\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";

        if (!(cin >> option)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (option) {
            case 1:
                boostPressure();
                break;
            case 2:
                symptomInfo();
                break;
            case 3:
                engineComparison();
                break;
            case 4:
                cout << "Thank you for using Turbocharged Engine Assistant.\n";
                break;
            default:
                cout << "Invalid menu option.\n";
        }

    } while (option != 4);

    return 0;
}
