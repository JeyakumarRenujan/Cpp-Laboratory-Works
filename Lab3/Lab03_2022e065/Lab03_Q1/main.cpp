// Question 01
// RENUJAN j.
// 2022/E/065
// EC2010
// Group: B
// Lab: 03
// Program Description: A user who wants to check his/her eligibility to get driver license.
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.
#include <iostream>

using namespace std;

int main()
{
    string name;
    int age, learner_no, cer_no;
    cout << "Enter your first name and last name: ";
    getline(cin,name);
    cout << "Enter your Age: ";
    cin >> age;
    cout << "Enter your learnerNo(You don't have learnerNo type 0): ";
    cin >> learner_no;
    cout << "Enter your Aptitude Medical CertificateNo: ";
    cin >> cer_no;

    // Display all user inputs
    cout <<"\nName - "<<name<<"\n"<<"Age - "<<age;
    cout <<"\n"<<"learnerNo - "<<learner_no;
    cout <<"\n"<<"Medical CertificateNo - "<<cer_no<<endl;
    cout <<endl;

    if (age>17)
    {
        // Check the learner no
        if (learner_no>0)
        {
            // Check the age for take practical exam
            if (age>18)
                cout << "you are  eligible as driver"<<endl;
            else
                cout << "Your not eligibility to get driver license \nbecause Your a age is less than 18 so you can't take for practical exam."<<endl;
        }
        else
            cout << "Your not eligibility to get driver license \nbecause You failed the written exam."<<endl;
    }
    else
        cout << "Your not eligibility to get driver license \nbecause your age is less than 17."<<endl;
    return 0;
}
