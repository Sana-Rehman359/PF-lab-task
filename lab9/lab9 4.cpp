#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
    {
    const int MAX_STUDENTS=15;
    
    float entryFee,snackCost;
    
    int numStudents;
    
    vector<string>studentNames;

    cout<<"Enter entry fee per student";
    cin>>entryFee;
    
    cout<<"Enter snack cost per student";
    cin>>snackCost;

    cout<<"How many students will attend the game night? (Maximum 15): ";
    cin>>numStudents;

   
    if (numStudents>MAX_STUDENTS)
	 {
        cout<<"Error: Not more than"<<MAX_STUDENTS<<" students allowed.\n";
        return 1;
    }

    for (int i = 0; i<numStudents; ++i)
	 {
        string name;
        cout<<"Enter name for student"<< (i + 1) << ": ";
        cin>>ws; 
        getline(cin, name);
        studentNames.push_back(name);
    }

 
    cout<<"\nUser names for the event:\n";
    float totalCost=0.0;
    for (int i=0; i<studentNames.size();++i)
	 {
        float individualCost = entryFee + snackCost;
        totalCost += individualCost;
        cout<<"User"<<(i + 1)<<": "<< studentNames[i]
             <<" - Total Cost: $" << individualCost<<endl;
    }

  
    cout<<"\nTotal cost for all students $"<<totalCost<<endl;

    cout<<"Program ends. Names and total cost gathered successfully\n";

}
