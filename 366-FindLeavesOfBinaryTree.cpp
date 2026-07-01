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
    vector<vector<int>> findLeaves(TreeNode* root) {
         std::vector<std::vector<int> > res;
         helper(root, res);
         return res;
    }

    int helper(TreeNode* node, std::vector<std::vector<int> > &v){
        if(!node){return -1;}
        int ldepth = helper(node->left, v);
        int rdepth = helper(node->right, v);
        int depth = 1 + std::max(ldepth, rdepth);
        while(v.size() <= depth){v.push_back(std::vector<int>());}
        v[depth].push_back(node->val);
        return depth;
    }

};
