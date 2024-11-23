#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
     {
    const int MAX_USERS=10;
    double ticketPrice,popcornPrice;
    int numUsers;
    vector<string>userNames;
    
    cout<<"Enter the ticket price";
    cin>>ticketPrice;
    cout<<"Enter the popcorn price";
    cin>>popcornPrice;
    
    cout<<"How many users attend the event? (Maximum 10)";
    cin>>numUsers;
    
    if (numUsers>MAX_USERS)
	 {
        cout<<"Error: Not more users allowed"<<endl;
        return 1;
    }

    for (int i=0;i<numUsers;i++)
	 {
        string name;
        cout<<"Enter name for user"<<(i+1)<< ": ";
        cin>>name;
        userNames.push_back(name);
    }
    
    cout<<"\nUser names for the event\n";
    double totalCost=0;
    for (int i=0; i<numUsers;i++) 
	{
        double costPerUser = ticketPrice + popcornPrice;
        cout<<"User "<<(i + 1)<< ": "<<userNames[i]<<" - Cost: $"<<costPerUser<< endl;
        totalCost += costPerUser;
    }
    
    cout<<"\nTotal cost for all users:$"<<totalCost<< endl;
    

}
