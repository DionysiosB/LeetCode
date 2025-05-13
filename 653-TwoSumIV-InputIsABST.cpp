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

void dfs(TreeNode* root, std::set<int> &s){
    if(root == nullptr){return;}
    s.insert(root->val);
    dfs(root->left, s);
    dfs(root->right, s);
}

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        std::set<int> s;
        dfs(root, s);
        for(std::set<int>::iterator it = s.begin(); it != s.end(); it++){
            int x = *it;
            if(s.count(k - x) && 2 * x != k){return true;}
        }
        return false;
    }
}
