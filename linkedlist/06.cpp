//reverse a linkedlist
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to reverse the linked list (Iterative)
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;  // Store next node
        curr->next = prev;  // Reverse the link
        prev = curr;        // Move prev to current
        curr = next;        // Move current to next
    }
    return prev;  // New head of reversed list
}

// Function to print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Driver Code
int main() {
    // Creating a linked list manually
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    printList(head);

    head = reverseList(head);  // Reverse the linked list

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
