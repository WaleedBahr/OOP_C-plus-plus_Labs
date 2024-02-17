/*overload the + and - and * operator for Complex objects, */
#include <iostream>
using namespace std;

class Complex {
private:
    int r;
    int i;

public:
    Complex()
    {
        r=0;
        i=0;
    }

    void setreal(int a) {
        r = a;
    }

    void setimagery(int b) {
        i = b;
    }

    int getreal() const {
        return r;
    }

    int getimagery() const {
        return i;
    }

    Complex operator+(const Complex& c) const {
        Complex temp;
        temp.r = r + c.r;
        temp.i = i + c.i;
        return temp;
    }

    Complex operator-(const Complex& c) const {
        Complex temp;
        temp.r = r - c.r;
        temp.i = i - c.i;
        return temp;
    }

    Complex operator*(const Complex& c) const {
        Complex temp;
        temp.r = (r * c.r) - (i * c.i);
        temp.i = (r * c.i) + (i * c.r);
        return temp;
    }

    void print() const {
        cout << r << " + " << i << "i" << endl;
    }
};

int main() {
    int x, y;
    Complex num1, num2;

    cout << "Enter real part for num1: ";
    cin >> x;
    num1.setreal(x);

    cout << "Enter imaginary part for num1: ";
    cin >> y;
    num1.setimagery(y);

    cout << "Enter real part for num2: ";
    cin >> x;
    num2.setreal(x);

    cout << "Enter imaginary part for num2: ";
    cin >> y;
    num2.setimagery(y);

    Complex sum = num1 + num2;
    Complex diff = num1 - num2;
    Complex product = num1 * num2;

    cout << "Sum: ";
    sum.print();

    cout << "Subtract: ";
    diff.print();

    cout << "Multiply: ";
    product.print();

    return 0;
}
