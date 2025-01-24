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
    
    void dfs(TreeNode* node, std::vector<int> &v){
        if(node == nullptr){return;}
        if(node->left != nullptr && node->right == nullptr){v.push_back(node->left->val);}
        if(node->right != nullptr && node->left == nullptr){v.push_back(node->right->val);}
        dfs(node->left, v);
        dfs(node->right, v);
        return;
    }
    
    vector<int> getLonelyNodes(TreeNode* root) {
        std::vector<int> res;
        dfs(root, res);
        return res;
    }
};
