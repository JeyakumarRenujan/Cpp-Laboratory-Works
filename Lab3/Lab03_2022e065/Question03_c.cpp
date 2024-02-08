// Question 03 part c
// RENUJAN j.
// 2022/E/065
// EC2010
// Group: B
// Lab: 03
// Program Description: find the summation of positive numbers of them using
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.
#include <iostream>

using namespace std;

int main()
{
    int i = 1, num, sum = 0;
    cout << "Enter 10 numbers: ";
    do
    {
        cin >> num;
        i++;
        if (num>0)
            sum = sum+num;
    }while(i<=10);
    cout << "Summation: "<< sum <<endl;
    return 0;
}


