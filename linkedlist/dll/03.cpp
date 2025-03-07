// delete head in the Doubly linkedlist
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

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        if (head) {
            newNode->next = head;
            head->prev = newNode;
        }
        head = newNode;
    }

    void deleteHead() {
        if (!head) return;  // If list is empty, return
        Node* temp = head;
        head = head->next;  // Move head to next node
        if (head) head->prev = nullptr;  // If new head exists, update prev
        delete temp;  // Free memory of old head
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtHead(3);
    dll.insertAtHead(2);
    dll.insertAtHead(1);

    cout << "Original List: ";
    dll.printList();

    dll.deleteHead();
    cout << "After Deleting Head: ";
    dll.printList();

    dll.deleteHead();
    cout << "After Deleting Head Again: ";
    dll.printList();

    dll.deleteHead();
    cout << "After Deleting Head Again: ";
    dll.printList();

    return 0;
}
