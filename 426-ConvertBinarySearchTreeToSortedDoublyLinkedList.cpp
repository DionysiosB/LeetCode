/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/

class Solution {
public:

    void dfs(Node* root){
        if(!root){return;}
        
        dfs(root->left);
        if(!last_){first_ = root;}
        else{
            last_->right = root;
            root->left = last_;
        }
        last_ = root;

        dfs(root->right);
    }

    Node* treeToDoublyList(Node* root) {
        if(!root){return nullptr;}
        dfs(root);
        last_->right = first_;
        first_->left = last_;
        return first_;
    }

    Node *first_{nullptr};
    Node *last_{nullptr};
};
