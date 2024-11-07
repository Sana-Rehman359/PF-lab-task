#include <iostream>
using namespace std;

int main() {
    
    for (int i = 0; i <= 5; i++) {
        
        cout << "Multiplication Table for " << i << ":" << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl; 
    }
    
    return 0;
}
