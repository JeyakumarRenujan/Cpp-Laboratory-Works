// RENUJAN J.
// 2022/E/065
// EC2010
// Group: [B]
// Lab: [07]
// Program Description: [Arrays with pointers]
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.
#include <iostream>
using namespace std;


int main()
{
    double miles[10] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
    double gallons[10] = {10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};
    double mpg[10];

    double *ptrmiles, *ptrgallons, *ptrmpg;
    ptrmiles = miles;
    ptrgallons = gallons;
    ptrmpg = mpg;


    for (int i=0; i<10; i++)
    {
        *(ptrmpg + i) = *(ptrmiles + i) / *(ptrgallons + i);
    }

    // displaying the elements of the mpg array.

    for (int j=0; j<10; j++)
    {
        cout << "mpg[" << j << "] = " << *(ptrmpg + j) << endl;
    }

    return 0;
}


