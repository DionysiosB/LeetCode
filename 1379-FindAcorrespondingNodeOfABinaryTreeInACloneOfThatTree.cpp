/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 TreeNode* dfs(TreeNode* root, int tval){
     if(root == nullptr){return nullptr;}
     if(root->val == tval){return root;}
     TreeNode* a = dfs(root->left, tval);
     if(a != nullptr){return a;}
     else{return dfs(root->right, tval);}
 }

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ret = dfs(cloned, target->val);
        return ret;
    }
}
