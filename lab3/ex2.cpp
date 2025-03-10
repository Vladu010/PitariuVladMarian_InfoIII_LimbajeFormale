/*#include <iostream>
using namespace std;

int total_spots = 5;
int occupied_spots = 0;

void parkCar() {
    if (occupied_spots < total_spots) {
        occupied_spots++;
        cout << "Masina parcata. Locuri ocupate: " << occupied_spots << "/" << total_spots << endl;
    }
    else {
        cout << "Parcarea este plina!!!" << endl;
    }
}

void leaveParking() {
    if (occupied_spots > 0) {
        occupied_spots--;
        cout << "Masina a plecat. Locuri ocupate: " << occupied_spots << "/" << total_spots << endl;
    }
    else {
        cout << "Parcarea este goala!!!" << endl;
    }
}

void checkStatus() {
    cout << "Locuri ocupate: " << occupied_spots << "/" << total_spots << endl;
}

int main() {
    int choice;
    do {
        cout << "\nMeniu:\n";
        cout << "1. Parcheaza masina\n";
        cout << "2. Pleaca din parcare\n";
        cout << "3. Verifica status\n";
        cout << "4. Iesire\n";
        cout << "Alege o optiune: ";
        cin >> choice;

        switch (choice) {
        case 1:
            parkCar();
            break;
        case 2:
            leaveParking();
            break;
        case 3:
            checkStatus();
            break;
        case 4:
            cout << "Iesire din program." << endl;
            break;
        default:
            cout << "Optiune invalida!" << endl;
        }
    } while (choice != 4);

    return 0;
}
*/