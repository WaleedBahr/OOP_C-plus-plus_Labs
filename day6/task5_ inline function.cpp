//write an inline function to get the max value between two value with c++
#include <iostream>
using namespace std;
inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x;
    int y;
    cout<<"enter the first number : ";
    cin>>x;
    cout<<"enter the second number : ";
    cin>>y;

    int maximum = max(x,y);

   cout << "Maximum value = " << maximum <<endl;

    return 0;
}
