//Delete a node (without head pointer) in a singly linked list.
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void insertEnd(int val) {
        Node* node = new Node(val);
        if (!head) {
            head = node;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = node;
    }

    void deleteNode(int val) {
        if (!head) return;
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head, *prev = nullptr;
        while (temp && temp->data != val) {
            prev = temp;
            temp = temp->next;
        }
        if (!temp) return;
        prev->next = temp->next;
        delete temp;
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
    LinkedList list;
    list.insertEnd(1);
    list.insertEnd(2);
    list.insertEnd(3);
    list.insertEnd(4);
    list.insertEnd(5);

    list.printList();

    list.deleteNode(3);

    list.printList();

    return 0;
}
