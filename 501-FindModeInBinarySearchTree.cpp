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
    
    void dfs(TreeNode* node, std::map<int, int> &m, int& mx){
        if(node == nullptr){return;}
        ++m[node->val];
        mx = (mx > m[node->val] ? mx : m[node->val]);
        dfs(node->left, m, mx);
        dfs(node->right, m, mx);
    }
    
    vector<int> findMode(TreeNode* root) {
        std::map<int, int> m; int md(0);
        dfs(root, m, md);
        std::vector<int> v;
        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            if(it->second == md){v.push_back(it->first);}
        }
        return v;
    }
};
