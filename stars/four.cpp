#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
       
        for (int i = 1; i <= num; i++) {
           
            for (int j = 1; j <= 1; j++) {  
                factorial *= i;
            }
        }
        cout << "The factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}
