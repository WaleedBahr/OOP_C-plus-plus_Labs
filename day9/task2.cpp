/*A C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.*/
#include <iostream>
using namespace std;

class Triangle {
private:
    int s1;
    int s2;
    int s3;

public:
    Triangle() {
        s1 = 0;
        s2 = 0;
        s3 = 0;
    }

    void setSides(int x, int y, int z) {
        s1 = x;
        s2 = y;
        s3 = z;
    }

    void getSides() const {
        cout << "The First Side Length Is: " << s1 << endl;
        cout << "The Second Side Length Is: " << s2 << endl;
        cout << "The Third Side Length Is: " << s3 << endl;
    }

    void classifyTriangle() const {
        if (s1 == s2 && s2 == s3) {
            cout << "This Triangle Is Equilateral" << endl;
        } else if (s1 == s2 || s2 == s3 || s1 == s3) {
            cout << "This Triangle Is Isosceles" << endl;
        } else {
            cout << "This Triangle Is Scalene" << endl;
        }
    }
};

int main() {
    Triangle triangle;

    int side1, side2, side3;

    do {
        cout << "Enter the length of the first side: ";
        cin >> side1;

        if (side1 <= 0) {
            cout << "Invalid value. Please enter a positive value." << endl;
        }
    } while (side1 <= 0);

    do {
        cout << "Enter the length of the second side: ";
        cin >> side2;

        if (side2 <= 0) {
            cout << "Invalid value. Please enter a positive value." << endl;
        }
    } while (side2 <= 0);

    do {
        cout << "Enter the length of the third side: ";
        cin >> side3;

        if (side3 <= 0) {
            cout << "Invalid value. Please enter a positive value." << endl;
        }
    } while (side3 <= 0);


    triangle.setSides(side1, side2, side3);

    triangle.getSides();
    triangle.classifyTriangle();

    return 0;
}
