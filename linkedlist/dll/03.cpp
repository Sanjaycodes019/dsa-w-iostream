// delete head in the Doubly linkedlist
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

Node* deleteHead(Node* head) {
    if (!head) return nullptr;

    Node* temp = head;   // Store current head
    head = head->next;   // Move head to the next node

    if (head) head->prev = nullptr;  // If new head exists, update its prev pointer

    delete temp;  // Free memory of old head
    return head;  
}

void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating a manually linked list: 1 <-> 2 <-> 3 <-> 4
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;

    cout << "Original List: ";
    printList(head);

    // Deleting the head
    head = deleteHead(head);
    cout << "After Deleting Head: ";
    printList(head);

    return 0;
}
