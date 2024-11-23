#include <iostream>
using namespace std;

int main() {
    int day;

    // Prompt the user to enter a number for the day of the week
    cout << "Enter a number for the day of the week (1 for Monday, 2 for Tuesday, ..., 7 for Sunday): ";
    cin >> day;

    // Display the message based on the day of the week
    switch (day) {
        case 1:
            cout<< "Start of the workweek." << endl;
            break;
        case 2:
            cout << "It's Tuesday, stay productive." << endl;
            break;
        case 3:
            cout<< "Midweek motivation!"<< endl;
            break;
        case 4:
            cout<< "Almost the weekend." << endl;
            break;
        case 5:
            cout<< "TGIF!" << endl;
            break;
        case 6:
            cout<< "Relax, it's Saturday." << endl;
            break;
        case 7:
            cout << "Enjoy your Sunday!" << endl;
            break;
        default:
            cout<< "Invalid day selection." << endl;
            break;
    }

    return 0;
}
