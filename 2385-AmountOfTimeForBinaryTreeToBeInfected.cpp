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

    int dfs(TreeNode* root, int start, int &ans){
        if(!root){return 0;}
        int dl = dfs(root->left, start, ans);
        int dr = dfs(root->right, start, ans);

        if(root->val == start){
            ans = std::max(dl, dr); //Time from start and below
            return -1; //-1 marks to the parents that called this node that start is in the subtree
        }
        else if(dl >= 0 && dr >= 0){return 1 + std::max(dl, dr);} //start has not been encountered
        else{ //start has been encountered below; Need to go up to start
            ans = std::max(ans, std::abs(dl) + std::abs(dr)); //dl or dr is negative
            return std::min(dl, dr) - 1;  //
        }
    }

    int amountOfTime(TreeNode* root, int start) {
        int ans(0);
        dfs(root, start, ans);
        return ans;
    }
};
