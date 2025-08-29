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
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* target) {
        TreeNode* res = nullptr;
        while(root != nullptr){
            if(target->val < root->val){
                res = root;
                root = root->left;
            }
            else{root = root->right;}
        }

        return res;
    }
};
