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
    std::vector<std::string> paths;
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        getPaths(root, "");
        return paths;
    }
    
    void getPaths(TreeNode* n, std::string sofar){
        
        if(n == NULL){return;}
        
        if(sofar.size() > 0){sofar += "->";}
        sofar = sofar + std::to_string(n->val);
        
        if((n->left == NULL) && (n->right == NULL)){paths.push_back(sofar); return;}
        if(n->left != NULL){getPaths(n->left, sofar);}
        if(n->right != NULL){getPaths(n->right, sofar);}
    }
};
