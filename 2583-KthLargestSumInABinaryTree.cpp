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

    void dfs(TreeNode* node, std::vector<long long>& vs, int lvl){
        if(!node){return;}
        if(vs.size() <= lvl){vs.push_back(node->val);}
        else{vs[lvl] += node->val;}

        if(node->left){dfs(node->left, vs, lvl + 1);}
        if(node->right){dfs(node->right, vs, lvl + 1);}

        return;
    }

    long long kthLargestLevelSum(TreeNode* root, int k) {
        std::vector<long long> v;
        dfs(root, v, 0);
        if(v.size() < k){return -1;}
        sort(v.rbegin(), v.rend());
        return v[k - 1];
    }
};
