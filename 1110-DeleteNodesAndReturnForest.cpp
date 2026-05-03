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

private:
    void dfs(TreeNode* node, bool toadd, const std::set<int> &tds, std::vector<TreeNode*> &v){
        if(!node){return;}
        int value = node->val;
        if(tds.count(value)){
            dfs(node->left, 1, tds, v);
            dfs(node->right, 1, tds, v);
            node->left = node->right = nullptr;
            delete node;
            return;
        }
        
        if(toadd){v.push_back(node);}
        if(node->left){
            TreeNode* f = node->left;
            if(tds.count(f->val)){node->left = nullptr;}
            dfs(f, 0, tds, v);
        }
        if(node->right){
            TreeNode* f = node->right;
            if(tds.count(f->val)){node->right = nullptr;}
            dfs(f, 0, tds, v);
        }
    }

public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {

        std::vector<TreeNode*> v;
        std::set<int> s; for(int p = 0; p < to_delete.size(); p++){s.insert(to_delete[p]);}
        dfs(root, 1, s, v);
        return v;
    }
};
