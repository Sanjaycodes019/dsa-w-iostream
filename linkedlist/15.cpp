// palindrome or not

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool isPalindrome(ListNode* head) {
    stack<int> st;
    ListNode* temp = head;
    while (temp) {
        st.push(temp->val);
        temp = temp->next;
    }
    temp = head;
    while (temp) {
        if (temp->val != st.top()) return false;
        st.pop();
        temp = temp->next;
    }
    return true;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    cout << (isPalindrome(head) ? "The linked list is a palindrome." : "The linked list is NOT a palindrome.") << endl;
    return 0;
}
