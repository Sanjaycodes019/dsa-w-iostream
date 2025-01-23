#include <bits/stdc++.h>
using namespace std;

class Stack {
    int *arr; 
    int size;
    int top;

public:
    bool flag ;
    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }

    void push(int value) {
        if (top == size - 1) {
            cout << "stack overflow, cannot push "<<value<<endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack" << endl;
            flag = 0;
        }
    } 

    void pop() {
        if (top == -1) {
            cout << "stack underflow" << endl;
        } else {
            cout << "popped " << arr[top]<<" from the stack"<<endl;
            top--;
            if (top == -1){
                flag == 1;
            }
        }
    }

    int peak() {
        if (top == -1) {
            cout << "stack is empty" << endl;
            return -1; 
        } else {
            return arr[top];
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    int isSize() {
        return top + 1;
    }

    ~Stack() { 
        delete[] arr;
    }
};

int main(){
    Stack s(5);
    s.push(-1);
    int value = s.peak();
    if (s.flag == 0) cout<<value<<endl;
    return 0;
}