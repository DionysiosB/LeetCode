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
    int dfs(TreeNode* node, int &tilt){
        if(!node){return 0;}
        int leftdfs  = dfs(node->left,  tilt);
        int rightdfs = dfs(node->right, tilt);
        tilt += std::abs(leftdfs - rightdfs);
        return (leftdfs + rightdfs + node->val);
    }

    int findTilt(TreeNode* root) {
        int tilt(0);
        dfs(root, tilt);
        return tilt;
    }
};
