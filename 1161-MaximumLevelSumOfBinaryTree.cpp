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

    void dfs(TreeNode* node, int level, std::vector<long> &v){
        if(!node){return;}
        if(v.size() <= level){v.push_back(0);}
        v[level] += node->val;
        dfs(node->left, level + 1, v);
        dfs(node->right, level + 1, v);
        return;
    }

    int maxLevelSum(TreeNode* root) {
        std::vector<long> v;
        dfs(root, 0, v);
        long cmx(-1e9 - 7), res(-1);
        for(long p = 0; p < v.size(); p++){
            if(v[p] > cmx){cmx = v[p]; res = p + 1;}
        }

        return res;
    }
};
