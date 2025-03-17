// starting position of loop - Floyd’s Cycle Detection Algorithm (Tortoise and Hare Approach)
#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to detect the start of a cycle in a linked list using Floyd’s Algorithm
ListNode* detectCycle(ListNode* head) {
    if (!head || !head->next) return NULL;

    ListNode* slow = head;
    ListNode* fast = head;

    // Step 1: Detect cycle using slow and fast pointers
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) { // Cycle detected
            // Step 2: Find the start of the cycle
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow; // Start node of the cycle
        }
    }
    return NULL; // No cycle
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
