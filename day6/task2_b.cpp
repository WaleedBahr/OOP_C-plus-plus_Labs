// C++ program to sum 2, 3 or 4 values using default argument values
#include <iostream>
using namespace std;
int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}
int main() {
    cout<<"the sum of tow value = "<<sum(1,2)<<endl;
    cout<<"the sum of three value = "<<sum(1,2,3)<<endl;
    cout<<"the sum of four value = "<<sum(1,2,3,4)<<endl;

    return 0;
}
