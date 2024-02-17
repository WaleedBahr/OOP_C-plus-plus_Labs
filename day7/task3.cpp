/*modify the Stack Class that. the data members are dynamic integer array
where size determine when create the object of Stack if it missing in
creation assume the size=10.
If there is any need to create destructor, do it.
If there is any need to implement the copy constructor, do it*/
#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int size;

public:
    Stack(int s = 10)
    {
        top=0;
        size=s;
        arr=new int[s];
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

    void push(int element) {
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
    Stack myStack(5); // Change the size as needed

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.push(60);
    myStack.display();

    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.display();

    return 0;
}
