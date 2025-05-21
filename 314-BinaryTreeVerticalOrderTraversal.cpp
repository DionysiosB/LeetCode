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

    void dfs(TreeNode* node, int col, std::map<int, std::vector<int> > &m){
        if(!node){return;}
        m[col].push_back(node->val);
        dfs(node->left, col - 1, m);
        dfs(node->right, col + 1, m);
    }

    vector<vector<int>> verticalOrder(TreeNode* root) {
        std::map<int, std::vector<int> > m;

        std::queue<std::pair<TreeNode* , int> > q;
        q.push(std::make_pair(root, 0));
        while(!q.empty()){
            std::pair<TreeNode*, int> cur = q.front();
            q.pop();
            TreeNode* node = cur.first;
            int col = cur.second;
            m[col].push_back(node->val);
            if(node->left){q.push(std::make_pair(node->left, col - 1));}
            if(node->right){q.push(std::make_pair(node->right, col + 1));}
        }

        std::vector<std::vector<int> > v;
        for(std::map<int, std::vector<int> >::iterator it = m.begin(); it != m.end(); it++){v.push_back(it->second);}
        return v;
    }
};
