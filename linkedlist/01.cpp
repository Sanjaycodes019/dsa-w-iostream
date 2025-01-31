#include <bits/stdc++.h>
using namespace std;

#define SIZE 10  // Maximum nodes in the linked list

class LinkedList {
public:
    struct Node {
        int data;
        int next;
    };

    Node nodes[SIZE];
    int head, freeIndex;

    LinkedList() {
        head = -1;  // Empty linked list
        freeIndex = 0;
        for (int i = 0; i < SIZE - 1; i++)
            nodes[i].next = i + 1;  // Set free list
        nodes[SIZE - 1].next = -1;
    }

    int getNewNode(int value) {
        if (freeIndex == -1) {
            cout << "No free space available!" << endl;
            return -1;
        }
        int newNode = freeIndex;
        freeIndex = nodes[freeIndex].next;
        nodes[newNode].data = value;
        nodes[newNode].next = -1;
        return newNode;
    }

    void insertAtHead(int value) {
        int newNode = getNewNode(value);
        if (newNode == -1) return;
        nodes[newNode].next = head;
        head = newNode;
    }

    void insertAtTail(int value) {
        int newNode = getNewNode(value);
        if (newNode == -1) return;
        if (head == -1) {
            head = newNode;
            return;
        }
        int temp = head;
        while (nodes[temp].next != -1) {
            temp = nodes[temp].next;
        }
        nodes[temp].next = newNode;
    }

    void deleteAtHead() {
        if (head == -1) return;
        int temp = head;
        head = nodes[head].next;
        nodes[temp].next = freeIndex;
        freeIndex = temp;
    }

    void display() {
        int temp = head;
        while (temp != -1) {
            cout << nodes[temp].data << " -> ";
            temp = nodes[temp].next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtTail(30);
    list.display();
    list.deleteAtHead();
    list.display();
    return 0;
}
