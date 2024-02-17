/*compare two objects of class Teacher and Student with private attribute gpa without getter and setter*/
#include <iostream>
using namespace std;
class Student; // Forward declaration

class Teacher {
private:
    float gpat;

public:
    Teacher(float x)
    {
        gpat=x;
    }

    friend float compareGPAs(const Teacher& t, const Student& s);
};

class Student {
private:
    float gpas;

public:
    Student(float y)
    {
        gpas=y;
    }


    friend float compareGPAs(const Teacher& t, const Student& s);
};

float compareGPAs(const Teacher& t, const Student& s) {
    return t.gpat - s.gpas;
}

int main() {
    float teacherGPA, studentGPA;

    cout << "Enter the GPA for the Teacher: ";
    cin >> teacherGPA;

    cout << "Enter the GPA for the Student: ";
    cin >> studentGPA;

    Student s1(studentGPA);
    Teacher t1(teacherGPA);

    int difference = compareGPAs(t1, s1);

    if (difference > 0)
        cout << "The GPA of the Teacher Is Greater Than The GPA of the student" <<endl;
    else if (difference < 0)
        cout << "The GPA of the Student Is Greater Than The GPA of the Teacher" <<endl;
    else
        cout << "The GPA of the Student Is Equal to The GPA of the Teacher" << endl;

    return 0;
}
