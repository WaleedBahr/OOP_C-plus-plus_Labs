#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string employee_name;
    int    employee_id;
    float baseSalary;
    float performanceFactor;

public:

    Employee(string name, int id)
    {
     employee_name=name;
     employee_id=id;
     baseSalary=0;
     performanceFactor=1.0;
    }

    void setSalary(float base, float performance) {
        baseSalary = base * performance;
    }

    void printInfo() const {
        cout << "Employee Data : " << endl;
        cout<<"-------------------------------"<<endl;
        cout << "Employee Name: " << employee_name << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Salary: $" << baseSalary <<endl;
    }
    void getSalary() const {
        cout << "The Salary of the Employee is $" << baseSalary << endl;
    }
};

int main() {
    string name;
    int id;
    float baseSalary;
    float performanceFactor;

    cout << "Enter employee name: ";
    cin>>name;

    cout << "Enter employee ID: ";
    cin >> id;

    cout << "Enter base salary: $";
    cin >> baseSalary;

    cout << "Enter performance factor (1.0 for 100%): ";
    cin >> performanceFactor;

    Employee e(name, id);

    e.setSalary(baseSalary, performanceFactor);

    e.printInfo();

    e.getSalary();

    return 0;
}
