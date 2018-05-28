/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        
        if(root == NULL){return NULL;}
        if(root->left != NULL && root->left->val == 0 && root->left->left == NULL && root->left->right == 0){
            delete root->left; root->left = NULL;
        }
        else{root->left = pruneTree(root->left);}
        
        if(root->left != NULL && root->left->val == 0 && root->left->left == NULL && root->left->right == 0){
            delete root->left; root->left = NULL;
        }
        else{root->right = pruneTree(root->right);}
        
        if(root->val == 0 && root->left == NULL && root->right == NULL){return NULL;}

        return root;
    }
};
