#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int capacity;
    int* array;

public:
    Queue(int cap) {
        capacity = cap;
        front = 0;
        rear = -1;
        size = 0;
        array = new int[capacity];
    }

    ~Queue() {
        delete[] array;
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full, cannot enqueue " << item << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        array[rear] = item;
        size++;
        cout << "Enqueued: " << item << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue" << endl;
            return -1;
        }
        int item = array[front];
        front = (front + 1) % capacity; 
        size--;
        return item;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty, nothing to peek" << endl;
            return -1;
        }
        return array[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < size; i++) {
            int index = (front + i) % capacity; 
            cout << array[index] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5); 

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    q.display();

    q.enqueue(60);
    q.enqueue(70);

    q.display();

    cout << "Front element: " << q.peek() << endl;

    return 0;
}
