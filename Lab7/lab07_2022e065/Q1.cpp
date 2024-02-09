// RENUJAN J.
// 2022/E/065
// EC2010
// Group: [B]
// Lab: [07]
// Program Description: [Check whether the Enter the value is odd or even using pointers]
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.
#include <iostream>
using namespace std;

void OddorEven(int *num)
{
    if (*num%2==0)
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    OddorEven(&number);

    return 0;
}
