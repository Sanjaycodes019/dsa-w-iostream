#include<bits/stdc++.h>
using namespace std;

class Stack {
    int size;
    int top;
    int *arr;

public:
    Stack(int size) {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    // Push an element onto the stack
    void push(int value) {
        if(top == size - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
    }

    // Pop an element from the stack 
    int pop() {
        if(top == -1) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[top--];
    }

    // Return the current size of the stack
    int currentSize() {
        return top + 1;
    }

    // Return the element at the top of the stack
    int getTop() {
        if(top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s(5);
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(45);
    s.push(56);
    
    cout << "Top element: " << s.getTop() << endl;

    while(!s.isEmpty()) {
        cout << s.pop() << endl; // this method traverses the stack array
    }
    
    return 0;
}
