// starting position of loop/cycle (hashmap)
#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to detect a cycle in a linked list using a hash map
ListNode* detectCycle(ListNode* head) {
    map<ListNode*, int> mpp;
    ListNode* temp = head;

    while (temp) {
        // If node is already present in the map, cycle detected
        if (mpp.find(temp) != mpp.end()) {
            return temp;
        }

        // Mark the node as visited
        mpp[temp] = 1;
        temp = temp->next;
    }
    
    return NULL; // No cycle detected
}

int main() {
    // Creating a predefined linked list with a cycle
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Creating a cycle: connecting last node (5) to node (3)
    head->next->next->next->next->next = head->next->next;

    // Detecting cycle in the linked list
    ListNode* cycleNode = detectCycle(head);

    if (cycleNode) {
        cout << "Cycle detected at node with value: " << cycleNode->val << endl;
    } else {
        cout << "No cycle detected" << endl;
    }

    return 0;
}
