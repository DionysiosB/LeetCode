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

    void read(TreeNode *root, std::vector<bool> &w){
        if(root == nullptr){return;}
        w[root->val] = 1;
        read(root->left, w);
        read(root->right, w);
    }

    void write(TreeNode *root, const std::vector<int> &v){
        if(root == nullptr){return;}
        root->val = v[root->val];
        write(root->left, v);
        write(root->right, v);
    }

    TreeNode* bstToGst(TreeNode* root) {
        std::vector<bool> w(102, 0);
        read(root, w);
        std::vector<int> v(102, 0);
        for(int p = 100; p >= 0; p--){v[p] += v[p + 1] + p * w[p];}
        write(root, v);
        return root;
    }
};
