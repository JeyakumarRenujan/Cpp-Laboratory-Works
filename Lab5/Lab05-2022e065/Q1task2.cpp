// RENUJAN J.
// 2022/E/065
// EC2010
// Group: [B]
// Lab: [05]
// Program Description: [Employee details]
// Certificate of Authenticity: (choose one from below)
// I certify that the code in the method function main of this project
// is entirely my own work.

#include <iostream>
using namespace std;

class Employee {
private:
    double basicSalary;
    double allowance;
    double epfRate;
    double epf;
    double monthlySalary;

public:
    void get(double basicSalary, double allowance, double epfRate){
        this->basicSalary = basicSalary;
        this->allowance = allowance;
        this->epfRate = epfRate;
    }

    double calculateMonthlySalary() {
        monthlySalary = basicSalary + allowance;
        return monthlySalary;
    }

    double calculateEPF() {
        epf = basicSalary * (epfRate / 100);
        return epf;
    }

    double calculateEPFAfterYears(int years) {
        double epfAfterYears = 0;

        for (int i =1; i <= years; ++i) {
            epfAfterYears += epf * 12;
            epfAfterYears *= (1 + (epfRate / 100));
        }

        return epfAfterYears;
    }
};

int main()
{
    Employee emp1;

    double basicSalary, allowance, epfRate;
    int years;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Allowance: ";
    cin >> allowance;

    cout << "Enter EPF Rate(%): ";
    cin >>epfRate;

    cout << "Enter Number of Years: ";
    cin >> years;

    emp1.get(basicSalary, allowance, epfRate);

    cout << "Monthly Salary: " << emp1.calculateMonthlySalary() <<endl;
    cout << "EPF Deduction: " << emp1.calculateEPF() <<endl;
    cout << "EPF After " << years << " Years: " << emp1.calculateEPFAfterYears(years) <<endl;

    return 0;

}












