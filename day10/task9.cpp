/*Write a program to save data of array of students in file and you can append
 students data at any time to this file. ( student data contain – code , name , gpa ).*/
#include<iostream>
#include<fstream>
using namespace std;

typedef struct x {
    int code;
    string name;
    double gpa;
}student;

int main() {
    int size;

    cout << "Enter the number of students to add to the file: ";
    cin >> size;

    student st[size];

    ofstream out;
    out.open("D:\\software testing\\task9\\studentinfornation.txt", ios::app);

    if (!out) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    for (int i = 0; i < size; i++) {


        cout << "Enter the name of student " << i + 1 << ": ";
         cin>>st[i].name;
        out << st[i].name <<" ";
        cout << "Enter the code of student " << i + 1 << ": ";
        cin >> st[i].code;
        out << st[i].code <<" ";

        cout << "Enter the GPA of student " << i + 1 << ": ";
        cin >> st[i].gpa;
        out << st[i].gpa << endl;
    }

    out.close();

    cout << "Student data added to the file successfully." << endl;

    return 0;
}
