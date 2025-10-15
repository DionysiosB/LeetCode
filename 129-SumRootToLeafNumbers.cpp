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

    void dfs(TreeNode* node, int prev, int &s){
        if(!node){return;}
        int mine = 10 * prev + node->val;
        if(!(node->left) && !(node->right)){s += mine;}
        else{
            if(node->left){dfs(node->left, mine, s);}
            if(node->right){dfs(node->right, mine, s);}
        }
    }

    int sumNumbers(TreeNode* root) {
        int sum(0);
        dfs(root, 0, sum);
        return sum;
    }
};
