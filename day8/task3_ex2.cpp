/*In this example, c1 and c2 are pointers to Complex objects. We first create a Complex object with the value (1,2)
 and assign it to c1. Then, we create another Complex object and assign it to c2.
 Finally, we use the assignment operator to assign the value of c1 to c2. This will copy the value of c1 into c2.*/
#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int real, int imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    Complex() {

        real = 0;
        imaginary = 0;
    }

    void print() {
        std::cout << "(" << real << ", " << imaginary << "i)" << std::endl;
    }
};

int main() {
    Complex* c1 = new Complex(1, 2);
    Complex* c2 = new Complex();

    *c2 = *c1;

    cout << "c1: ";
    c1->print();

    cout << "c2: ";
    c2->print();

    delete c1;
    delete c2;

    return 0;
}
