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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == nullptr){return std::vector<int>(0);}
        std::vector<int> left  = postorderTraversal(root->left);
        std::vector<int> right = postorderTraversal(root->right);
        
        std::vector<int> res = std::vector<int>(left.size() + right.size() + 1);
        for(int p = 0; p < left.size(); p++){res[p] = left[p];}
        for(int p = 0; p < right.size(); p++){res[left.size() + p] = right[p];}
        res.back() = root->val;

        return res;
    }
};
