/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
    std::vector<int> nums;
    
public:

    void getInOrderTraversal(TreeNode* root){
        
        if(root == NULL){return;}
        if(root->left != NULL){getInOrderTraversal(root->left);}
        nums.push_back(root->val);
        if(root->right != NULL){getInOrderTraversal(root->right);}
    }

    std::vector<int> inorderTraversal(TreeNode* root) {
        nums.clear();
        getInOrderTraversal(root);
        return nums;
        
    }
};
