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
public:

    void getLeftSum(TreeNode* root, int &sum){
        if(root == NULL){return;}
        else if(root->left != NULL && root->left->left == NULL && root->left->right == NULL){sum += root->left->val;}
        getLeftSum(root->left, sum);
        getLeftSum(root->right, sum);
    }


    int sumOfLeftLeaves(TreeNode* root) {
        int leftSum(0);
        getLeftSum(root, leftSum);
        return leftSum;
    }
};
