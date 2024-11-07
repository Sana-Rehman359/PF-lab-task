#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

   
    cout << "Enter a number: ";
    cin >> num;

    for (int temp = num; temp != 0; temp /= 10) {
       
        for (int i = 0; i < 1; i++) {
            int digit = temp % 10; 
            sum += digit; 
        }
    }
    cout << "The sum of the digits of " << num << " is: " << sum << endl;

    return 0;
}
