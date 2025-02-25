// implementation by value

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

Node* insertAtEnd(Node* head, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        return newNode;  // New node becomes the head
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

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
    Node* head = nullptr;

    // Insert single values one by one
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 7);

    // Print the doubly linked list
    printdll(head);

    return 0;
}
