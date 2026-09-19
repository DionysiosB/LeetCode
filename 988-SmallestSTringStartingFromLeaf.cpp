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

    void dfs(TreeNode* node, std::string s, std::string &minstr){
        if(!node){return;}
        
        std::string w(s);
        w += (char) ('a' + node->val);
        
        if(node->left == nullptr && node->right == nullptr){
            std::reverse(w.begin(), w.end());
            minstr = std::min(minstr, w);
            return;
        }
    
        if(node->left){dfs(node->left, w, minstr);}
        if(node->right){dfs(node->right, w, minstr);}
    }


    string smallestFromLeaf(TreeNode* root) {
        std::string x(8507, 'z');
        dfs(root, "", x);
        return x;
    }
};
