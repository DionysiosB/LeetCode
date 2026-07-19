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
class FindElements {
public:
    FindElements(TreeNode* root) {

        s = std::set<int>();

        if(!root){return;}
        root->val = 0;
        s.insert(0);
        dfs(root, s);
    }
    
    bool find(int target) {return s.count(target);}

private:
    void dfs(TreeNode* node, std::set<int> &s){
        if(!node){return;}
        if(node->left){
            const int nxt = 2 * node->val + 1;
            node->left->val = nxt;
            s.insert(nxt);
            dfs(node->left, s);
        }
        if(node->right){
            const int nxt = 2 * node->val + 2;
            node->right->val = nxt;
            s.insert(nxt);
            dfs(node->right, s);
        }

        return;
    }

    std::set<int> s;
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
