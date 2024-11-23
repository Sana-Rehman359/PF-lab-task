#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    // Prompt user to enter two numbers and an operation
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculator using switch
    switch (operation) {
        case '+':
            cout<< num1 << " + "<< num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout<< num1 << " - "<< num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout<< num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1<< " / " << num2<< " = " << num1 / num2 << endl;
            } else {
                cout<< "Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator." << endl;
            break;
    }

    return 0;
}
