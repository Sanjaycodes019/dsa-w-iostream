//middle of linkedlist
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

// Function to find the middle of the linked list
Node* findMiddle(Node* head) {
    if (head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;  // Middle node
}

// Driver Code
int main() {
    // Creating a linked list manually
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Node* middle = findMiddle(head);
    if (middle != NULL)
        cout << "Middle Element: " << middle->data << endl;
    else
        cout << "List is empty." << endl;

    return 0;
}
