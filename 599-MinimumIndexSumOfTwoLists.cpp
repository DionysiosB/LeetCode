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

    void dfs(TreeNode* node, const int &ub, int &mn){
        if(!node){return;}
        int x = node->val;
        if( (ub < x) && (mn < 0 || x < mn) ){mn = x;}
        dfs(node->left, ub, mn);
        dfs(node->right, ub, mn);
    }

    int findSecondMinimumValue(TreeNode* root) {
        int res(-1);
        dfs(root, root->val, res);
        return res;
    }
};
