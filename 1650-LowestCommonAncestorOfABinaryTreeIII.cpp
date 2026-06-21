/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {

        std::set<Node* > s;
        while(p){s.insert(p); p = p->parent;}
        while(q){
            if(s.count(q)){return q;}
            q = q->parent;
        }

        return nullptr;
    }
};
