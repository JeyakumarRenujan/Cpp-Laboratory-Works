// RENUJAN J.
// 2022/E/065
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.
// Question 02

#include <iostream>

using namespace std;

int main()
{
    int num ;
    double inch, pound , mile ;
    cout << "1 inch  = 2.54 cm \n" ;
    cout << "1 pound = 0.453592 kg \n" ;
    cout << "1 mile  = 1.60934 km \n" ;

    cout << "\n1. Inches to Centimeters \n" ;
    cout << "2. Pounds to Kilograms \n" ;
    cout << "3. Miles to Kilometers \n" ;
    cout << "\nEnter your choice (1-3): " ;
    cin >> num ;

    if (num==1){
        cout << "Enter the Inches: " ;
        cin >> inch ;
        cout << "\n" << inch << " Inches = " << inch*2.54 << " Centimeters" << endl;
    }
    else if (num==2){
        cout << "Enter the pounds: " ;
        cin >> pound ;
        cout << "\n" << pound << " pounds = " << pound*0.453592 << " kilograms" << endl;
    }
    else if (num==3){
        cout << "Enter the mile: " ;
        cin >> mile ;
        cout << "\n" << mile << " miles = "  << mile*1.60934 << " kilometers" << endl;
    }

    return 0;
}
