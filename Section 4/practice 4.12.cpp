//practice 4.12
#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    int age;

    cout<<"Enter your name: ";
    cin >>name;

    cout<<"Enter your age:";
    cin>>age;

    cout<<"Name: " << name <<endl;
    cout <<"Age: "<<age <<endl;

    return 0;
}


//Output Prediction

//Predict the output of a program with a cin >> int followed directly by getline()
//without cin.ignore().
//ANS:When an integer is read using cin >>, the newline character (\n) remains in the input buffer. When getline() is called immediately after that, it reads this leftover newline and therefore does not read any string.the string will be empty.

//example: 
int age;
string name;

cin >> age;
getline(cin, name);
//Here, name will be empty because getline() reads the leftover newline character 

//correct way:
cin>> age;
cin.ignore():
getline(cin, name):


