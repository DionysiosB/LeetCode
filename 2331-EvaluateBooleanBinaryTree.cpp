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
    bool evaluateTree(TreeNode* root) {

        if(root == nullptr){return 0;}
        else if(root->val == 0){return 0;}
        else if(root->val == 1){return 1;}

        int lv = evaluateTree(root->left);
        int rv = evaluateTree(root->right);

        if(root->val == 2){return lv || rv;}
        else if(root->val == 3){return lv && rv;}

        return 0;
    }
};
