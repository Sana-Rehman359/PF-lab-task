#include <iostream>
using namespace std;
int main()
{
	//outer loop to handle numbers from 0 to 5 
	for (int i=0; i<=5; i++)
	{
		//inner loop to handle multiplication wih numbers from 1 to 10 
		cout<<"multiplication table for"<<i<<":"<<endl;
		for(int j=1;j<=10;j++)
		{
			cout<<i<<"*"<<j<<"="<<i*j<<endl;
		}
		cout<<endl;//add a blank line after each table 
	}
}
