#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Loop to extract each digit
    for (int temp = num; temp != 0; temp /= 10) {
        // Extract the last digit
        int digit = temp % 10;

        // Nested loop to add the digit to the sum
        for (int i = 0; i < 1; i++) {  // This loop runs just once per digit, mimicking a nested structure
            sum += digit;
        }
    }

    // Output the result
    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
