#include <iostream>
using namespace std;

int main() {
    int marks1, marks2, marks3;
    cout<<"Enter marks for subject 1: ";
    cin>>marks1;
    cout<<"Enter marks for subject 2: ";
    cin>>marks2;
    cout<<"Enter marks for subject 3: ";
    cin>> marks3;
    double avg = (marks1 + marks2 + marks3) / 3.0;
    if (avg >= 90) {
        cout<< "Grade: A"<<endl;
    } else if (avg >= 80) {
        cout<< "Grade: B" << endl;
    } else if (avg >= 70) {
        cout<< "Grade: C"<< endl;
    } else if (avg >= 60) {
        cout<< "Grade: D"<< endl;
    } else {
        cout << "Grade: F" << endl;
    }
    return 0;
}
