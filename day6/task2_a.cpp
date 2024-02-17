//C++ program to sum 2, 3 or 4 values using function overloading
#include <iostream>
using namespace std;
int sum(int a, int b);
int sum(int a, int b, int c) ;
int sum(int a, int b, int c, int d);
int main() {
    int num1,num2,num3,num4;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Enter the third number : ";
    cin>>num3;
    cout<<"Enter the forth number : ";
    cin>>num4;
    cout<<"the sum of tow value = "<<sum(num1,num2)<<endl;
    cout<<"the sum of three value = "<<sum(num1,num2,num3)<<endl;
    cout<<"the sum of four value = "<<sum(num1,num2,num3,num4)<<endl;

    return 0;
}
// Function to sum two values
int sum(int a, int b) {
    return a + b;
}

// Function to sum three values
int sum(int a, int b, int c) {
    return a + b + c;
}

// Function to sum four values
int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}
