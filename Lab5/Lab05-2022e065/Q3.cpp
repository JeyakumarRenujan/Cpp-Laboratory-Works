// RENUJAN J.
// 2022/E/065
// EC2010
// Group: [B]
// Lab: [05]
// Program Description: [The given string is a palindrome or not by
// using the recursive method.]
// Certificate of Authenticity: (choose one from below)
// I certify that the code in the method function main of this project
// is entirely my own work.

#include <iostream>
#include <string>
using namespace std;

string revString (string str)
{
    if (str.length() <= 1){
        return str;
    }
    return revString(str.substr(1)) + str[0];
}

int main()
{
    string name, reversed;
    cout << "Enter a string: ";
    cin >> name;

    reversed = revString(name);

    if (reversed==name)
        cout << name << " is a palindrome" << endl;
    else
        cout << name << " is not a palindrome" << endl;

    return 0;
}


