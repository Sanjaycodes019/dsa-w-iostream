// swapping a dll

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Function to reverse the Doubly Linked List
Node* reverseDLL(Node* head) {
    Node* temp = NULL;
    Node* current = head;

    while (current != NULL) {
        // Swap prev and next pointers
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to next node (which was prev before swap)
        current = current->prev;
    }

    // The new head is the last node we visited
    if (temp != NULL) {
        head = temp->prev;
    }

    return head;
}

// Function to print the DLL
void printDLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to insert a node at the end
Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) return newNode;

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->prev = temp;
    
    return head;
}

int main() {
    Node* head = NULL;

    // Creating DLL: 10 <-> 20 <-> 30 <-> 40
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);

    cout << "Original DLL: ";
    printDLL(head);

    head = reverseDLL(head);

    cout << "Reversed DLL: ";
    printDLL(head);

    return 0;
}
