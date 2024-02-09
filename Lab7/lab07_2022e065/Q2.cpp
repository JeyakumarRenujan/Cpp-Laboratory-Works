// RENUJAN J.
// 2022/E/065
// EC2010
// Group: [B]
// Lab: [07]
// Program Description: [Find the length of the String your String ]
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.
#include <iostream>
using namespace std;


int main()
{
    char str[] = "''Hello I am Programming langugae''?" ;

    char *ptr = str;
    int length = 0;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }


    cout << "Length of the string: " << length << endl;

    return 0;
}

