// implementing doubly stack in single array
#include <iostream>
using namespace std;

class TwoStacks {
    int *arr; 
    int size;
    int top1, top2;

public:
    TwoStacks(int s) {
        size = s;
        arr = new int[s];
        top1 = -1; // Top of stack 1
        top2 = size; // Top of stack 2 (starts from the end of the array)
    }

    void push1(int value) {
        if (top1 + 1 == top2) {
            cout << "Stack 1 overflow, cannot push " << value << endl;
        } else {
            arr[++top1] = value;
            cout << value << " pushed into Stack 1" << endl;
        }
    }

    void push2(int value) {
        if (top2 - 1 == top1) {
            cout << "Stack 2 overflow, cannot push " << value << endl;
        } else {
            arr[--top2] = value;
            cout << value << " pushed into Stack 2" << endl;
        }
    }

    void pop1() {
        if (top1 == -1) {
            cout << "Stack 1 underflow" << endl;
        } else {
            cout << "Popped " << arr[top1--] << " from Stack 1" << endl;
        }
    }

    void pop2() {
        if (top2 == size) {
            cout << "Stack 2 underflow" << endl;
        } else {
            cout << "Popped " << arr[top2++] << " from Stack 2" << endl;
        }
    }

    int peek1() {
        if (top1 == -1) {
            cout << "Stack 1 is empty" << endl;
            return -1; 
        } else {
            return arr[top1];
        }
    }

    int peek2() {
        if (top2 == size) {
            cout << "Stack 2 is empty" << endl;
            return -1; 
        } else {
            return arr[top2];
        }
    }

    bool isEmpty1() {
        return top1 == -1;
    }

    bool isEmpty2() {
        return top2 == size;
    }

    int size1() {
        return top1 + 1;
    }

    int size2() {
        return size - top2;
    }

    ~TwoStacks() { 
        delete[] arr;
    }
};

int main() {
    TwoStacks stacks(10);
    
    stacks.push1(5);
    stacks.push1(10);
    stacks.push2(15);
    stacks.push2(20);
    
    cout << "Top of Stack 1: " << stacks.peek1() << endl;
    cout << "Top of Stack 2: " << stacks.peek2() << endl;

    stacks.pop1();
    stacks.pop2();

    cout << "Top of Stack 1 after pop: " << stacks.peek1() << endl;
    cout << "Top of Stack 2 after pop: " << stacks.peek2() << endl;

    return 0;
}