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
    TreeNode* reverseOddLevels(TreeNode* root) {
        bool oddLevel(0);
        std::vector<TreeNode*> v; v.push_back(root);

        while(!v.empty()){
            std::vector<TreeNode*> w;
            oddLevel = !oddLevel;
            for(int p = 0; p < v.size(); p++){
                if(!v[p]->left || !v[p]->right){break;}
                w.push_back(v[p]->left);
                w.push_back(v[p]->right);
            }

            if(w.empty()){break;}

            if(oddLevel){
                size_t n = w.size();
                for(int p = 0; p < n - 1 - p; p++){
                    int x = w[p]->val;
                    int y = w[n - 1 - p]->val;
                    w[p]->val = y;
                    w[w.size() - 1 - p]->val = x;
                }
            }

            v = w;

        }

        return root;
    }

};
