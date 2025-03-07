// merge two linkedlist sorted (iterative)

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

Node* mergeListsIterative(Node* list1, Node* list2) {
    Node dummy(0);  // Dummy node to simplify handling
    Node* tail = &dummy; // Tail pointer

    while (list1 != NULL && list2 != NULL) {
        if (list1->data < list2->data) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // If any nodes remain, attach them
    if (list1 != NULL) tail->next = list1;
    if (list2 != NULL) tail->next = list2;

    return dummy.next; // New head of merged list
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

    Node* mergedIterative = mergeListsIterative(list1, list2);
    cout << "Merged List (Iterative): ";
    printList(mergedIterative);

    return 0;
}
