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

    void dfs(TreeNode* root, std::vector<int> &v){
        if(!root){return;}
        v.push_back(root->val);
        dfs(root->left, v);
        dfs(root->right, v);
    }

    vector<int> closestKValues(TreeNode* root, double target, int k) {

        std::vector<int> v;
        dfs(root, v);
        sort(v.begin(), v.end(), [target](int a, int b){return std::abs(a - target) < std::abs(b - target);});
        while(v.size() > k){v.pop_back();}
        return v;
    }
};
