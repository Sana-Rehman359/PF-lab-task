#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        int j = 1;
    
        do 
		{
            cout << "*";
            j++;
        } while (j <= i);
        
        cout << endl;
        i++;
    } while (i <= 7);

    return 0;
}
