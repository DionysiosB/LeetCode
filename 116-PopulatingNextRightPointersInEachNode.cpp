/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root){return nullptr;}

        std::vector<Node*> v;
        v.push_back(root);
        while(!v.empty()){
            std::vector<Node*> w;
            for(int p = 0; p < v.size(); p++){
                v[p]->next = (p + 1 < v.size() ? v[p + 1] : nullptr);
                if(v[p]->left){w.push_back(v[p]->left);}
                if(v[p]->right){w.push_back(v[p]->right);}
            }

            v = w;
        }

        return root;
    }
};
