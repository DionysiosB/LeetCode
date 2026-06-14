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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        int x = dfs(root, target);
        return x ? nullptr : root;
    }

private:
    bool dfs(TreeNode* node, int target){
        if(!node){return 0;}
        int dl = dfs(node->left, target);
        int dr = dfs(node->right, target);
        if(dl){TreeNode * tmp = node->left; node->left = nullptr; delete tmp;}
        if(dr){TreeNode * tmp = node->right; node->right = nullptr; delete tmp;}
        return (node->left == nullptr && node->right == nullptr && node->val == target);
    }
};
