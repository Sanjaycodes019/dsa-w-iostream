// deleting the node, key given

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

Node* deleteNode(Node* head, int key) {
    if (!head) return nullptr;  // If the list is empty, return nullptr

    Node* temp = head;

    // Case 1: If the head node itself is to be deleted
    if (head->data == key) {
        head = head->next;
        if (head) head->prev = nullptr;
        delete temp;
        return head;
    }

    // Traversing to find the node with the given key
    while (temp && temp->data != key)
        temp = temp->next;

    // If key is not found
    if (!temp) return head;

    // Case 2: If the node is in the middle or end
    if (temp->next) temp->next->prev = temp->prev;
    if (temp->prev) temp->prev->next = temp->next;

    delete temp;
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
    // Creating a manually linked list: 1 <-> 2 <-> 3 <-> 4 <-> 5
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth->prev = fourth;

    cout << "Original List: ";
    printList(head);

    // Deleting key 3
    head = deleteNode(head, 3);
    cout << "After Deleting 3: ";
    printList(head);

    // Deleting key 1 (head)
    head = deleteNode(head, 1);
    cout << "After Deleting 1 (head): ";
    printList(head);

    // Deleting key 5 (tail)
    head = deleteNode(head, 5);
    cout << "After Deleting 5 (tail): ";
    printList(head);

    return 0;
}
