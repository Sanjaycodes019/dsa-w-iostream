// inOrder traversal
#include<bits/stdc++.h>
using namespace std;

// TreeNode class (Binary Tree Node structure)
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

// Recursive function to perform inorder traversal
void inOrder(TreeNode* root, vector<int>& inorder) {
    if (!root) return;
    inOrder(root->left, inorder);      // Traverse left subtree
    inorder.push_back(root->val);      // Visit node (inorder rule)
    inOrder(root->right, inorder);     // Traverse right subtree
}

// Function that returns inorder traversal as vector
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> inorder;
    inOrder(root, inorder);
    return inorder;
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

    // Get inorder traversal
    vector<int> result = inorderTraversal(root);

    // Print the inorder traversal
    cout << "Inorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
