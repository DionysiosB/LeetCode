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
    
    void dfs(TreeNode* node, int prev, int &total){
        if(node == nullptr){return;}
        int cur = 2 * prev + node->val;
        if(node->left == nullptr && node->right == nullptr){total += cur;}
        else{dfs(node->left, cur, total); dfs(node->right, cur, total);}
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int prev(0), total(0);
        dfs(root, prev, total);
        return total;
    }
};
