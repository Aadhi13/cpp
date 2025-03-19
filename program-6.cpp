#include <iostream>

using namespace std;

class Employee {
    protected: 
        float e_num;
        char e_name[100], deprt[40], grade[3];
        long int basic_salary;

    public:
        void getDetails(){
            cout << "Name: ";
            cin >> e_name;
            cout << "Number: ";
            cin >> e_num;
            cout << "Department: ";
            cin >> deprt;
            cout << "Grade(A/B/c): ";
            cin >> grade;
            cout << "Salary: ";
            cin >> basic_salary;
        }

        void displayDetails(){
            cout << "Employee details";
            cout << "Number: " << e_num << "\nName: " << e_name
                 << "\nDepartment: " << deprt << "\nBasic Salary: " << basic_salary
                 << "\nGrade: " << grade << endl;
        }
};

class Pay: public Employee{
    float da, hra, pf, net_salary;

    public: 
        void calculatePay(){
            switch (*grade)
            {
            case 'A':
                da = 0.40 * basic_salary;
                hra = 0.30 * basic_salary;
                break;
            case 'B':
                da = 0.30 * basic_salary;
                hra = 0.20 * basic_salary;
                break;
            case 'C':
                da = 0.20 * basic_salary;
                hra = 0.10 * basic_salary;
                break;
            default:
                da = 0.05 * basic_salary;
                hra = 0.05 * basic_salary;
                break;
            }

            pf = 0.12 * basic_salary;
            net_salary = da+hra+basic_salary - pf;
        }

        void displayPaySlip(){
            cout << fixed;
            cout << "\nSalary Breakdown:\n";
            cout << "DA: " << da << "\nHRA: " << hra << "\nPF: " << pf
             << "\nNet Salary: " << net_salary << endl;
        }
};

int main (){
    Pay p;
    p.getDetails();
    p.displayDetails();
    p.calculatePay();
    p.displayPaySlip();
}