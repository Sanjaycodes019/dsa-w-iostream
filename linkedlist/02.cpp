//insertion and deletion
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() { head = NULL; }

    // Insert at the beginning
    void insertBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // Insert at the end
    void insertEnd(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Delete by value
    void deleteByValue(int key) {
        if (head == NULL) return;
        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL && temp->next->data != key) {
            temp = temp->next;
        }
        if (temp->next == NULL) return;
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    // Search for an element
    bool search(int key) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == key) return true;
            temp = temp->next;
        }
        return false;
    }

    // Traverse and print
    void traverse() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertBeginning(5);
    
    cout << "Linked List: ";
    list.traverse();
    
    cout << "Deleting 20..." << endl;
    list.deleteByValue(20);
    list.traverse();
    
    cout << "Searching for 10: " << (list.search(10) ? "Found" : "Not Found") << endl;
    
    return 0;
}
