#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;
    do {
        int tempSum = 0;  
        
        do {
            int digit = num % 10; 
            tempSum += digit;  
            num /= 10;  
        } while (num > 0);  
        
        sum += tempSum;  
        
    } while (num == 0);  

    cout << "Sum of the digits is: " << sum << endl;

    return 0;
}
