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
    vector<int> largestValues(TreeNode* root) {

        std::vector<TreeNode*> q;
        if(root){q.push_back(root);}
        std::vector<int> v;
        while(!q.empty()){
            std::vector<TreeNode*> qnxt;
            int cmx(INT_MIN);
            for(TreeNode * node : q){
                cmx = std::max(cmx, node->val);
                if(node->left){qnxt.push_back(node->left);}
                if(node->right){qnxt.push_back(node->right);}
            }
            v.push_back(cmx);
            q = qnxt;
        }

        return v;
    }
};
