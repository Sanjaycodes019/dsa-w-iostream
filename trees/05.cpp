// iterative preorder traversal
#include <bits/stdc++.h>
using namespace std;

// Definition of a Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

// Function to perform Preorder Traversal using Stack
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> preorder;
    if (root == NULL) return preorder;

    stack<TreeNode*> st;
    st.push(root);

    while (!st.empty()) {
        root = st.top();
        st.pop();
        preorder.push_back(root->val);

        // Push right first so that left is processed first
        if (root->right) st.push(root->right);
        if (root->left) st.push(root->left);
    }
    return preorder;
}

int main() {
    // Creating the following binary tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Call the preorder function
    vector<int> result = preorderTraversal(root);

    // Print the result
    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
