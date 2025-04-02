#include <iostream>

using namespace std;

class Stack {
private:
    static const int MAX = 100; // Maximum size of the stack
    int arr[MAX]; // Array to store stack elements
    int top; // Index of the top element

public:
    Stack() : top(-1) {} // Constructor initializes top to -1 indicating an empty stack

    // Function to add an element to the stack
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack overflow" << endl;
        } else {
            arr[++top] = x; // Increment top and add element
            cout << x << " pushed into stack" << endl;
        }
    }

    // Function to remove the top element from the stack
    int pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return 0;
        } else {
            int x = arr[top--]; // Remove the top element and decrement top
            return x;
        }
    }

    // Function to return the top element of the stack
    int peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return 0;
        } else {
            return arr[top];
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << " popped from stack" << endl; // Should print 30

    cout << "Top element is: " << stack.peek() << endl; // Should print 20

    cout << "Stack empty: " << (stack.isEmpty() ? "Yes" : "No") << endl; // Should print No

    return 0;
}
