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

int maxLen(TreeNode* root, int &diameter){
    if(root == nullptr){return 0;}
    int leftLen  = maxLen(root->left,  diameter);
    int rightLen = maxLen(root->right, diameter);
    int mxLen = 1 + (leftLen > rightLen ? leftLen : rightLen);
    int tst = 1 + leftLen + rightLen;
    diameter = (diameter > tst ? diameter : tst);
    return mxLen;
}

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diam(0);
        maxLen(root, diam);
        return diam - 1;
    }
};
