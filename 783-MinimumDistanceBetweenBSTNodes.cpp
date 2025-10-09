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
        if(!node){return;}
        v.push_back(node->val);
        dfs(node->left, v);
        dfs(node->right, v);
    }

    int minDiffInBST(TreeNode* root) {
        std::vector<int> v;
        dfs(root, v);
        sort(v.begin(), v.end());
        int mn(1e9);
        for(int p = 1; p < v.size(); p++){
            int diff = v[p] - v[p - 1];
            mn = (mn < diff ? mn :diff); 
        }
        return mn;
    }
};
