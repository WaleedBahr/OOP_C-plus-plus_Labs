/*create a class named Complex that models a complex number,
numbers of the form x+yi, where x and y are real numbers, and I is the
imaginary unit equal the square root of -1.*/
#include<iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(double real, double imag) {
        this->real = real;
        this->imag = imag;
    }

    void setReal(double real) {
        this->real = real;
    }

    void setImag(double imag) {
        this->imag = imag;
    }

    double getReal() const {
        return real;
    }

    double getImag() const {
        return imag;
    }

    void print() const {
        cout << real;
        if (imag >= 0) {
            cout << "+";
        }
        cout << imag << "i" << endl;
    }

    Complex add(const Complex& c) const {
        double resultReal = real + c.real;
        double resultImag = imag + c.imag;
        return Complex(resultReal, resultImag);
    }

    Complex multiply(const Complex& c) const {
        double resultReal = real * c.real - imag * c.imag;
        double resultImag = real * c.imag + imag *c.real;
        return Complex(resultReal, resultImag);
    }
};

// General function to add two complex objects
Complex addComplex(const Complex& c1, const Complex& c2) {
    double result_real = c1.getReal() + c2.getReal();
    double result_imag = c1.getImag() + c2.getImag();
    return Complex(result_real, result_imag);
    }

// General function to multiply two complex objects
Complex multiplyComplex(const Complex& c1, const Complex& c2) {
    double result_real = c1.getReal() * c2.getReal() - c1.getImag() * c2.getImag();
    double result_imag = c1.getReal() * c2.getImag() + c1.getImag() * c2.getReal();
    return Complex(result_real, result_imag);
    }

int main() {
    double real1, imag1, real2, imag2;
    Complex num1;
    Complex num2;

    cout << "Enter the real part of complex number 1: ";
    cin >> real1;
    num1.setReal(real1);
    cout << "Enter the imaginary part of complex number 1: ";
    cin >> imag1;
    num1.setImag(imag1);

    cout << "Enter the real part of complex number 2: ";
    cin >> real2;
    num2.setReal(real2);
    cout << "Enter the imaginary part of complex number 2: ";
    cin >> imag2;
    num2.setImag(imag2);

    cout << "Using methods of the Complex class:" << endl;
    Complex d3=num1.add(num2);
    Complex d4=num1.multiply(num2);
    cout << "Addition: ";
    d3.print();
    cout << "Multiplication: ";
    d4.print();
    cout<<"------------------------------------------------------------"<<endl;
    cout << "Using general functions:" << endl;
    Complex sum = addComplex(num1, num2);
    cout << "Addition: ";
    sum.print();

    Complex multiplication = multiplyComplex(num1, num2);
    cout << "Multiplication: ";
    multiplication.print();

    return 0;
}
