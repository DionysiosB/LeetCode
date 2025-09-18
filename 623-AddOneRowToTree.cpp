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

    void dfs(TreeNode* node, const int &val, const int &td, int md){
        if(!node){return;}
        if(md + 1 == td){
            TreeNode* a = new TreeNode(val);
            TreeNode* b = new TreeNode(val);
            TreeNode * cl = node->left;  node->left  = a; a->left  = cl;
            TreeNode * cr = node->right; node->right = b; b->right = cr;
            return;
        }

        dfs(node->left,  val, td, md + 1);
        dfs(node->right, val, td, md + 1);
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* nr = new TreeNode(val);
            nr->left = root;
            return nr;
        }

        dfs(root, val, depth, 1);
        return root;
    }
};
