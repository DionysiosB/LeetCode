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

private:
    std::vector<std::vector<int> > v;
    std::queue<std::pair<TreeNode *, int> > q;

public:
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL){return v;}
        q.push(std::make_pair(root, 0));
        getVector();
        return v;
    }
    
    void getVector(){
        while(!q.empty()){
            std::pair<TreeNode* , int> current = q.front();
            q.pop();
            TreeNode* tn = current.first;
            int depth = current.second;
            
            while(depth >= v.size()){std::vector<int> u; v.push_back(u);}
            v[depth].push_back(tn->val);
            
            if(tn->left != NULL){q.push(std::make_pair(tn->left, depth + 1));}
            if(tn->right != NULL){q.push(std::make_pair(tn->right, depth + 1));}
        }
    }
};
