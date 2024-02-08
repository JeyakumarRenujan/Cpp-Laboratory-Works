// Question 03 part a
// RENUJAN j.
// 2022/E/065
// EC2010
// Group: B
// Lab: 03
// Program Description: find the summation of positive numbers of them
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.
#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter 10 numbers: ";
    for (int i=1; i<=10; i++)
    {
        cin >> num;
        if (num>0)
            sum = sum+num;
    }
    cout << "Summation: "<< sum <<endl;
    return 0;
}
