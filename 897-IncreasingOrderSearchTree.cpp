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
        dfs(node->left, v);
        v.push_back(node->val);
        dfs(node->right, v);
    }
    
    
    TreeNode* increasingBST(TreeNode* root) {    
        std::vector<int> v;
        dfs(root, v);
        TreeNode* res = nullptr;
        TreeNode* idx = nullptr;
        for(int p = 0; p < v.size(); p++){
            TreeNode* tn = new TreeNode;
            tn->val = v[p];
            tn->left = nullptr; tn->right = nullptr;
            if(p == 0){res = tn; idx = tn;}
            else{idx->right = tn; idx = tn;}
        }
        
        return res;
    }
};
