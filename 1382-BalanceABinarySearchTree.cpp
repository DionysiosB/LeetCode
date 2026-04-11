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
    TreeNode* balanceBST(TreeNode* root) {
        std::vector<int> v;
        Solution::traverseTree(root, v);
        return Solution::buildBST(v, 0, v.size() - 1);
    }

private:
    void traverseTree(TreeNode* node, std::vector<int> &v){
        if(!node){return;}
        traverseTree(node->left, v);
        v.push_back(node->val);
        traverseTree(node->right, v);
    }

    TreeNode* buildBST(const std::vector<int> &v, int start, int stop){
        if(start > stop){return nullptr;}
        int mid = (start + stop) / 2;
        return new TreeNode(v[mid], buildBST(v, start, mid - 1), buildBST(v, mid + 1, stop));
    }

};
