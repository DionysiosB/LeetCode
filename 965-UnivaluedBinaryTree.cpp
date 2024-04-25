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

    bool checkUnival(TreeNode* node, int value){
        if(node == nullptr){return true;}
        if(node->val != value){return false;}
        if(!checkUnival(node->left, value)){return false;}
        if(!checkUnival(node->right, value)){return false;}
        return true;
    }


    bool isUnivalTree(TreeNode* root) {
        return checkUnival(root, root->val);
    }
};
