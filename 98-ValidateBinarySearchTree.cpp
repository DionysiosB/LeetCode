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
    
    void inOrderTraversal(TreeNode* root){
        if(root == NULL){return;}
        if(root->left != NULL){inOrderTraversal(root->left);}
        nums.push_back(root->val);
        if(root->right != NULL){inOrderTraversal(root->right);}
    }
    
    bool isSorted(std::vector<int> a){
        if(a.size() <= 1){return true;}
        for(size_t p = 1; p < a.size(); p++){if(a[p - 1] >= a[p]) {return false;}}
        return true;
    }

public:
    bool isValidBST(TreeNode* root) {
        nums.clear();
        inOrderTraversal(root);
        return isSorted(nums);
    }
};
