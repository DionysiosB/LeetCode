/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

private:
     bool balanced = true;

public:
    bool isBalanced(TreeNode* root) {
        getDepth(root);
        return balanced;
    }
    
    int getDepth(TreeNode* root){
        if(!balanced){return 0;}
        if(root == NULL){return 0;}
        int a = getDepth(root->left);
        int b = getDepth(root->right);
        if((a > b + 1) || (b > a + 1)){balanced = false; return 0;}
        return (1 + ((a > b) ? a : b));
    }
    
};
