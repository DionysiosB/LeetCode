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

private:
    std::vector<int> v;
    
    void dfs(TreeNode* root){
        if(root == NULL){return;}
        v.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }

public:
    std::vector<int> preorderTraversal(TreeNode* root) {
        dfs(root);
        return v;
    }
};
