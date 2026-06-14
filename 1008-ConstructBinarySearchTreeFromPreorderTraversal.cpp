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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return getbst(preorder, 0, preorder.size() - 1);
    }

    TreeNode* getbst(std::vector<int> &v, int start, int stop){
        if(start > stop){return nullptr;}
        TreeNode* node = new TreeNode(v[start]);
        int idx(stop + 1);
        for(int p = start + 1; p <= stop; p++){
            if(v[p] > v[start]){idx = p; break;}
        }

        node->left = getbst(v, start + 1, idx - 1);
        node->right = getbst(v, idx, stop);
        return node;
    }

};
