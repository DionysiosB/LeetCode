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
    int findBottomLeftValue(TreeNode* root) {

        std::vector<TreeNode*> v;
        v.push_back(root); int res(0);
        while(!v.empty()){
            res = v[0]->val;
            std::vector<TreeNode*> w;
            for(int p = 0; p < v.size(); p++){
                if(v[p]->left){w.push_back(v[p]->left);}
                if(v[p]->right){w.push_back(v[p]->right);}
            }
            v = w;
        }

        return res;
    }
};
