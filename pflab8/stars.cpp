#include <iostream>
using namespace std;
int main()
{
	int rows=7;//total number of rows in the pattern
	
	//outer loop to handle the number of rows
	
	for(int i=1;i<=rows;i++){
	//inner loop to print the stars for each row
	
	for(int j=1;j<=i;j++){
	
	
		cout<<"*";
	}
	cout<<endl;//move to the next line after printing stars
}
}
