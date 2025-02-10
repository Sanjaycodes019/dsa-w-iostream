// bruteforce method
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

// Function to find middle using count method
Node* findMiddle(Node* head) {
    if (head == NULL) return NULL;

    int count = 0;
    Node* temp = head;

    // Step 1: Count total nodes
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    int middleIndex = count / 2; // If even, this gives second middle (0-based index)

    // Step 2: Traverse again to middle node
    temp = head;
    for (int i = 0; i < middleIndex; i++) {
        temp = temp->next;
    }
    return temp;  // Middle node
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
