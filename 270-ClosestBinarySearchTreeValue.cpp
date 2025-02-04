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
    
    void dfs(TreeNode* node, const double& target, int& cur){
        if(node == nullptr){return;}
        double diff = std::abs(node->val - target);
        if(diff < std::abs(cur - target)){cur = node->val;}
        else if(diff == std::abs(cur - target) && node->val < cur){cur = node->val;}
        dfs(node->left,target, cur);
        dfs(node->right, target, cur);
    }
    
    
    int closestValue(TreeNode* root, double target) {
        int res(1e9);
        dfs(root, target, res);
        return res;
    }
};
