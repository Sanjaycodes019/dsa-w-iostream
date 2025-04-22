// balanced binary tree , bruteforce

#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int v) {
        val = v;
        left = right = nullptr;
    }
};

class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr) return 0;
        return 1 + max(height(root->left), height(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;

        int left = height(root->left);
        int right = height(root->right);

        if (abs(left - right) > 1) return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->left->left = new TreeNode(5);

    Solution sol;
    if (sol.isBalanced(root)) cout << "Tree is balanced" << endl;
    else cout << "Tree is not balanced" << endl;

    return 0;
}
