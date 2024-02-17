/*Modify the Employee class by adding thebirthdate of type Date. Is this type of relation aggregation or composition?*/
//"Since an Employee and their DateOfBirth are closely linked, we can demonstrate this relationship using composition."
#include<iostream>
using namespace std;

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        Date(){
            day=3;
           month=1;
           year=1998;
        }

        Date(int d,int m ,int y){
            day=d;
            month=m;
            year=y;
        }

        void setday(int d){
            day=d;
        }

        void setmonth(int m){
            month=m;
        }

        void setyear(int y){
            year=y;
        }

        double getday(){
            return day;
        }

        double getmonth(){
            return month;
        }

        double getyear(){
            return year;
        }
};

class Employee{
    private:
        string name;
        int employee_id;
        double Salary;
        Date birthday;
        Employee(){
        }
    public:
        Employee(int employee_id,string name,double Salary,int day,int month,int year){
            this->employee_id=employee_id;
            this->name=name;
            this->Salary=Salary;
            birthday.setday(day);
            birthday.setmonth(month);
            birthday.setyear(year);
        }
         void printEmployeeDetails()  {
        cout << "Employee ID: " << employee_id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << Salary << endl;
        cout << "Birthday: " <<  birthday.getday() << "/" << birthday.getmonth() << "/" << birthday.getyear() << endl;
    }
};


int main() {

    Employee e(123,"Waleed",8000.0,3,1,1998);
    e.printEmployeeDetails();
    return 0;
}

