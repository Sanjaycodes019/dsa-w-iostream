#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left, *right;
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

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;

        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int throughRoot = height(root->left) + height(root->right);

        return max({left, right, throughRoot});
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution sol;
    cout << "Diameter (Brute Force): " << sol.diameterOfBinaryTree(root) << endl;
    return 0;
}
