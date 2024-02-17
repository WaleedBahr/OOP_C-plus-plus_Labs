/*
Create a class called Stack for storing integers. The data members are an
integer array with MAX size = 10 for storing the integers and an integer for
storing the top of stack (top). Include member functions for
initializing top to 0, pushing an element to the stack and for popping an
element from the stack. The push() function should check for “stack
overflow” with function isFull() and pop() should check for “stack
underflow” with function isEmpty()*/
/*
- Can you make the methods push and pop private methods? why?
- Can you make the methods isEmpty and isFull private methods? Why ?
Make Methods Private:

You can make push, pop, isEmpty, and isFull private within the Stack class.
Expose Public Interface:

Provide public methods (like userPush, userPop, and display) for users to interact with the stack.
Maintain Functionality:

The stack will still function as intended, and users will be able to push, pop, and display elements through the defined public methods.
*/
#include <iostream>
using namespace std;

#define MAX 10

class Stack {
private:
    int arr[MAX];
    int top;

public:
  Stack()
  {
    top = 0;
  }
    bool isFull() const {
        return top == MAX;
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
            cout << "Popped: " << arr[top - 1] << endl;
            --top;
        }
    }

    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i < top; ++i) {
                std::cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    myStack.display();

    myStack.pop();
    myStack.pop();
    myStack.pop();

    myStack.display();

    return 0;
}
