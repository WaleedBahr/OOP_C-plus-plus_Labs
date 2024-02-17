/*overload the insertion operator to print stack using cout object and insertion operator<< and extraction>> a*/
#include <iostream>
using namespace std;

#define maxSize 10

class Stack {
private:
    int data[maxSize];
    int top;

public:
    Stack()
    {
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

    friend ostream& operator<<(ostream& out, const Stack& s);

    friend istream& operator>>(istream& in, Stack& s);
};

ostream& operator<<(ostream& out, const Stack& s) {
    out << "Stack [";
    for (int i = 0; i <= s.top; ++i) {
        out << s.data[i];
        if (i < s.top) {
            out << ", ";
        }
    }
    out << "]";
    return out;
}
istream& operator>>(istream& in, Stack& s) {
    int size;
    cout << "Enter the size of the stack: ";
    in >> size;
    if (size > maxSize) {
        cout << "Error: Size exceeds maximum size. Setting size to " << maxSize << "." << endl;
        size = maxSize;
    }

    for (int i = 0; i < size; ++i) {
        int value;
        cout << "Enter value for the stack: ";
        in >> value;
        s.push(value);
    }

    return in;
}

int main() {
    Stack s1, s2;
    cin >> s1;
    cin >> s2;
    cout << "Stack 1: " << s1 << endl;
    cout << "Stack 2: " << s2 << endl;

    return 0;
}
