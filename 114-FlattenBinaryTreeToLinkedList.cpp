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
    void flatten(TreeNode* root) {
        TreeNode *idx = root;
        while(idx){
            if(idx->left){
                TreeNode* pre = idx->left;
                while(pre->right){pre = pre->right;}
                pre->right = idx->right;
                idx->right = idx->left;
                idx->left = nullptr;
            }
            idx = idx->right;
        }
    }
};
