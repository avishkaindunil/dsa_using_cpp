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
            cout << x << " popped from stack" << endl;
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

    // Function to print all elements of the stack
    void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    int choice, value;

    do {
        cout << "\n--- Stack Operations ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Check if Empty\n";
        cout << "5. Print Stack\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                cout << "Top element is: " << stack.peek() << endl;
                break;
            case 4:
                cout << "Stack is " << (stack.isEmpty() ? "empty" : "not empty") << endl;
                break;
            case 5:
                stack.printStack();
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
