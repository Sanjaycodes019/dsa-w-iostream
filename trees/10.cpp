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
    int maxDiameter = 0;

    int height(TreeNode* root) {
        if (root == nullptr) return 0;

        int left = height(root->left);
        int right = height(root->right);

        maxDiameter = max(maxDiameter, left + right);

        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxDiameter;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution sol;
    cout << "Diameter (Optimal): " << sol.diameterOfBinaryTree(root) << endl;
    return 0;
}
