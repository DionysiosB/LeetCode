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
    
    void dfs(TreeNode* node, int depth, int &mxdepth, int &sum){
        if(node == nullptr){return;}
        if(node->left == nullptr && node->right == nullptr){
            if(depth > mxdepth){mxdepth = depth; sum = node->val;}
            else if(depth == mxdepth){sum += node->val;}
        }
        else{
            dfs(node->left, depth + 1, mxdepth, sum);
            dfs(node->right, depth + 1, mxdepth, sum);
        }
    }
    
    
    int deepestLeavesSum(TreeNode* root) {
        int depth(0), mxdepth(0), sum(0);
        dfs(root, depth, mxdepth, sum);
        return sum;
    }
};
