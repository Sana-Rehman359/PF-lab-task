#include<iostream>
using namespace std;
int main()
{
	int n;
	long long  fact =1;//fact result, using long long to handle larger values 
	
	//Get input from the user
	cout<<"enter a positive integer:";
	cin>>n;
	//ensure the number is non negative 
	if(n<0)
	{ 
	cout<<"fact is not defined for negative numbrs."<<endl;	
	}
	else
	{
	//outer loop:iterate through all numbers from 1 to n
	for(int i=1;i<=n;i++){
		//inner loop:multiply the current result by i 
		for(int j=1;j<=1;j++){
			fact *=i;//multiply the fact by the current number
		}
	}
//output the result 
cout<<"the fact of"<<n<<"is"<<fact<<endl;
}
	
	
}
