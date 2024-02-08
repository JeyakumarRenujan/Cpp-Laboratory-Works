// Question 02
// RENUJAN j.
// 2022/E/065
// EC2010
// Group: B
// Lab: 03
// Program Description: Using switch case to check the eligibility of the student to go next level.
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.
#include <iostream>

using namespace std;

int main()
{
    string name, reg_no, subject, Print;
    char grade;
    cout << "Enter Your name: ";
    getline(cin,name);
    cout << "Enter your Reg_no (20xx/E/xxx): ";
    cin >> reg_no;
    cout << "Enter the Subject: ";
    cin >> subject;
    cout << "Enter the Grade(A/B/C/D): ";
    cin >> grade;
    cout <<endl;

    // Display the student details
    cout << "Name - "<<name<<"\nReg_no - "<<reg_no<<"\nSubject - "<<subject;
    cout <<"\nGrade - "<<grade<<endl;

    switch (grade)
    {
        case 'A': cout << "\nExcellent, your grade is A."; break;
        case 'B': cout << "\nWell done, your grade is B."; break;
        case 'C': cout << "\nYou passed, your grade is C."; break;
        case 'D': cout << "\nBetter try again, your grade is D."; break;
        default: cout << "\nInvalid grade.";
    }
    return 0;
}
