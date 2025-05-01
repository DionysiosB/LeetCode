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
    
    int dfs(TreeNode* node, int depth, int &mxd, TreeNode* &lca){
        if(node == nullptr){return 0;}
        
        mxd = (mxd > depth ? mxd : depth);
        int dpa(-1), dpb(-1);
        if(node->left){dpa = dfs(node->left, depth + 1, mxd, lca);}
        if(node->right){dpb = dfs(node->right, depth + 1, mxd, lca);}
        
        if(dpa < 0 && dpb < 0 && depth == mxd){lca = node;}        
        else if(dpa == dpb && dpa == mxd){lca = node;}
        
        if(dpa < 0 && dpb < 0){return depth;}
        else{return (dpa > dpb ? dpa : dpb);}
    }
    
    
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        TreeNode* res(root);
        int mxd(0);
        dfs(root, 0, mxd, res);
        return res;
        
    }
};
