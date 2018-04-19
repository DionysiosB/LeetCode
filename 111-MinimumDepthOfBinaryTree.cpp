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

    void dfs(TreeNode* n, int depth, int &minDepth){
        if(n == NULL){return;}
        if(n->left == NULL && n->right == NULL){
            minDepth = (depth < minDepth) ? depth : minDepth;
            return;
        }

        dfs(n->left, depth + 1, minDepth);
        dfs(n->right, depth + 1, minDepth);
    }

    int minDepth(TreeNode* root) {
        if(root == NULL){return 0;}
        int md = INT_MAX;
        dfs(root, 1, md);
        return md;
    }
};
