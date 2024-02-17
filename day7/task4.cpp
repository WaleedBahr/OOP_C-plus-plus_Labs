/*modify the stack Class that have a dynamic array to support more general
type like float, double, string using template class*/
#include <iostream>
using namespace std;
template <typename T>
class Stack {
private:
    T* arr;
    int top;
    int size;

public:
    Stack(int s = 10) {
        top = 0;
        size = s;
        arr = new T[s];
    }

    ~Stack() {
        delete[] arr;
    }

    bool isFull() const {
        return top == size;
    }

    bool isEmpty() const {
        return top == 0;
    }

    void push(T element) {
        if (isFull()) {
            cout << "Stack overflow. Cannot push element." << endl;
        } else {
            arr[top++] = element;
            cout << "Pushed: " << element << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow. Cannot pop element." << endl;
        } else {
            cout << "Popped: " << arr[--top] << endl;
        }
    }

    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i < top; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.push(40);
    intStack.push(50);
    intStack.push(60);
    intStack.display();

    intStack.pop();
    intStack.pop();
    intStack.pop();
    intStack.pop();
    intStack.display();

    Stack<double> doubleStack(3);
    doubleStack.push(1.55);
    doubleStack.push(3.65);
    doubleStack.push(5.88);
    doubleStack.display();

    Stack<string> stringStack(2);
    stringStack.push("Welcome");
    stringStack.push("Visitor");
    stringStack.display();

    return 0;
}
