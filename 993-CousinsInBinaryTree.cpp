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
    
    void dfs(TreeNode* n, int depth, const int &x, const int &y, int &dx, int &dy){
        if(n == nullptr){return;}
        if(dx && dy){return;}
        
        if(n->left != nullptr && n->right != nullptr && n->left->val == x && n->right->val == y){dx = dy = -1; return;}
        if(n->left != nullptr && n->right != nullptr && n->left->val == y && n->right->val == x){dx = dy = -1; return;}
        
        if(n->val == x){dx = depth;}
        else if(n->val == y){dy = depth;}
        
        dfs(n->left, depth + 1, x, y, dx, dy);
        dfs(n->right, depth + 1, x, y, dx, dy);
    }
    
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        int dx(0), dy(0);
        dfs(root, 0, x, y, dx, dy);
        return (dx == dy && dx > 0);
    }
};
