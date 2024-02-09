// RENUJAN J.
// 2022/E/065
// EC2010
// Group: [B]
// Lab: [05]
// Program Description: [find Nth number in series(1,3,12,60,360.......)]
// Certificate of Authenticity: (choose one from below)
// I certify that the code in the method function main of this project
// is entirely my own work.

#include <iostream>
using namespace std;

// Iterative Approach
int NthTerm_Iterative_way (int n)
{
    int fact = 1;
    for (int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact*(n+1)/2;
}

// Iterative Approach
int fact(int N)
{
    if (N>1)
        return N*fact(N-1);
    else
        return 1;
}

int NthTerm_Recursive_way (int n)
{
    return fact(n)*(n+1)/2;
}

int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << num << "-th term in the series " << NthTerm_Iterative_way(num) << endl;
    cout << num << "-th term in the series " << NthTerm_Recursive_way(num) << endl;

    return 0;
}


