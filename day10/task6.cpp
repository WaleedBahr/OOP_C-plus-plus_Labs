/*Create an class called EmployeeList with some methods like add and remove and sort method that can sort employee list by salary?*/
#include <iostream>
using namespace std;
class Employee {
public:
    string employeeName;
    double employeeSalary;

    Employee() : employeeName(""), employeeSalary(0.0) {}

    Employee(std::string name, double salary) : employeeName(name), employeeSalary(salary) {}
};

class EmployeeList {
private:
    static const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int numberOfEmployees;

public:
    EmployeeList() : numberOfEmployees(0) {}

    void addEmployee(const Employee& newEmployee) {
        if (numberOfEmployees < MAX_EMPLOYEES) {
            employees[numberOfEmployees++] = newEmployee;
        } else {
            cout << "Cannot add more employees. The list is full.\n";
        }
    }
    void removeEmployee(const string& employeeNameToRemove) {
        for (int i = 0; i < numberOfEmployees; ++i) {
            if (employees[i].employeeName == employeeNameToRemove) {
                for (int j = i; j < numberOfEmployees - 1; ++j) {
                    employees[j] = employees[j + 1];
                }
                --numberOfEmployees;
                return;
            }
        }
        cout << "Employee not found: " << employeeNameToRemove << endl;
    }
    void sortEmployeesBySalary() {
        for (int i = 0; i < numberOfEmployees - 1; ++i) {
            for (int j = 0; j < numberOfEmployees - i - 1; ++j) {
                if (employees[j].employeeSalary > employees[j + 1].employeeSalary) {
                    Employee temp = employees[j];
                    employees[j] = employees[j + 1];
                    employees[j + 1] = temp;
                }
            }
        }
    }
    void displayEmployeeList() const {
        for (int i = 0; i < numberOfEmployees; ++i) {
        cout << "Name: " << employees[i].employeeName << ", Salary: " << employees[i].employeeSalary <<endl;
        }
    }
};

int main() {
    EmployeeList employeeList;

    employeeList.addEmployee(Employee("motaz",5500.0));
    employeeList.addEmployee(Employee("hazem",6000.0));
    employeeList.addEmployee(Employee("waleed",7000.0));
    employeeList.addEmployee(Employee("eslam",3000.0));
    cout << "Initial Employee List:\n";
    employeeList.displayEmployeeList();
    employeeList.sortEmployeesBySalary();
    cout << "\nEmployee List After Sorting by Salary:\n";
    employeeList.displayEmployeeList();
    employeeList.removeEmployee("motaz");
    cout << "\nEmployee List After Removing Alice:\n";
    employeeList.displayEmployeeList();

    return 0;
}
