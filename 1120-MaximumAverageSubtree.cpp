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

    std::pair<double, int> dfs(TreeNode* node, double &mxmean){
        if(!node){return std::make_pair(0, 0);}

        std::pair<double, int> lv = dfs(node->left, mxmean);
        std::pair<double, int> rv = dfs(node->right, mxmean);

        double total = node->val + lv.first + rv.first;
        int cnt = 1 + lv.second + rv.second;
        double mean = 1.0 * total / cnt;
        mxmean = std::max(mean, mxmean);
        return std::make_pair(total, cnt);
    }

    double maximumAverageSubtree(TreeNode* root) {
        double mxavg(0);
        dfs(root, mxavg);
        return mxavg;
    }
};
