#include <iostream>
using namespace std;

int main() {
    float number; // Variable to store the user's input

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Categorize the number
    if (number > 0) {
        if (number > 100) {
            cout<< "The number is large."<< endl;
        } else {
            cout<< "The number is small."<< endl;
        }
    } else if (number < 0) {
        if (number < -100) {
            cout<< "The number is very small."<< endl;
        } else {
            cout<< "The number is small and negative."<< endl;
        }
    } else {
        cout<< "The number is zero."<< endl;
    }

    return 0;
}
