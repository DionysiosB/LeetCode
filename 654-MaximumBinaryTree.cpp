/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void dfs(std::vector<int>& nums, TreeNode* node, int left, int right) {
        if(left >= right){return;}

        int idx(left), mx(0);
        for(int p = left; p < right; p++) {
            if(nums[p] > mx){mx = nums[p]; idx = p;}
        }

        node->val = mx;
        if(left < idx) {
            TreeNode* ln = new TreeNode();
            dfs(nums, ln, left, idx);
            node->left = ln;
        }
        if(idx + 1 < right) {
            TreeNode* rn = new TreeNode();
            dfs(nums, rn, idx + 1, right);
            node->right = rn;
        }

}

TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    TreeNode* root = new TreeNode();
    dfs(nums, root, 0, nums.size());
    return root;
    }
}
;
