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

    int dfs(TreeNode* node, int &total){
        if(!node){return 0;}
        int gl = dfs(node->left, total);
        int gr = dfs(node->right, total);
        int gt = ((node->val - 1) + gl + gr);
        total += std::abs(gl) + std::abs(gr);
        return gt;
    }

    int distributeCoins(TreeNode* root) {

        int res(0);
        dfs(root, res);
        return res;
        
    }
};
