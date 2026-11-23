#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    
    int rollNo;
    string name;
    float marks;

public:

    
    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        setMarks(m);
    }

    
    int getRollNo()
    {
        return rollNo;
    }

    string getName()
    {
        return name;
    }

    float getMarks()
    {
        return marks;
    }

  
    void setMarks(float m)
    {
        if (m >= 0 && m <= 100)
        {
            marks = m;
        }
        else
        {
            cout << "Invalid marks for " << name;
            cout << ", set to 0" << endl;

            marks = 0;
        }
    }

    
    void display()
    {
        cout << rollNo << " | ";
        cout << name << " | ";
        cout << marks << endl;
    }
};

void printResult(Student s)
{
    cout << s.getName() << ": ";

    if (s.getMarks() >= 40)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }
}

int main()
{
    
    Student batch[3] = {
        Student(101, "Asha", 82),
        Student(102, "Rahul", 35),
        Student(103, "Meera", 105)
    };

    
    cout << "\nStudent Details" << endl;
    cout << "------------------------" << endl;

    for (int i = 0; i < 3; i++)
    {
        batch[i].display();
    }

    
    batch[1].setMarks(45);

    
    cout << "\nStudent Results" << endl;
    cout << "------------------------" << endl;

    for (int i = 0; i < 3; i++)
    {
        printResult(batch[i]);
    }

    return 0;
}