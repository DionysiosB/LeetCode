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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        const int n = inorder.size();
        std::unordered_map<int,int> w;
        for(int p = 0; p < n; ++p){w[inorder[p]] = p;}
        int idx(n-1);
        return makeTree(postorder, w, idx, 0, n-1);
    }

    TreeNode* makeTree(std::vector<int> &postorder, std::unordered_map<int, int> &w, int &index, int start, int stop){
        if(start > stop){return nullptr;}
        TreeNode *root = new TreeNode(postorder[index--]);
        int pos = w[root->val];
        root->right = makeTree(postorder, w, index, pos + 1,    stop);
        root->left  = makeTree(postorder, w, index,   start, pos - 1);
        return root;
    }
};
