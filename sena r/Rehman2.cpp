#include <iostream>
using namespace std;

int main() {
    int age;  // Variable to store the user's age

    // Prompt the user to enter their age
    cout << "Enter your age: ";
    cin >> age;

    // Classify the age
    if (age < 0) {
        cout<< "Invalid age." << endl;
    } else if (age <= 12) {
        cout << "child." << endl;
    } else if (age >= 13 && age <= 19) {
        if (age == 13) {
            cout<< "Just a Teen."<< endl;
        } else {
            cout<< "Teenager."<< endl;
        }
    } else if (age >= 20 && age <= 60) {
        cout<< "Adult."<< endl;
    } else if (age > 60) {
        cout<< "Senior Citizen."<< endl;
    }

    return 0;
}
