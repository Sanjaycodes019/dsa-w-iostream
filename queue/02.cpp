//implementing queue as an Array

#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int *arr;

public:
    Queue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == size - 1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }
        if (front == -1) front = 0; // Set front if the first element is added
        arr[++rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        if (front == rear) { // Reset queue when all elements are removed
            front = rear = -1;
        } else {
            front++;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5); // Initialize a queue with capacity 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue elements: ";
    q.display();

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    cout << "After dequeue, queue elements: ";
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // This will indicate "Queue is full"

    cout << "Final queue: ";
    q.display();

    return 0;
}
