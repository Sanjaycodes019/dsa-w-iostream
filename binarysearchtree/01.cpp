// Each node has at most 2 children (called left and right).
// The left child has a smaller value.
// The right child has a bigger value.

// search, add, or remove numbers quickly
// faster than a list

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

    Node* insertIntoBST(Node* &root, int val){
        if(root==NULL){
            root = new Node(val);
            return root;
        }
        if(val>root->data){
            root->right = insertIntoBST(root->right, val);
        }
        else{
            root->left = insertIntoBST(root->left, val);
        }
        return root;
    }

    void takeInput(Node* root){
        int data;
        cin>>data;
        while(data!=-1){
            insertIntoBST(root, data);
            cin>>data;
        }
    }
    void inOrder(Node* root) {
        if (root == NULL) return;
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

int main(){
    Node* root = NULL;
    takeInput(root);
    inOrder(root);
    return 0;
}