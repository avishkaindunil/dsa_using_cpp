#include <iostream>

using namespace std;

class Stack {
private:
    static const int MAX = 100; 
    int arr[MAX]; 
    int top; 

public:
    Stack() : top(-1) {} 

    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack overflow" << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack" << endl;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return 0;
        } else {
            int x = arr[top--]; 
            cout << x << " popped from stack" << endl;
            return x;
        }
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return 0;
        } else {
            return arr[top];
        }
    }

    bool isEmpty() {
        return (top < 0);
    }

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
