/* compare two objects of Stack in a correct way and return true if they equal
in size and top and data return true. We can overload the suitable operator*/
#include <iostream>
using namespace std;
#define maxSize 10
class Stack {
private:
    int data[maxSize];
    int top;

public:
    Stack(){
        top=-1;
    }

    void push(int value) {
        if (top < maxSize - 1) {
            data[++top] = value;
        } else {
            cout << "Stack Overflow! Cannot push onto a full stack." << endl;
        }
    }

    int pop() {
        if (top >= 0) {
            return data[top--];
        } else {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
            return -1;
        }
    }

    bool operator==(const Stack& s) const {
        if (top != s.top) {
            return false;
        }

        for (int i = 0; i <= top; ++i) {
            if (data[i] != s.data[i]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Stack s1, s2;
    int size1, size2;

    cout << "Enter the size of the first stack : ";
    cin >> size1;

    for (int i = 0; i < size1; ++i) {
        int value;
        cout << "Enter value for stack 1: ";
        cin >> value;
        s1.push(value);
    }

    cout << "Enter the size of the second stack : ";
    cin >> size2;

    for (int i = 0; i < size2; ++i) {
        int value;
        cout << "Enter value for stack 2: ";
        cin >> value;
        s2.push(value);
    }

    if (s1 == s2) {
        cout << "True the stacks are equals" << endl;
    } else {
        cout << "False the stacks not equlas" << endl;
    }

    return 0;
}
