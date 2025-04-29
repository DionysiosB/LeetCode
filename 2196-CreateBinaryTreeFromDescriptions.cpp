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
    
    void dfs(TreeNode* n, std::map<int, int> &left, std::map<int, int> &right){
        if(left.count(n->val)){
            TreeNode* lc = new TreeNode(left[n->val]);
            n->left = lc;
            dfs(lc, left, right);
        }
        if(right.count(n->val)){
            TreeNode* rc = new TreeNode(right[n->val]);
            n->right = rc;
            dfs(rc, left, right);
        }
    }
    
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        
        std::map<int, int> left, right;
        std::set<int> s; for(int p = 0; p < d.size(); p++){s.insert(d[p][0]);}
        for(int p = 0; p < d.size(); p++){
            if(d[p][2]){left[d[p][0]] = d[p][1];}
            else{right[d[p][0]] = d[p][1];}
            if(s.count(d[p][1])){s.erase(d[p][1]);}
        }
        
        int vr = *s.begin();
        TreeNode* root = new TreeNode(vr);
        dfs(root, left, right);
        return root;
    }
};
