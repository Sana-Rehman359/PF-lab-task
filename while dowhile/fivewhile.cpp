#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    
    cout << "Enter a positive integer: ";
    cin >> num;

    while (num > 0)
	 {
        int digit = num % 10; 
        sum += digit;

    
        num /= 10; 
    }

    cout << "Sum of the digits is: " << sum << endl;

    return 0;
}
