//implementing stack using queue
#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    void push(int x) {
        q1.push(x);
    }

    void pop() {
        if (q1.empty()) return;
        
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        
        q1.pop();  // Remove top element
        
        swap(q1, q2);
    }

    int top() {
        if (q1.empty()) return -1;

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();
        q2.push(topElement);
        q1.pop();
        
        swap(q1, q2);
        return topElement;
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << s.top() << endl; // Output: 30
    s.pop();
    cout << s.top() << endl; // Output: 20
    return 0;
}
