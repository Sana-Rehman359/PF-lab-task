#include <iostream>
using namespace std;

int main() {
    int i = 0; 
    
    while (i <= 5) 
	{
        int j = 1;  
        
        
        cout << "Multiplication table for " <<i << ":\n";
        
        while (j <= 10) {
            cout << i << " x " << j << " = " << i * j<< endl;
            j++;
        }
        
        cout << endl; 
        i++;
    }

    return 0;
}
