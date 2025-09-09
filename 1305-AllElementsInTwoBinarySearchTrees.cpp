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

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        std::vector<int> v;
        dfs(root1, v);
        dfs(root2, v);
        sort(v.begin(), v.end());
        return v;
    }
};
