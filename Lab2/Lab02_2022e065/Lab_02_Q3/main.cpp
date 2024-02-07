// RENUJAN J.
// 2022/E/065
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.
// Question 03

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radius, S, V, pi=3.14 ;

    cout << "Enter the radius of the Sphere: " ;
    cin >> radius ;

    S = 4*pi*pow(radius,2);
    V =  (4*pi*pow(radius,3))/3;

    cout << "Surface Area of the Sphere is = " << S << endl;
    cout << "Volume of the Sphere is = " << V << endl;

    return 0;
}
