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
        cout << "Stack elements: ";
        for (int i = 0; i <= top; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << " popped from stack" << endl; 
    cout << "Top element is: " << stack.peek() << endl;
    cout << "Stack empty: " << (stack.isEmpty() ? "Yes" : "No") << endl; 
    stack.printStack(); 

    return 0;
}
