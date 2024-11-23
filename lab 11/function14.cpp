#include <iostream>
using namespace std;


int cube(int n) 
{
    return n*n*n;  
}

int main()
 {
    int number;

    
    cout<<"Enter numbers to find their cubes (Enter 0 to stop)"<< endl;

    
    while (true)
	 {
        cout<<"Enter a number";
        cin>> number;
        if (number == 0) 
		{
            break;  
        }

    
        cout<<"The cube of "<<number<<" is" << cube(number)<< endl;
    }

    return 0;
}
