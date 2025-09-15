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

    std::pair<int, int> dfs(TreeNode* node, int &v){
        if(!node){return std::make_pair(0, 0);}
        int mn(node->val), mx(node->val);
        if(node->left){
            std::pair<int, int> lp = dfs(node->left, v);
            v =  std::max(v, std::abs(node->val - lp.first));
            v =  std::max(v, std::abs(node->val - lp.second));
            mn = (mn < lp.first ? mn : lp.first);
            mx = (mx > lp.second ? mx : lp.second);
        }

        if(node->right){
            std::pair<int, int> rp = dfs(node->right, v);
            v =  std::max(v, std::abs(node->val - rp.first));
            v =  std::max(v, std::abs(node->val - rp.second));
            mn = (mn < rp.first ? mn : rp.first);
            mx = (mx > rp.second ? mx : rp.second);
        }

        return std::make_pair(mn, mx);
    }



    int maxAncestorDiff(TreeNode* root) {
        int mx(0);
        dfs(root, mx);
        return mx;
    }
};
