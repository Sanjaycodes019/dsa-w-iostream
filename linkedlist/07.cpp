//reverse using vector 
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

// Function to reverse linked list using a vector
void reverseList(Node* head) {
    vector<int> values;
    Node* temp = head;

    // Store values in a vector
    while (temp != NULL) {
        values.push_back(temp->data);
        temp = temp->next;
    }

    // Assign values in reverse order
    temp = head;
    for (int i = values.size() - 1; i >= 0; i--) {
        temp->data = values[i];
        temp = temp->next;
    }
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Driver Code
int main() {
    // Creating a linked list manually
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    printList(head);

    reverseList(head);  // Reverse the linked list

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
