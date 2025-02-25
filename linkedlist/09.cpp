// removing the head of linkedlist
#include<bits/stdc++.h>
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

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void removeHead() {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }
};

int main() {
    LinkedList list;
    vector<int> arr = {1, 3, 4, 2, 5};
    for (int val : arr) {
        list.insert(val);
    }

    cout << "Original List: ";
    list.display();

    list.removeHead();

    cout << "After Removing Head: ";
    list.display();

    return 0;
}