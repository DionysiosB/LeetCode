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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int x = p->val;
        int y = q->val;
        TreeNode * res = root;
        while(true){
            int z = res->val;
            if(x < z && y < z){res = res->left;}
            else if(x > z && y > z){res = res->right;}
            else{return res;}
        }

        return nullptr;
    }
};
