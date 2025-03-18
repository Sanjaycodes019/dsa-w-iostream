// postOrder traversal
#include<bits/stdc++.h>
using namespace std;

// TreeNode structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Solution class containing postorder logic
class Solution {
public:
    // Recursive function to perform postorder traversal
    void postOrder(TreeNode* root, vector<int>& postorder) {
        if (!root) return;
        postOrder(root->left, postorder);    // Traverse left subtree
        postOrder(root->right, postorder);   // Traverse right subtree
        postorder.push_back(root->val);      // Visit node
    }

    // Function to get postorder traversal as vector
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        postOrder(root, postorder);
        return postorder;
    }
};

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

    // Creating Solution object and getting postorder traversal
    Solution sol;
    vector<int> result = sol.postorderTraversal(root);

    // Print the postorder traversal
    cout << "Postorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
