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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        const int n = preorder.size();
        unordered_map<int, int> w;
        for(int p = 0; p < n; p++){w[inorder[p]] = p;}
        int idx = 0;
        return construct(preorder, w, idx, 0, n);
    }

private:
    TreeNode* construct(const vector<int>& preorder, unordered_map<int, int>& where, int& index, int start, int stop) {
        if(start >= stop){return nullptr;}
        TreeNode* root = new TreeNode(preorder[index++]);
        int pos = where[root->val];
        root->left  = construct(preorder, where, index,   start,  pos);
        root->right = construct(preorder, where, index, pos + 1, stop);
        return root;
    }
};
