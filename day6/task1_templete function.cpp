// C++ program to find the greater of two values using a template function
#include<iostream>
using namespace std;
template <class T>
T greater_value(T num1,T num2){
 if(num1>=num2)
        return num1;
    else
        return num2;
}
int main(){
    int x;
    int y;
    cout<<"enter the first number : ";
    cin>>x;
    cout<<"enter the second number : ";
    cin>>y;
    cout<<"the grater number is : "<<greater_value(x,y)<<endl;
    cout<<"the grater number is : "<<greater_value(2.5,6.7)<<endl;
    return 0;
}