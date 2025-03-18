// binary tree (preorder traversal)
#include<bits/stdc++.h>
using namespace std;

// TreeNode class (Binary Tree Node structure)
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Recursive function to perform preorder traversal
void preOrder(TreeNode* root, vector<int>& preorder) {
    if (!root) return;
    preorder.push_back(root->data);       // Visit node first (preorder rule)
    preOrder(root->left, preorder);       // Traverse left subtree
    preOrder(root->right, preorder);      // Traverse right subtree
}

// Function that returns preorder traversal as vector
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> preorder;
    preOrder(root, preorder);
    return preorder;
}

int main() {
    // Creating a sample binary tree
    /*
            1
           / \
          2   3
         / \
        4   5
    */
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Get preorder traversal
    vector<int> result = preorderTraversal(root);

    // Print the preorder traversal
    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
