/*If you face a problem when use the method sort that sort employee list by salary
 in ascending order only to sort the employees in descending order what you do?*/
#include <iostream>
using namespace std;
class Employee {
public:
    std::string name;
    double salary;
    Employee() : name(""), salary(0.0) {}

    Employee(std::string n, double s) : name(n), salary(s) {}
};

class EmployeeList {
private:
    static const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int numEmployees;

public:
    EmployeeList() : numEmployees(0) {}

    void addEmployee(const Employee& emp) {
        if (numEmployees < MAX_EMPLOYEES) {
            employees[numEmployees++] = emp;
        } else {
            cout << "Cannot add more employees. List is full.\n";
        }
    }

    void removeEmployee(const string& empName) {
        for (int i = 0; i < numEmployees; ++i) {
            if (employees[i].name == empName) {
                for (int j = i; j < numEmployees - 1; ++j) {
                    employees[j] = employees[j + 1];
                }
                --numEmployees;
                return;
            }
        }
        std::cout << "Employee not found: " << empName << std::endl;
    }
    void sortEmployeesBySalary(bool ascending) {
        for (int i = 0; i < numEmployees - 1; ++i) {
            for (int j = 0; j < numEmployees - i - 1; ++j) {
                bool condition = ascending ? (employees[j].salary > employees[j + 1].salary) :
                                            (employees[j].salary < employees[j + 1].salary);
                if (condition) {
                    Employee temp = employees[j];
                    employees[j] = employees[j + 1];
                    employees[j + 1] = temp;
                }
            }
        }
    }
    void displayEmployeeList() const {
        for (int i = 0; i < numEmployees; ++i) {
            std::cout << "Name: " << employees[i].name << ", Salary: " << employees[i].salary << std::endl;
        }
    }
};

int main() {
    EmployeeList employeeList;
    employeeList.addEmployee(Employee("motaz",5500.0));
    employeeList.addEmployee(Employee("hazem",6000.0));
    employeeList.addEmployee(Employee("waleed",7000.0));
    employeeList.addEmployee(Employee("eslam",3000.0));
    std::cout << "Initial Employee List:\n";
    employeeList.displayEmployeeList();
    employeeList.sortEmployeesBySalary(true);

    cout << "\nEmployee List After Sorting by Salary (Ascending):\n";
    employeeList.displayEmployeeList();
    employeeList.sortEmployeesBySalary(false);
    cout << "\nEmployee List After Sorting by Salary (Descending):\n";
    employeeList.displayEmployeeList();

    return 0;
}


