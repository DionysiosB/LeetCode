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
public:
    Node* findRoot(vector<Node*> tree) {

        std::unordered_set<int> s;
        for(Node* x : tree){
            for(Node* child : x->children){
                s.insert(child->val);
            }
        }

        for(Node* x : tree){
            if(!s.count(x->val)){return x;}
        }
        
        return nullptr;
    }
};
