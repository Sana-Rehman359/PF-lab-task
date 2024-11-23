#include <iostream>
using namespace std;

int main() {
    char service;
    double amount, balance = 10000.00, charges;

    // Displaying menu for bank operations
    cout<< "Select a bank operation:\n";
    cout<< "D = Deposit\nW = Withdraw\nT = Transfer\n";
    cout << "Enter your choice: ";
    cin >> service;

    // Input the amount for the chosen service
    cout << "Enter the amount: ";
    cin>> amount;

    // Perform the operation using switch case
    switch (service) {
        case 'D':
        case 'd':
            charges = 0.005 * amount;  // 0.5% charges
            balance += (amount - charges);  // Add deposited amount after charges
            cout << "Deposited: " << amount - charges << endl;
            cout << "Charges: " << charges << endl;
            break;
        case 'W':
        case 'w':
            charges = 0.015 * amount;  // 1.5% charges
            if (amount + charges <= balance) {
                balance -= (amount + charges);  // Subtract withdrawn amount and charges
                cout << "Withdrawn: " << amount << endl;
                cout<< "Charges: " << charges << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
            break;
        case 'T':
        case 't':
            charges = 0.025 * amount;  // 2.5% charges
            if (amount + charges <= balance) {
                balance -= (amount + charges);  // Subtract transferred amount and charges
                cout << "Transferred: " << amount << endl;
                cout << "Charges: " << charges << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            return 0;
    }

    // Display remaining balance
    cout << "Remaining balance: " << balance << endl;

    return 0;
}
