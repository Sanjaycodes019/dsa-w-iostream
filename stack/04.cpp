//inserting at the bottom of the stack
#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int value) {
    int n = s.size();
    int arr[n + 1]; 

    int i = 0;
    while (!s.empty()) {
        arr[i++] = s.top();
        s.pop();
    }

    s.push(value);

    for (int j = i - 1; j >= 0; j--) {
        s.push(arr[j]);
    }
}

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack before insertion at bottom: ";
    stack<int> temp = s; 
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    insertAtBottom(s, 5);

    cout << "Stack after insertion at bottom: ";
    temp = s; 
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
