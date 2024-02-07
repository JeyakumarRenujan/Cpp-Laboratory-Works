// RENUJAN J.
// 2022\E\065
// EC2010
// GROUP B
// LAB 01
// calculate the total weight of the user’s basket IN kilograms.
// entirely my own work, but I received assistance from lectureslides
// I certify that the code in the method function main of this project
// is entirely my own work.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double Pen, Pencil, Notepad, Glue_Bottle, sum;
    string name;

    // Get input from user
    cout << "Please provide your name: " ;
    getline(cin,name);
    cout << "How many Pens do you have: " ;
    cin >> Pen;
    cout << "How many Pencils do you have: " ;
    cin >> Pencil;
    cout << "How many Notepads do you have:" ;
    cin >> Notepad;
    cout << "How many Gule_Bottles do you have: " ;
    cin >> Glue_Bottle;

    // Calculate the  basket weight
    sum = (Pen*10 + Pencil*5 + Notepad*200 + Glue_Bottle*250)/1000 ;

    cout << "\nYour basket’s weight is: " << sum << "kg" << endl;

    return 0;
}
