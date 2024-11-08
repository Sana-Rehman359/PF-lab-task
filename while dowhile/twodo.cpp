#include <iostream>
using namespace std;

int main() {
    int i = 0;  
    do {
        int j = 1;
        cout << "Multiplication table for " << i << ":\n";
        
        
        do {
            cout << i << " x " << j << " = " << i * j << endl;
            j++;
        } while (j <= 10);  
        
        cout << endl;  
        i++;  
    } while (i <= 5);  

    return 0;
}
