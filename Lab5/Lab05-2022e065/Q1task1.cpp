// RENUJAN J.
// 2022/E/065
// EC2010
// Group: [B]
// Lab: [05]
// Program Description: [Student details]
// Certificate of Authenticity: (choose one from below)
// I certify that the code in the method function main of this project
// is entirely my own work.

#include <iostream>

using namespace std;

class Student{
public:
    int age;
private:
    string studentId, name;

public:
    void displayAge(){
        cout << "Age = " <<age<<endl;
    }
public:
    void displayname(string n){
        name = n;
        cout << "Name = " <<name<<endl;
    }
public:
    void displayid(string n, string id){
        name = n;
        studentId = id;
        cout << name <<"\'s Student ID = "<<studentId<<endl;
    }
};

int main()
{
    Student obj1;
    cout << "Enter your age: ";
    cin >> obj1.age;
    string nameinput;
    cout << "Enter your Name: ";
    cin >> nameinput;
    string idinput;
    cout << "Enter your StudentId: ";
    cin >> idinput;
    obj1.displayname(nameinput);
    obj1.displayid(nameinput,idinput);
    obj1.displayAge();

    return 0;
}
