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
    
    std::pair<int, int> dfs(TreeNode* node, int &cnt){
        if(node == nullptr){return std::make_pair(0, 0);}
        
        std::pair<int, int> ls = dfs(node->left, cnt);
        std::pair<int, int> rs = dfs(node->right, cnt);
        
        int total = ls.first + rs.first + node->val;
        int num = ls.second + rs.second + 1;
        cnt += (node->val == total / num);
        return std::make_pair(total + node->val, num + 1);
    }
    
    
    int averageOfSubtree(TreeNode* root) {
        int cnt(0);
        dfs(root, cnt);
        return cnt;
    }
};
