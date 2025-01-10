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
    
    void dfs(TreeNode* node, std::vector<int> &v){
        if(node == nullptr){return;}
        if(node->left == nullptr && node->right == nullptr){v.push_back(node->val);}
        else{dfs(node->left, v); dfs(node->right, v);}
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        std::vector<int> ta, tb;
        dfs(root1, ta);
        dfs(root2, tb);
        if(ta.size() != tb.size()){return false;}
        for(int p = 0; p < ta.size(); p++){if(ta[p] != tb[p]){return false;}}
        return true;
    }
};
