// merge two list in sorted manner (recurive)
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

Node* mergeLists(Node* list1, Node* list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    if (list1->data < list2->data) {
        list1->next = mergeLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeLists(list1, list2->next);
        return list2;
    }
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* list1 = new Node(10);
    list1->next = new Node(30);
    list1->next->next = new Node(50);

    Node* list2 = new Node(20);
    list2->next = new Node(40);
    list2->next->next = new Node(60);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    Node* merged = mergeLists(list1, list2);
    cout << "Merged List (Recursive): ";
    printList(merged);

    return 0;
}
