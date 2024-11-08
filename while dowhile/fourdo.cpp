#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> num;

    do {
        int temp = 1; 
        
        do {
            factorial *= temp;  
            temp++;  
        } while (temp <= num); 
        
        num--;  
    } while (num > 0); 

    cout << "Factorial is: "<< factorial << endl;

    return 0;
}
