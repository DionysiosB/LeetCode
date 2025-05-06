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

    void dfs(TreeNode* a, TreeNode* b, TreeNode* c){
        if(!(a || b)){return;}
        TreeNode *leftA(nullptr), *leftB(nullptr), *rightA(nullptr), *rightB(nullptr);
        if(a){c->val += a->val; leftA = a->left; rightA = a->right;}
        if(b){c->val += b->val; leftB = b->left; rightB = b->right;}

        if(leftA || leftB){
            c->left = new TreeNode();
            dfs(leftA, leftB, c->left);
        }
        
        if(rightA || rightB){
            c->right = new TreeNode();
            dfs(rightA, rightB, c->right);
        }
    }

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!(root1 || root2)){return nullptr;}
        
        TreeNode* nt = new TreeNode();
        dfs(root1, root2, nt);
        return nt;
    }
};
