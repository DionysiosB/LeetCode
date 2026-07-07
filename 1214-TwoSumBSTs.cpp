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

    void dfsA(TreeNode* node, std::set<int> &s){
        if(!node){return;}
        s.insert(node->val);
        dfsA(node->left, s);
        dfsA(node->right, s);
    }

    bool dfsB(TreeNode* node, const std::set<int> &s, const int &target){
        if(!node){return false;}
        if(dfsB(node->left, s, target) || dfsB(node->right, s, target)){return true;}
        if(s.count(target - node->val)){return true;}
        return false;
    }

    bool twoSumBSTs(TreeNode* root1, TreeNode* root2, int target) {
        std::set<int> fs;
        dfsA(root1, fs);
        return dfsB(root2, fs, target);
    }
};
