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
    long long dfs(TreeNode* node, int &cnt){
        if(!node){return 0;}
        long long sl(0), sr(0);
        if(node->left){sl = dfs(node->left, cnt);}
        if(node->right){sr = dfs(node->right, cnt);}
        cnt += (node->val == sl + sr);
        return node->val + sl + sr;
    }

    int equalToDescendants(TreeNode* root) {
        int cnt(0);
        dfs(root, cnt);
        return cnt;
    }
};
