// levelOrder Traversal
#include<bits/stdc++.h>
using namespace std;

// TreeNode structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform Level Order Traversal (BFS)
vector<int> levelOrderTraversal(TreeNode* root) {
    vector<int> levelOrder;
    if (!root) return levelOrder;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        levelOrder.push_back(node->val);

        // Add left child if exists
        if (node->left) q.push(node->left);
        // Add right child if exists
        if (node->right) q.push(node->right);
    }
    return levelOrder;
}

int main() {
    // Sample binary tree
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

    // Perform level order traversal
    vector<int> result = levelOrderTraversal(root);

    // Print the level order traversal
    cout << "Level Order Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
