/*A C++ program to implement a class called Date that has private member variables for day, month, and year.
 Include member functions to set and get these variables, as well as to validate if the date is valid.*/
#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
     Date()
    {
        day=3;
        month=1;
        year=1998;
    }

    Date(int d, int m, int y)
    {
        day=d;
        month=m;
        year=y;
    }

    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    bool isValidDate() const {
        if (year < 0 || month < 1 || month > 12)
            return false;

        int maxDays = 31;

        if (month == 4 || month == 6 || month == 9 || month == 11)
            maxDays = 30;
        else if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                maxDays = 29;
            else
                maxDays = 28;
        }

        return (day >= 1 && day <= maxDays);
    }
};

int main() {
    Date d;
    int day;
    int month;
    int year;

    do {
        cout << "Enter day: ";
        cin >> day;
        d.setDay(day);

        if (!d.isValidDate()) {
            cout << "Invalid day. Please enter a valid day." << endl;
        }
    } while (!d.isValidDate());

    do {
        cout << "Enter month: ";
        cin >> month;
        d.setMonth(month);

        if (!d.isValidDate()) {
            cout << "Invalid month. Please enter a valid month." << endl;
        }
    } while (!d.isValidDate());

    do {
        cout << "Enter year: ";
        cin >> year;
        d.setYear(year);

        if (!d.isValidDate()) {
            cout << "Invalid year. Please enter a valid year." << endl;
        }
    } while (!d.isValidDate());

    cout << "Date is " << d.getDay() << "/" << d.getMonth() << "/" << d.getYear() << endl;

    return 0;
}
