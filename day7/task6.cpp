/*Create a class called Fractions with 2 private fields Numerator, Denominator.
And a public constructor that sets Numerator and Denominator. This class
must include 4 members functions in Fractions class: Sum, Difference,
Product, Division. Final add to class a method print to print the fraction
object in acceptable format */
#include <iostream>
#include <algorithm>
using namespace std;

class Fractions {
private:
    int Numerator;
    int Denominator;

public:
    Fractions(int numerator, int denominator) {
        Numerator = numerator;
        Denominator = denominator;
    }

    void setnumerator(int n) {
        Numerator = n;
    }

    int getnumerator() {
        return Numerator;
    }

    void setdenominator(int d) {
        Denominator = d;
    }

    int getdenominator() {
        return Denominator;
    }

    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    void simplify() {
        int commonDivisor = gcd(Numerator, Denominator);
        Numerator /= commonDivisor;
        Denominator /= commonDivisor;
    }

    Fractions Sum(const Fractions& other) {
        int resultNumerator = Numerator * other.Denominator + other.Numerator * Denominator;
        int resultDenominator = Denominator * other.Denominator;
        Fractions result(resultNumerator, resultDenominator);
        result.simplify();
        return result;
    }

    Fractions Difference(const Fractions& other)  {
        int new_numerator = Numerator * other.Denominator - other.Numerator * Denominator;
        int new_denominator = Denominator * other.Denominator;
        Fractions result(new_numerator, new_denominator);
        result.simplify();
        return result;
    }

    Fractions Product(const Fractions& other) {
        Fractions result(Numerator * other.Numerator, Denominator * other.Denominator);
        result.simplify();
        return result;
    }

    Fractions Division(const Fractions& other) {
        Fractions result(Numerator * other.Denominator, Denominator * other.Numerator);
        result.simplify();
        return result;
    }

    void print()  {
        cout << Numerator << "/" << Denominator << endl;
    }
};

int main() {
    int numerator1, denominator1, numerator2, denominator2;
    cout << "Enter numerator for fraction 1: ";
    cin >> numerator1;
    Fractions num1(numerator1, 1); // Denominator set to 1 by default

    cout << "Enter denominator for fraction 1: ";
    cin >> denominator1;
    num1.setdenominator(denominator1);

    cout << "Enter numerator for fraction 2: ";
    cin >> numerator2;
    Fractions num2(numerator2, 1); // Denominator set to 1 by default

    cout << "Enter denominator for fraction 2: ";
    cin >> denominator2;
    num2.setdenominator(denominator2);

    Fractions sum = num1.Sum(num2);
    cout << "Sum: ";
    sum.print();

    Fractions subtract = num1.Difference(num2);
    cout << "Difference: ";
    subtract.print();

    Fractions multiply = num1.Product(num2);
    cout << "Multiply: ";
    multiply.print();

    Fractions division = num1.Division(num2);
    cout << "Division: ";
    division.print();

    return 0;
}
