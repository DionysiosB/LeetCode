i/**
 * Definition for a rope tree node.
 * struct RopeTreeNode {
 *     int len;
 *     string val;
 *     RopeTreeNode *left;
 *     RopeTreeNode *right;
 *     RopeTreeNode() : len(0), val(""), left(nullptr), right(nullptr) {}
 *     RopeTreeNode(string s) : len(0), val(std::move(s)), left(nullptr), right(nullptr) {}
 *     RopeTreeNode(int x) : len(x), val(""), left(nullptr), right(nullptr) {}
 *     RopeTreeNode(int x, RopeTreeNode *left, RopeTreeNode *right) : len(x), val(""), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    std::string dfs(RopeTreeNode* node){
        if(node == nullptr){return "";}
        if(node->len == 0){return node->val;}
        
        std::string sleft(""), sright("");
        if(node->left != nullptr){sleft = dfs(node->left);}
        if(node->right != nullptr){sright = dfs(node->right);}
        return sleft + sright;
    }
    
    
    char getKthCharacter(RopeTreeNode* root, int k) {
        
        std::string fs = dfs(root);
        return fs[k - 1];
        
    }
};
