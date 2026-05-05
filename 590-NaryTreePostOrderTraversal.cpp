/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {

private:
    void dfs(Node* node, std::vector<int> &v){
        if(!node){return;}
        for(Node* child: node->children){dfs(child, v);}
        v.push_back(node->val);
    }
public:
    vector<int> postorder(Node* root) {
        std::vector<int> v;
        dfs(root, v);
        return v;
    }
};
