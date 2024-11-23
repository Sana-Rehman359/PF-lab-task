#include <iostream>
using namespace std;

int main() {
    int N;

    cout<<"Enter the size of the square matrix (N)";
    cin>>N;
    int matrix[N][N],transpose[N][N];

    cout<<"Enter the elements of the matrix ("<<N<<"x"<<N<<"):\n";
    for(int i=0;i<N;i++)
	 {
        for(int j=0;j<N;j++) 
		{
            cout<<"Element ["<<i+1<<"]["<<j+1<<"]";
            cin>> matrix[i][j];
        }
    }

   
    for (int i=0;i<N;i++)
	{
        for (int j=0;j<N;j++)
		 {
            transpose[i][j] = matrix[j][i]; 
        }
    }

    cout<<"\nTranspose of the matrix is:\n";
    for(int i=0;i<N;i++)
	 {
        for(int j=0;j<N;j++) 
		{
            cout<<transpose[i][j]<< " ";
        }
        cout<<endl;
    }

  
}
