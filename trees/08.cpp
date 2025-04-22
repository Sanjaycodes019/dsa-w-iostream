// optimal bruteforce
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
    int checkHeight(TreeNode* root) {
        if (root == nullptr) return 0;

        int leftHeight = checkHeight(root->left);
        if (leftHeight == -1) return -1;

        int rightHeight = checkHeight(root->right);
        if (rightHeight == -1) return -1;

        if (abs(leftHeight - rightHeight) > 1) return -1;

        return 1 + max(leftHeight, rightHeight);
    }

    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
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
