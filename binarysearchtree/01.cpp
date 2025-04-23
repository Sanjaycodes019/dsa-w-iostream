// Each node has at most 2 children (called left and right).
// The left child has a smaller value.
// The right child has a bigger value.

// search, add, or remove numbers quickly
// faster than a list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// insert function (outside the Node class)
Node* insertIntoBST(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
    if (val > root->data) {
        root->right = insertIntoBST(root->right, val);
    } else {
        root->left = insertIntoBST(root->left, val);
    }
    return root;
}

// function to take input from user
Node* takeInput() {
    int data;
    Node* root = NULL;
    cin >> data;
    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
    return root;
}

// in-order traversal to print BST
void inOrder(Node* root) {
    if (root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main() {
    cout << "Enter values to insert in BST (enter -1 to stop): ";
    Node* root = takeInput();
    cout << "Inorder Traversal of BST: ";
    inOrder(root);
    return 0;
}
