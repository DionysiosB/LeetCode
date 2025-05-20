/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void dfs(TreeNode* node, int &s){
        if(!node){return;}
        if(node->val % 2 == 0){
            if(node->left  && node->left->left){s += node->left->left->val;}
            if(node->left  && node->left->right){s += node->left->right->val;}
            if(node->right && node->right->left){s += node->right->left->val;}
            if(node->right && node->right->right){s += node->right->right->val;}
        }

        dfs(node->left, s);
        dfs(node->right, s);
    }



    int sumEvenGrandparent(TreeNode* root) {
        int total(0);
        dfs(root, total);
        return total;
    }
};
