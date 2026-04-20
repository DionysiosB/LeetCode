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
private:
    void dfs(TreeNode* node, int lb, int &cnt){
        if(!node){return;}
        cnt += (node->val >= lb);
        lb = std::max(node->val, lb);
        dfs(node->left, lb, cnt);
        dfs(node->right, lb, cnt);
    }

public:
    int goodNodes(TreeNode* root) {
        int cnt(0);
        dfs(root, -1e5, cnt);
        return cnt;
        
    }
};
