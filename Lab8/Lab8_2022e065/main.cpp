// RENUJAN J.
// 2022/E/065
// EC2010
// Group: [B]
// Lab: [08]
// Program Description: [Online Course Registration System]
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.
#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    double Beginner;
    double Intermediate;
    double Advanced;
    double Expert;
    double EnglishPayment = 2;

public:
    Course(double aBeginner, double aIntermediate, double aAdvanced, double aExpert){ // setter
        Beginner = aBeginner;
        Intermediate = aIntermediate;
        Advanced = aAdvanced;
        Expert = aExpert;
    }

    double getLevelPayment(string level) { // getter
        if (level == "Beginner")
            return Beginner;
        else if (level == "Intermediate")
            return Intermediate;
        else if (level == "Advanced")
            return Advanced;
        else if (level == "Expert")
            return Expert;
        else
            return 0;  // Default case
    }
    int getEnglish(){
        return EnglishPayment;
    }

    double calculatePayment(string level, bool english) { // Payment calculation
        double basePayment = getLevelPayment(level);
        if (english)
            return basePayment + (EnglishPayment / 2);
        else
            return basePayment;
    }
};

int main() {
    cout << "   Welcome to Online Course Registration System!" << endl;
    // Display the details
    cout << "\tCourse name \t\tLevel \t\tWhat you will pay"  << endl;
    // Machine learning Course details
    cout << "\n\tMachine Learning \n\t\t\t\tBeginner        $2 \n\t\t\t\tIntermediate    $2.65 \n\t\t\t\tAdvanced        $2.95 \n\t\t\t\tExpert          $3" << endl;
    // Artificial Intelligence Course details
    cout << "\n\tArtificial Intelligence \n\t\t\t\tBeginner        $2 \n\t\t\t\tIntermediate    $2.65 \n\t\t\t\tAdvanced        $2.95 \n\t\t\t\tExpert          $3" << endl;
    // Web development Course details
    cout << "\n\tWeb development \n\t\t\t\tBeginner        $2 \n\t\t\t\tIntermediate    $2.65 \n\t\t\t\tAdvanced        $2.95 \n\t\t\t\tExpert          $3" << endl;
    // Software Engineering Course details
    cout << "\n\tSoftware Engineering \n\t\t\t\tBeginner        $2.5 \n\t\t\t\tIntermediate    $2.65 \n\t\t\t\tAdvanced        $3 \n\t\t\t\tExpert          $3.5" << endl;
    // Data Science Course details
    cout << "\n\tData Science \n\t\t\t\tBeginner        $1.5 \n\t\t\t\tIntermediate    $2.5 \n\t\t\t\tAdvanced        $2.65 \n\t\t\t\tExpert          $2.95" << endl;
    // Graphic design Course details
    cout << "\n\tGraphic design \n\t\t\t\tBeginner        $2 \n\t\t\t\tIntermediate    $2.65 \n\t\t\t\tAdvanced        $2.95 \n\t\t\t\tExpert          $3" << endl;
    // Digital Marketing Course details
    cout << "\n\tDigital Marketing \n\t\t\t\tBeginner        $1.2 \n\t\t\t\tIntermediate    $1.5 \n\t\t\t\tAdvanced        $2.5 \n\t\t\t\tExpert          $2.65" << endl;
    // English Course details
    cout << "\n\tSpoken English \t\t\t\t$2" << endl;
    cout << endl;

    cout << "\t=========================== \n\t\tCourse \n\t===========================" << endl;
    cout << "\t1.Machine learning \n\t2.Artificial Intelligence \n\t3.Web development \n\t4.Software Engineering \n\t5.Data Science \n\t6.Graphic design \n\t7.Digital Marketing \n\t8.Spoken English" << endl;


    // Course Payment details
    Course Pay_01(2, 2.65, 2.95, 3);
    Course Pay_02(2.5, 2.65, 3, 3.5);
    Course Pay_03(1.5, 2.5, 2.65, 2.95);
    Course Pay_04(1.2, 1.5, 2.5, 2.65);
    Course spokenEnglish(0,0,0,0);

    int selection, re;
    string level;
    string english;
    string YesNo;
    int i = 1;

    do {
        cout << "Registration_no - " << i << endl;
        i++;
        cout << "Which course you like to enroll?(1-8): ";
        cin >> selection;

        if (selection == 8) {
            re = spokenEnglish.getEnglish();
        }
        else {
            cout << "Which level? \n\t(Beginner)\n\t(Intermediate) \n\t(Advanced) \n\t(Expert) : ";
            cin >> level;
            cout << "Do you want to enroll Spoken English course?[Y/N] : ";
            cin >> english;

            switch(selection){
                case 1 && 2 && 3: re = Pay_01.calculatePayment(level,english == "Y");
                    break;
               case 4 : re = Pay_02.calculatePayment(level,english == "Y");
                    break;
               case 5: re = Pay_03.calculatePayment(level,english == "Y");
                    break;
               case 6: re = Pay_01.calculatePayment(level,english == "Y");
                    break;
               case 7: re = Pay_04.calculatePayment(level,english == "Y");
                    break;
               default:
                    break;
            } // end Switch
        }

        cout << "Pay: $" << re << endl;
        cout << "\nDo you want another Registration?[Y/N]: ";
        cin >> YesNo;
        cout << endl;

    } while (YesNo == "Y");

    cout << endl;

    return 0;
}
