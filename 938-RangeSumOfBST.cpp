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

void dfs(TreeNode* root, int low, int high, int &sum){
    if(root == nullptr){return;}
    if(low <= root->val && root->val <= high){sum += root->val;}
    dfs(root->left,  low, high, sum);
    dfs(root->right, low, high, sum);
}

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int total(0);
        dfs(root, low, high, total);
        return total;
        
    }
};
