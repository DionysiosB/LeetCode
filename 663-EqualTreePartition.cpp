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

    int dfs(TreeNode* node){
        if(!node){return 0;}
        return node->val + dfs(node->left) + dfs(node->right);
    }

    int dfsB(TreeNode* node, int target, bool &possible){
        if(!node){return 0;}
        if(possible){return 0;}
        const int cur = node->val;
        int x = dfsB(node->left, target, possible);
        int y = dfsB(node->right, target, possible);
        if(node->left && x == target){possible = true;}
        if(node->right && y == target){possible = true;}
        if(!node->left && !node->right && cur == target){possible = true;}
        return x + y + cur;
    }

    bool checkEqualTree(TreeNode* root) {
        if(!root){return false;}
        else if(!(root->left || root->right)){return false;}

        int sum = dfs(root);
        if(sum % 2){return false;}
        
        bool ans(false);

        if(sum == 0){ 
            if(root->left){
                dfsB(root->left, 0, ans);
                if(ans){return true;}
            }
            if(root->right){
                dfsB(root->right, 0, ans);
                if(ans){return true;}
            }

            return false;
        }
        

        dfsB(root, sum / 2, ans);
        return ans;
    }
};
