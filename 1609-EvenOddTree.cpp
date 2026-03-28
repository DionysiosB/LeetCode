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
    bool isEvenOddTree(TreeNode* root) {

        std::queue<std::pair<int, TreeNode* > > q;
        std::vector<int> v;
        q.push(std::make_pair(0, root));
        while(!q.empty()){
            int lvl = q.front().first;
            TreeNode* node = q.front().second;
            q.pop();
            if(!node){continue;}

            int value = node->val;

            if( (lvl % 2) == (value % 2)){return false;}
            if(lvl >= v.size()){v.push_back(value);}
            else{
                if(lvl % 2 == 1 && value >= v[lvl]){return false;}
                if(lvl % 2 == 0 && value <= v[lvl]){return false;}
                v[lvl] = value;
            }
            
            q.push(std::make_pair(lvl + 1, node->left));
            q.push(std::make_pair(lvl + 1, node->right));
        }

        return true;
    }
};
