// level order traversal 

// We use a queue (FIFO) to store nodes level by level.
// Steps:
// Push root into the queue.
// While queue is not empty:
// Pop front node → print it.
// Push its left child (if exists).
// Push its right child (if exists).

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

void levelOrderTraversal(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left != NULL) q.push(temp->left);
        if (temp->right != NULL) q.push(temp->right);
    }
}

int main() {
    cout << "Enter values to insert in BST (enter -1 to stop): ";
    Node* root = takeInput();

    cout << "Level Order Traversal of BST: ";
    levelOrderTraversal(root);
    return 0;
}
