/*to assign a complex number using another complex number when the class is implemented using pointers,
 you can create a copy constructor that performs a deep copy. Here's an example:*/
#include <iostream>
using namespace std;

class Complex {
private:
    int* r;
    int* i;

public:

    Complex() {
        r = new int(0);
        i = new int(0);
    }


    Complex(int real, int imaginary) {
        r = new int(real);
        i = new int(imaginary);
    }

    // Copy constructor (deep copy)
    Complex(const Complex& c) {
        r = new int(*(c.r));
        i = new int(*(c.i));
    }

    // Destructor
    ~Complex() {
        delete r;
        delete i;
    }

    // Overloaded + operator
    Complex operator+(const Complex& c) const {
        Complex temp(*r + *(c.r), *i + *(c.i));
        return temp;
    }

    // Overloaded - operator
    Complex operator-(const Complex& c) const {
        Complex temp(*r - *(c.r), *i - *(c.i));
        return temp;
    }

    // Overloaded * operator
    Complex operator*(const Complex& c) const {
        Complex temp((*r * *(c.r)) - (*i * *(c.i)), (*r * *(c.i)) + (*i * *(c.r)));
        return temp;
    }

    void print() const {
        cout << *r << " + " << *i << "i" << endl;
    }
};

int main() {
    // Create a complex number
    Complex num1(2, 3);

    // Assign another complex number using the copy constructor
    Complex num2 = num1;

    cout << "Assigned Complex Number: ";
    num2.print();

    return 0;
}
