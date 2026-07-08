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

    void dfs(TreeNode* node, int lvl, std::map<int, int64_t> &mv){
        if(!node){return;}
        mv[lvl] += node->val;
        dfs(node->left, lvl + 1, mv);
        dfs(node->right, lvl + 1, mv);
    }

    int minimumLevel(TreeNode* root) {

        std::map<int, int64_t> m;
        dfs(root, 1, m);

        int ans(1), mxt(m.begin()->second);
        for(std::map<int, int64_t>::iterator it = m.begin(); it != m.end(); it++){
            int level = it->first;
            int64_t total = it->second;
            if(total < mxt){mxt = total; ans = level;}
        }

        return ans;
    }
};
