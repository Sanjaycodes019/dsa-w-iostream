// doubly linkedlist
// implementation, array to dll

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val, Node* nxt = nullptr, Node* prv = nullptr) {
        data = val;
        next = nxt;
        prev = prv;
    }
};

Node* converttodll(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;  
    }
    return head;
}

void printdll(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 3, 4, 5, 6, 3, 7};
    Node* head = converttodll(arr);
    printdll(head);  
    return 0;
}
