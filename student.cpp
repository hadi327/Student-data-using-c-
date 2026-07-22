#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    string branch;
    float marks;

public:
    // Function to input student details
    void input()
    {
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Branch: ";
        getline(cin, branch);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void display()
    {
        cout << "\n------ Student Details ------" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No.   : " << rollNo << endl;
        cout << "Branch     : " << branch << endl;
        cout << "Marks      : " << marks << endl;

        if (marks >= 40)
            cout << "Result     : Pass" << endl;
        else
            cout << "Result     : Fail" << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}
