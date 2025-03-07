// deletion of the node, position given

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

Node* deleteAtPosition(Node* head, int pos) {
    if (!head) return nullptr;  // If the list is empty, return nullptr

    Node* temp = head;

    // Case 1: If the head node is to be deleted
    if (pos == 1) {
        head = head->next;
        if (head) head->prev = nullptr;
        delete temp;
        return head;
    }

    // Traverse to the node at position pos
    for (int i = 1; temp && i < pos; i++)
        temp = temp->next;

    // If the position is invalid (greater than the length of the list)
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

    // Deleting node at position 3
    head = deleteAtPosition(head, 3);
    cout << "After Deleting at Position 3: ";
    printList(head);

    // Deleting node at position 1 (head)
    head = deleteAtPosition(head, 1);
    cout << "After Deleting at Position 1 (head): ";
    printList(head);

    // Deleting node at position 3 (tail)
    head = deleteAtPosition(head, 3);
    cout << "After Deleting at Position 3 (tail): ";
    printList(head);

    return 0;
}
