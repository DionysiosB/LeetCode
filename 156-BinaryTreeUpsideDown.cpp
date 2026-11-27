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
    TreeNode* upsideDownBinaryTree(TreeNode* root) {

        if(!root || !root->left){return root;}
        TreeNode* prevLeft  = root->left;
        TreeNode* prevRight = root->right;
        TreeNode* nxtRoot = upsideDownBinaryTree(root->left);
        prevLeft->left  = prevRight;
        prevLeft->right = root;
        root->left = root->right = nullptr;
        return nxtRoot;
    }
};
