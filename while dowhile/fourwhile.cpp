#include <iostream>
using namespace std;

int main()
 {
    int num, factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> num;
    while (num > 0) 
	{
        int temp = 1; 
        
        while (temp <= num) 
		{
            factorial *= temp;  
            temp++;
        }
        
        num--; 
    }

    cout << "Factorial is:" <<factorial << endl;

    return 0;
}
